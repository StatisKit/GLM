#ifndef STATISKIT_GLM_ESTIMATOR_HPP
#define STATISKIT_GLM_ESTIMATOR_HPP

namespace statiskit
{
    namespace glm
    {

        template<class D, class B>      
            ScalarRegressionFisherEstimation< D, B >::ScalarRegressionFisherEstimation() : OptimizationEstimation< Eigen::VectorXd, D, B >()
            {}

        template<class D, class B>
            ScalarRegressionFisherEstimation< D, B >::ScalarRegressionFisherEstimation(D const * estimated, UnivariateConditionalData const * data) : OptimizationEstimation< Eigen::VectorXd, D, B >(estimated, data)
            {}

        template<class D, class B>
            ScalarRegressionFisherEstimation< D, B >::ScalarRegressionFisherEstimation(const ScalarRegressionFisherEstimation  & estimation) : OptimizationEstimation< Eigen::VectorXd, D, B >(estimation)
            {}           

        template<class D, class B>
            ScalarRegressionFisherEstimation< D, B >::Estimator::Estimator() : OptimizationEstimation< Eigen::VectorXd, D, B >::Estimator()
            { 
                this->_maxits = 1e4;
                _solver = statiskit::linalg::solver_type::colPivHouseholderQr;
            }
        
        template<class D, class B>
            ScalarRegressionFisherEstimation< D, B >::Estimator::~Estimator()
            { delete _link; }

        template<class D, class B>
            ScalarRegressionFisherEstimation< D, B >::Estimator::Estimator(const Estimator& estimator) : OptimizationEstimation< Eigen::VectorXd, D, B >::Estimator(estimator)
            { 
                _link = estimator._link->copy().release();
                _solver = estimator._solver;
            }

        template<class D, class B>
            const statiskit::linalg::solver_type& ScalarRegressionFisherEstimation< D, B >::Estimator::get_solver() const
            { return _solver; }

        template<class D, class B>
            void ScalarRegressionFisherEstimation< D, B >::Estimator::set_solver(const statiskit::linalg::solver_type& solver)
            { _solver = solver; }

        template<class D, class B>
            const typename D::link_type* ScalarRegressionFisherEstimation< D, B >::Estimator::get_link() const
            { return _link; }

        template<class D, class B>
            void ScalarRegressionFisherEstimation< D, B >::Estimator::set_link(const typename D::link_type& link)
            { _link = link.copy().release(); }
        
        template<class D, class B>
            std::unique_ptr< UnivariateConditionalDistributionEstimation > ScalarRegressionFisherEstimation< D, B >::Estimator::operator() (const UnivariateConditionalData& data, const bool& lazy) const
            {
                Eigen::MatrixXd X = X_init(data);
                Eigen::VectorXd y = y_init(data), w = w_init(data);
                Eigen::VectorXd eta, mu = Eigen::VectorXd::Zero(y.size()), prime = Eigen::VectorXd::Zero(y.size()), prev, curr = Eigen::VectorXd::Zero(X.cols()); // TODO : initialize intercept equal to g(mean of y)
                curr(0) = this->_link->evaluate(y.mean());
                D* estimated = build_estimated(curr, data);//*((data.get_explanatories())->get_sample_space()));
                std::unique_ptr< UnivariateConditionalDistributionEstimation > estimation;
                if(!lazy)
                { estimation = std::make_unique< ScalarRegressionFisherEstimation< D, B > >(estimated, &data); }
                else
                { estimation = std::make_unique< LazyEstimation< D, B > >(estimated); }
                unsigned int its = 0;
                do
                {
                    prev = curr;
                    if(!lazy)
                    { static_cast< ScalarRegressionFisherEstimation< D, B >* >(estimation.get())->_iterations.push_back(prev); }
                    eta = X * curr;
                    for(unsigned int i = 0; i < eta.size(); ++i)
                    { 
                        mu(i) = _link->inverse(eta(i));
                        prime(i) = _link->inverse_derivative(eta(i));
                    }
                    Eigen::VectorXd u = Eigen::VectorXd::Zero(curr.size());
                    for(unsigned int i = 0; i < eta.size(); ++i)
                    {
                        if(boost::math::isfinite(mu(i)) && boost::math::isfinite(prime(i)))
                        { u -= ((y(i) - mu(i)) * w(i) * prime(i) / sigma_square(mu(i)) * X.row(i)).transpose(); }
                    }
                    Eigen::MatrixXd H = Eigen::MatrixXd::Zero(curr.size(), curr.size());
                    for(unsigned int i = 0; i < eta.size(); ++i)
                    {
                        if(boost::math::isfinite(mu(i)) && boost::math::isfinite(prime(i)))
                        { H -= w(i) * pow(prime(i), 2) / sigma_square(mu(i)) * X.row(i).transpose() * X.row(i); }
                    }
                    curr = prev + statiskit::linalg::solve(H, u, _solver);
                    ++its;
                } while(this->run(its, statiskit::__impl::reldiff(prev, curr)));
                if(boost::math::isfinite(curr.norm()))
                { 
                    estimated->get_predictor()->set_beta(curr);
                    if(!lazy)
                    { static_cast< ScalarRegressionFisherEstimation< D, B >* >(estimation.get())->_iterations.push_back(curr); }
                }
                else
                { estimated->get_predictor()->set_beta(prev); }
                return std::move(estimation);
            }

        template<class D, class B>
            Eigen::MatrixXd ScalarRegressionFisherEstimation< D, B >::Estimator::X_init(const UnivariateConditionalData& data) const
            {
                const MultivariateData* _data = data.get_explanatories();
                const MultivariateSampleSpace* sample_space = _data->get_sample_space();
                Eigen::MatrixXd X = Eigen::MatrixXd::Ones(_data->size(), 1+sample_space->encode());
                std::unique_ptr< MultivariateData::Generator > generator = _data->generator();
                Index index = 0;
                while(generator->is_valid())
                {
                    const MultivariateEvent* event = generator->event();
                    if(event)
                    { X.block(index, 1, 1, X.cols()-1) = sample_space->encode(*event); }
                    else
                    { X.block(index, 1, 1, X.cols()-1) = std::numeric_limits< double >::quiet_NaN() * Eigen::VectorXd::Ones(X.cols() - 1).transpose(); }
                    ++(*generator);
                    ++index;
                }
                return X;
            }

        template<class D, class B>
            Eigen::VectorXd ScalarRegressionFisherEstimation< D, B >::Estimator::w_init(const UnivariateConditionalData& data) const
            {
                Eigen::VectorXd w = Eigen::VectorXd::Ones(data.size());
                std::unique_ptr< UnivariateConditionalData::Generator > generator = data.generator();
                Index index = 0;
                while(generator->is_valid())
                { 
                    w(index) = generator->weight();
                    ++(*generator);
                    ++index;
                }
                return w;
            }
 
        template<class D, class B>      
            QuantitativeScalarRegressionFisherEstimation< D, B >::QuantitativeScalarRegressionFisherEstimation() : ScalarRegressionFisherEstimation< D, B >()
            {}

        template<class D, class B>
            QuantitativeScalarRegressionFisherEstimation< D, B >::QuantitativeScalarRegressionFisherEstimation(D const * estimated, UnivariateConditionalData const * data) : ScalarRegressionFisherEstimation< D, B >(estimated, data)
            {}

        template<class D, class B>
            QuantitativeScalarRegressionFisherEstimation< D, B >::QuantitativeScalarRegressionFisherEstimation(const QuantitativeScalarRegressionFisherEstimation  & estimation) : ScalarRegressionFisherEstimation< D, B >(estimation)
            {}           

        template<class D, class B>
            QuantitativeScalarRegressionFisherEstimation< D, B >::Estimator::Estimator() : ScalarRegressionFisherEstimation< D, B >::Estimator()
            {}
        
        template<class D, class B>
            QuantitativeScalarRegressionFisherEstimation< D, B >::Estimator::~Estimator()
            {}

        template<class D, class B>
            QuantitativeScalarRegressionFisherEstimation< D, B >::Estimator::Estimator(const Estimator& estimator) : ScalarRegressionFisherEstimation< D, B >::Estimator(estimator)
            {}

        template<class D, class B>
            Eigen::VectorXd QuantitativeScalarRegressionFisherEstimation< D, B >::Estimator::y_init(const UnivariateConditionalData& data) const
            {
                const UnivariateData* _data = data.get_response();
                Eigen::VectorXd y = Eigen::VectorXd::Zero(_data->size());
                std::unique_ptr< UnivariateData::Generator > generator = _data->generator();
                Index index = 0;
                while(generator->is_valid())
                {
                    const UnivariateEvent* event = generator->event();
                    if(event && event->get_event() == ELEMENTARY)
                    { y(index) = static_cast< const ElementaryEvent< typename D::link_type::family_type::event_type >* >(event)->get_value(); }
                    else
                    { y(index) = std::numeric_limits< double >::quiet_NaN(); }
                    ++(*generator);
                    ++index;
                }
                return y;
            }




        template< class D >      
            CategoricalRegressionFisherEstimation< D >::CategoricalRegressionFisherEstimation () :  OptimizationEstimation< Eigen::VectorXd, D, CategoricalUnivariateConditionalDistributionEstimation >()
            { _converged = false; }

        template< class D >
            CategoricalRegressionFisherEstimation< D >::CategoricalRegressionFisherEstimation (D const * estimated, UnivariateConditionalData const * data) :  OptimizationEstimation< Eigen::VectorXd, D, CategoricalUnivariateConditionalDistributionEstimation >(estimated, data)
            { _converged = false; }

        template< class D >
            CategoricalRegressionFisherEstimation< D >::CategoricalRegressionFisherEstimation (const CategoricalRegressionFisherEstimation & estimation) :  OptimizationEstimation< Eigen::VectorXd, D, CategoricalUnivariateConditionalDistributionEstimation >(estimation)
            { _converged = false; }

        template< class D >
            const double& CategoricalRegressionFisherEstimation< D >::get_loglikelihood() const
            { return _loglikelihood; }

        template< class D >
            const std::vector< double >& CategoricalRegressionFisherEstimation< D >::get_loglikelihood_sequence() const
            { return _loglikelihood_sequence; }    

        // template< class D >
        //     const Eigen::MatrixXd& CategoricalRegressionFisherEstimation< D >::get_asymptotic_tests(const D* model) const
        //     {
        //         Index beta_size = model->get_predictor()->get_beta().size();
        //         Eigen::MatrixXd table = Eigen::MatrixXd::Zero(beta_size, 4);
        //         table.block(0, 0, beta_size, 1) = model->get_predictor()->get_beta();
        //         // compute information matrix
        //         Eigen::MatrixXd information_matrix = _information_inverse;
        //         if(_converged)
        //         {}
        //         std::vector< Eigen::MatrixXd > Z = _design->Z_init(data);
        //         std::vector< Eigen::VectorXd > y = y_init(data);
        //         std::vector< double > w = w_init(data); 

        //         Eigen::MatrixXd ZG, ZGS, A;                
        //         Eigen::VectorXd eta, pi;
        //         for(Index k = 0; k < Z.size(); ++k)
        //         {

        //         }
        //         return table; 
        //     } 

        template< class D >
            const bool& CategoricalRegressionFisherEstimation< D >::get_converged() const
            { return _converged; }              

        template< class D >
            CategoricalRegressionFisherEstimation< D >::Estimator::Estimator() :  OptimizationEstimation< Eigen::VectorXd, D, CategoricalUnivariateConditionalDistributionEstimation >::Estimator()
            { 
                this->_maxits = 1e2;
                this->_mindiff = 1e-6;
                _initialization = new CategoricalFisherObservedInitialization(); 
                _design = new CompleteDesign();
            }
        
        template< class D >
            CategoricalRegressionFisherEstimation< D >::Estimator::~Estimator()
            { 
                delete _link;
                delete _initialization;
                delete _design;
            }

        template< class D >
            CategoricalRegressionFisherEstimation< D >::Estimator::Estimator(const Estimator& estimator) :  OptimizationEstimation< Eigen::VectorXd, D, CategoricalUnivariateConditionalDistributionEstimation >::Estimator(estimator)
            { 
                _link = estimator._link->copy().release(); 
                _design = estimator._design->copy().release();
                _initialization = estimator._initialization->copy().release();
            }

        template< class D >
            const typename D::link_type* CategoricalRegressionFisherEstimation< D >::Estimator::get_link() const
            { return _link; }

        template< class D >
            void CategoricalRegressionFisherEstimation< D >::Estimator::set_link(const typename D::link_type& link)
            { 
                delete _link;
                _link = link.copy().release(); 
            }
        // template< class D >
        //     const VectorLink* CategoricalRegressionFisherEstimation< D >::Estimator::get_link() const
        //     { return _link; }

        // template< class D >
        //     void CategoricalRegressionFisherEstimation< D >::Estimator::set_link(const VectorLink& link)
        //     { 
        //         delete _link;
        //         _link = link.copy().release(); 
        //     }

        template< class D >
            const CategoricalFisherInitialization* CategoricalRegressionFisherEstimation< D >::Estimator::get_initialization() const
            { return _initialization; }

        template< class D >
            void CategoricalRegressionFisherEstimation< D >::Estimator::set_initialization(const CategoricalFisherInitialization& initialization)
            {
                delete _initialization;
                _initialization = initialization.copy().release();
            }

        template< class D >
            const Design* CategoricalRegressionFisherEstimation< D >::Estimator::get_design() const
            { return _design; }

        template< class D >
            void CategoricalRegressionFisherEstimation< D >::Estimator::set_design(const Design& design)
            {
                delete _design;
                _design = design.copy().release();
            }

        template<class D >
            std::unique_ptr< UnivariateConditionalDistributionEstimation > CategoricalRegressionFisherEstimation< D >::Estimator::operator() (const UnivariateConditionalData& data, const bool& lazy) const
            {
                std::vector< Eigen::MatrixXd > Z = _design->Z_init(data);
                std::vector< Eigen::VectorXd > y = y_init(data);
                std::vector< double > w = w_init(data); 

                Eigen::VectorXd beta_curr = Eigen::VectorXd::Zero(_design->beta_size(data)), beta_prev;
                (*_initialization)(data, beta_curr, *_link);

                D * estimated = build_estimated(beta_curr, *(data.get_explanatories()->get_sample_space()), *( data.get_response()->get_sample_space()));

                std::unique_ptr< UnivariateConditionalDistributionEstimation > estimation;
                if(!lazy)
                { 
                    estimation = std::make_unique< CategoricalRegressionFisherEstimation< D > >(estimated, &data); 
                    static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_iterations.push_back(beta_curr);
                }
                else
                { estimation = std::make_unique< LazyEstimation< D, CategoricalUnivariateConditionalDistributionEstimation > >(estimated); }

                Eigen::MatrixXd ZG, ZGS, A;                
                Eigen::VectorXd b, eta, pi;
                double l_prev, l_curr = -1 * std::numeric_limits< double >::infinity(), L_curr;
                unsigned int its = 0;
                bool defined = true;
                do
                {
                    l_prev = l_curr;
                    l_curr = 0;

                    beta_prev = beta_curr;

                    A = Eigen::MatrixXd::Zero(beta_curr.rows(), beta_curr.rows());
                    b = Eigen::VectorXd::Zero(beta_curr.rows());
                    for(Index k = 0; k < Z.size(); ++k)
                    {
                        eta = Z[k] * beta_curr;
                        pi = _link->inverse(eta);

                        //// canonical link case :
                        // A += w[k] * Z[k].transpose().eval() * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() ) * Z[k];
                        // b += w[k] * Z[k].transpose().eval() * (y[k] - pi);

                        ZG = Z[k].transpose().eval() * _link->inverse_derivative(eta);
                        ZGS = ZG * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() ).inverse();
                        A += w[k] * ZGS * ZG.transpose().eval();                             
                        b += w[k] * ZGS * (y[k] - pi);       

                        l_curr += w[k] * ( y[k].transpose().eval() * Eigen::VectorXd(pi.array().log()) + (1-y[k].sum())*std::log(1-pi.sum()) );                  
                    }
                        static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_loglikelihood_sequence.push_back(l_curr);

                        b += A * beta_curr;                  
                        beta_curr = statiskit::linalg::solve(A, b, statiskit::linalg::solver_type::fullPivLu); //colPivHouseholderQr);
                        if(!lazy)
                        { static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_iterations.push_back(beta_curr); }
                        ++its;                        

//std::cout << " | beta_curr - beta_prev | = " << statiskit::__impl::reldiff(beta_prev, beta_curr) << std::endl;
                } while( std::abs((l_curr-l_prev)/l_curr) > this->_mindiff  && its < this->_maxits);//&& l_curr > l_prev //&& this->run(its, statiskit::__impl::reldiff(beta_prev, beta_curr)) 
                
                static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_Z = Z;
                static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_y = y;
                static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_w = w;
                // if (l_curr > l_prev)
                // {
                //     estimated->get_predictor()->set_beta(beta_curr);
                //     static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_loglikelihood = l_curr;
                //     static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_information_inverse = -A_curr.inverse();                    
                // }
                // else
                // {
                //     estimated->get_predictor()->set_beta(beta_prev);
                //     static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_loglikelihood = l_prev;
                //     static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_information_inverse = -A_prev.inverse();
                // }   
                std::vector< double > loglikelihood_sequence = static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_loglikelihood_sequence;
                std::vector< double >::iterator it_max = std::max_element(loglikelihood_sequence.begin(), loglikelihood_sequence.end());

                static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_loglikelihood = *it_max;
                estimated->get_predictor()->set_beta( static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_iterations[std::distance(loglikelihood_sequence.begin(), it_max)] );

                if(its < this->_maxits && std::distance(loglikelihood_sequence.begin(), it_max) == loglikelihood_sequence.size()-1)
                { 
                    static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_converged = true; 
                    static_cast< CategoricalRegressionFisherEstimation< D >* >(estimation.get())->_information_inverse = -A.inverse();
                }        

                return std::move(estimation);
            }

        template< class D >
            std::vector< Eigen::VectorXd > CategoricalRegressionFisherEstimation< D >::Estimator::y_init(const UnivariateConditionalData& data) const
            {
                const UnivariateData* _data = data.get_response();
                std::vector< Eigen::VectorXd > y;
                CategoricalSampleSpace* sample_space = const_cast< CategoricalSampleSpace* >(static_cast< const CategoricalSampleSpace* >(_data->get_sample_space() )); // data.get_response()->get_sample_space() ));
                encoding_type initial_encoding = sample_space->get_encoding();
                sample_space->set_encoding(encoding_type::TREATMENT);
                Index J = sample_space->get_cardinality();
                Eigen::MatrixXd identity = Eigen::MatrixXd::Identity(J-1, J-1);
                std::unique_ptr< UnivariateData::Generator > generator = _data->generator();
                while(generator->is_valid())
                {
                    const UnivariateEvent* event = generator->event();
                    if(event && event->get_event() == ELEMENTARY)
                    { y.push_back( sample_space->encode( static_cast< const ElementaryEvent< CategoricalEvent > * >(event)->get_value() ) ); }
                    else
                    { y.push_back( std::numeric_limits< double >::quiet_NaN() * Eigen::VectorXd::Ones(J-1) ); }
                    ++(*generator);
                }
                sample_space->set_encoding(initial_encoding);
                return y;
            }

        template< class D >
            std::vector< double > CategoricalRegressionFisherEstimation< D >::Estimator::w_init(const UnivariateConditionalData& data) const
            {
                std::vector< double > w;
                std::unique_ptr< UnivariateConditionalData::Generator > generator = data.generator();
                while(generator->is_valid())
                {
                    w.push_back(generator->weight());
                    ++(*generator);
                }
                return w;
            }
    }
}

#endif
