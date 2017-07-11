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
                Eigen::VectorXd eta, mu = Eigen::VectorXd::Zero(y.size()), prime = Eigen::VectorXd::Zero(y.size()), prev, curr = Eigen::VectorXd::Zero(X.cols());
                curr(0) = this->_link->evaluate(y.mean());
                D* estimated = build_estimated(curr, *((data.get_explanatories())->get_sample_space()));
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
            Eigen::VectorXd ScalarRegressionFisherEstimation< D, B >::Estimator::y_init(const UnivariateConditionalData& data) const
            {
                const UnivariateData* _data = data.get_response();
                Eigen::VectorXd y = Eigen::VectorXd::Ones(_data->size());
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
         
        template< class D >      
            CategoricalRegressionFisherEstimation< D >::CategoricalRegressionFisherEstimation () : ActiveEstimation< D, CategoricalUnivariateConditionalDistributionEstimation >()
            {}

        template< class D >
            CategoricalRegressionFisherEstimation< D >::CategoricalRegressionFisherEstimation (D const * estimated, UnivariateConditionalData const * data) : ActiveEstimation< D, CategoricalUnivariateConditionalDistributionEstimation >(estimated, data)
            {}

        template< class D >
            CategoricalRegressionFisherEstimation< D >::CategoricalRegressionFisherEstimation (const CategoricalRegressionFisherEstimation & estimation) : ActiveEstimation< D, CategoricalUnivariateConditionalDistributionEstimation >(estimation)
            {}

        template< class D >
            const double& CategoricalRegressionFisherEstimation< D >::get_loglikelihood() const
            { return _loglikelihood; }

        template< class D >
            const std::vector< double >& CategoricalRegressionFisherEstimation< D >::get_loglikelihood_sequence() const
            { return _loglikelihood_sequence; }            

        template< class D >
            CategoricalRegressionFisherEstimation< D >::Estimator::Estimator() : Optimization()
            { _maxits = 1e4; }
        
        template< class D >
            CategoricalRegressionFisherEstimation< D >::Estimator::~Estimator()
            { delete _link; }

        template< class D >
            CategoricalRegressionFisherEstimation< D >::Estimator::Estimator(const Estimator& estimator) : Optimization(estimator)
            { _link = estimator._link->copy().release(); }

        template< class D >
            const typename D::link_type* CategoricalRegressionFisherEstimation< D >::Estimator::get_link() const
            { return _link; }

        template< class D >
            void CategoricalRegressionFisherEstimation< D >::Estimator::set_link(const typename D::link_type& link)
            { _link = link.copy().release(); }
        
        template<class D >
            std::unique_ptr< UnivariateConditionalDistributionEstimation > CategoricalRegressionFisherEstimation< D >::Estimator::operator() (const UnivariateConditionalData& data, const bool& lazy) const
            {
                std::unique_ptr< UnivariateConditionalDistributionEstimation > estimation;
                if(lazy)
                { estimation = std::make_unique< LazyEstimation< D, CategoricalUnivariateConditionalDistributionEstimation > >(static_cast< const D* >((*this)(data, false)->get_estimated())); }
                else
                {
                    std::unique_ptr< CategoricalRegressionFisherEstimation< D > > _estimation = std::make_unique< CategoricalRegressionFisherEstimation< D > >(nullptr, &data);
                    _estimation->_beta.clear();
                    std::vector< Eigen::MatrixXd > Z = Z_init(data);
                    std::vector< Eigen::VectorXd > y = y_init(data);
                    std::vector< double > w = w_init(data);
                    Eigen::VectorXd beta = beta_init(data);
                    Eigen::MatrixXd ZG, ZGS, A;                
                    Eigen::VectorXd b, eta, pi;
                    double l_old, l_new = -1 * std::numeric_limits< double >::infinity();
                    unsigned int its = 0;
                    do
                    { 
                        _estimation->_beta.push_back(beta);
                        l_old = l_new;
                        l_new = 0;

                    	A = Eigen::MatrixXd::Zero(beta.rows(), beta.rows());
                    	b = Eigen::VectorXd::Zero(beta.rows());         
                     
                        for(Index k = 0; k < Z.size(); ++k)
                        {
    		                eta = Z[k] * beta;
    		                pi = _link->inverse(eta);

                            //// canonical link case :
                            // A += w[k] * Z[k].transpose().eval() * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() ) * Z[k];
                            // b += w[k] * Z[k].transpose().eval() * (y[k] - pi);

    		                ZG = Z[k].transpose().eval() * _link->inverse_derivative(eta);
                            ZGS = ZG * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() ).inverse();
    		                A += w[k] * ZGS * ZG.transpose().eval();                             
    		                b += w[k] * ZGS * (y[k] - pi);       

                            l_new += y[k].transpose().eval() * Eigen::VectorXd(pi.array().log()) + (1-y[k].sum())*std::log(1-pi.sum());                                  
                        }
                        _estimation->_loglikelihood_sequence.push_back(l_new);

    					b += A * beta; 					
                        beta = statiskit::linalg::solve(A, b, statiskit::linalg::solver_type::colPivHouseholderQr);
                        ++its;

                    }while((l_new-l_old)/std::abs(l_new)>this->_mindiff and its < 50); //while(this->run(its, statiskit::__impl::reldiff(_estimation->_beta.back(), beta)));
    				_estimation->_Z = Z;
    				_estimation->_y = y;
    				_estimation->_w = w;
                    if (l_new > l_old)
                    {
                        _estimation->_estimated = build_estimated(beta, *(data.get_explanatories()->get_sample_space()), *( data.get_response()->get_sample_space()));
                        _estimation->_loglikelihood = l_new;
                    }
                    else
                    {
                        _estimation->_estimated = build_estimated(_estimation->_beta.back(), *(data.get_explanatories()->get_sample_space()), *( data.get_response()->get_sample_space() ) );
                        _estimation->_loglikelihood = l_old;
                    }
                    estimation = std::move(_estimation);            
                }
                return estimation;
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

        template< class D >
            CompleteRegressionFisherEstimation < D >::CompleteRegressionFisherEstimation () : CategoricalRegressionFisherEstimation< D >()
            {}

        template< class D >
            CompleteRegressionFisherEstimation < D >::CompleteRegressionFisherEstimation (D const * estimated, UnivariateConditionalData const * data) : CategoricalRegressionFisherEstimation< D >(estimated, data)
            {}

        template< class D >
            CompleteRegressionFisherEstimation < D >::CompleteRegressionFisherEstimation (const CompleteRegressionFisherEstimation & estimation) : CategoricalRegressionFisherEstimation< D >(estimation)
            {}

        template< class D >
            CompleteRegressionFisherEstimation < D >::Estimator::Estimator() : CategoricalRegressionFisherEstimation< D >::Estimator()
            {}

        template< class D >
            CompleteRegressionFisherEstimation < D >::Estimator::Estimator(const Estimator& estimator) : CategoricalRegressionFisherEstimation< D >::Estimator(estimator)
            {}

        template< class D >
            std::vector< Eigen::MatrixXd > CompleteRegressionFisherEstimation < D >::Estimator::Z_init(const UnivariateConditionalData& data) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.get_response()->get_sample_space() )->get_cardinality();
                const MultivariateData* _data = data.get_explanatories();
                const MultivariateSampleSpace* sample_space = _data->get_sample_space();
                Index p = sample_space->encode();
                std::vector< Eigen::MatrixXd > Z;
                Eigen::MatrixXd identity = Eigen::MatrixXd::Identity(J-1, J-1);
                std::unique_ptr< MultivariateData::Generator > generator = _data->generator();
                Eigen::MatrixXd Z_k = Eigen::MatrixXd::Identity(J-1, (J-1) * (1+p));
                while(generator->is_valid())
                {
                    const MultivariateEvent* event = generator->event();
                    if(event)
                    {      
                        Z_k.block(0, J-1, J-1, (J-1) * p ) = Eigen::kroneckerProduct(identity, sample_space->encode(*event));
                        Z.push_back(Z_k);
                    }
                    else
                    {
                        Z_k.block(0, J-1, J-1, (J-1) * p ) = std::numeric_limits< double >::quiet_NaN() * Eigen::MatrixXd::Ones(J-1, (J-1) * p);
                        Z.push_back(Z_k);
                    }
                    ++(*generator);
                }
                return Z;
            }

        template<class D >
            Eigen::VectorXd CompleteRegressionFisherEstimation < D >::Estimator::beta_init(const UnivariateConditionalData& data) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.get_response()->get_sample_space() )->get_cardinality();
                Index p = data.get_explanatories()->get_sample_space()->encode(); 
                Eigen::VectorXd beta = Eigen::VectorXd::Zero((J-1)*(1+p));
                return beta;
            }

        template<class D >        
            CompleteVectorPredictor CompleteRegressionFisherEstimation < D >::Estimator::build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const
            { return CompleteVectorPredictor(explanatory_space, dimension); }



        template< class D >
            ProportionalRegressionFisherEstimation < D >::ProportionalRegressionFisherEstimation () : CategoricalRegressionFisherEstimation< D >()
            {}

        template< class D >
            ProportionalRegressionFisherEstimation < D >::ProportionalRegressionFisherEstimation (D const * estimated, UnivariateConditionalData const * data) : CategoricalRegressionFisherEstimation< D >(estimated, data)
            {}

        template< class D >
            ProportionalRegressionFisherEstimation < D >::ProportionalRegressionFisherEstimation (const ProportionalRegressionFisherEstimation & estimation) : CategoricalRegressionFisherEstimation< D >(estimation)
            {}

        template< class D >
            ProportionalRegressionFisherEstimation < D >::Estimator::Estimator() : CategoricalRegressionFisherEstimation< D >::Estimator()
            {}

        template< class D >
            ProportionalRegressionFisherEstimation < D >::Estimator::Estimator(const Estimator& estimator) : CategoricalRegressionFisherEstimation< D >::Estimator(estimator)
            {}

        template< class D >
            std::vector< Eigen::MatrixXd > ProportionalRegressionFisherEstimation < D >::Estimator::Z_init(const UnivariateConditionalData& data) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.get_response()->get_sample_space() )->get_cardinality();
                const MultivariateData* _data = data.get_explanatories();
                const MultivariateSampleSpace* sample_space = _data->get_sample_space();
                Index p = sample_space->encode();
                std::vector< Eigen::MatrixXd > Z;
                Eigen::MatrixXd identity = Eigen::MatrixXd::Identity(J-1, J-1);
                Eigen::VectorXd col_ones = Eigen::VectorXd::Ones(J-1);
                std::unique_ptr< MultivariateData::Generator > generator = _data->generator();
                Eigen::MatrixXd Z_k = Eigen::MatrixXd::Identity(J-1, J-1 + p);
                while(generator->is_valid())
                {
                    const MultivariateEvent* event = generator->event();
                    if(event)
                    {
                        Z_k.block(0, J-1, J-1, p) = Eigen::kroneckerProduct(col_ones, sample_space->encode(*event));
                        Z.push_back(Z_k);
                    }
                    else
                    { 
                        Z_k.block(0, J-1, J-1, p) = std::numeric_limits< double >::quiet_NaN() * Eigen::MatrixXd::Ones(J-1, p);
                        Z.push_back(Z_k);
                    }
                    ++(*generator);
                }
                return Z;
            }

        template<class D >
            Eigen::VectorXd ProportionalRegressionFisherEstimation < D >::Estimator::beta_init(const UnivariateConditionalData& data) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.get_response()->get_sample_space() )->get_cardinality();
                Index p = data.get_explanatories()->get_sample_space()->encode(); 
                Eigen::VectorXd beta = Eigen::VectorXd::Zero(J-1+p);
                return beta;
            }

        template<class D >        
            ProportionalVectorPredictor ProportionalRegressionFisherEstimation < D >::Estimator::build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const
            { return ProportionalVectorPredictor(explanatory_space, dimension); }



        template< class D >
            ConstrainedRegressionFisherEstimation < D >::ConstrainedRegressionFisherEstimation () : CategoricalRegressionFisherEstimation< D >()
            {}

        template< class D >
            ConstrainedRegressionFisherEstimation < D >::ConstrainedRegressionFisherEstimation (D const * estimated, UnivariateConditionalData const * data) : CategoricalRegressionFisherEstimation< D >(estimated, data)
            {}

        template< class D >
            ConstrainedRegressionFisherEstimation < D >::ConstrainedRegressionFisherEstimation (const ConstrainedRegressionFisherEstimation & estimation) : CategoricalRegressionFisherEstimation< D >(estimation)
            {}

        template< class D >
            ConstrainedRegressionFisherEstimation < D >::Estimator::Estimator() : CategoricalRegressionFisherEstimation< D >::Estimator()
            {}

        template< class D >
            ConstrainedRegressionFisherEstimation < D >::Estimator::Estimator(const Estimator& estimator) : CategoricalRegressionFisherEstimation< D >::Estimator(estimator)
            {
                _slope_constraint = estimator._slope_constraint;
                _intercept_constraint = estimator._intercept_constraint;                
            }

        template< class D >
            const Eigen::MatrixXd& ConstrainedRegressionFisherEstimation < D >::Estimator::get_intercept_constraint() const
            { return _intercept_constraint; }

        template< class D >
            void ConstrainedRegressionFisherEstimation < D >::Estimator::set_intercept_constraint(const Eigen::MatrixXd& intercept_constraint)
            { _intercept_constraint = intercept_constraint; }

        template< class D >
            const Eigen::MatrixXd ConstrainedRegressionFisherEstimation < D >::Estimator::get_slope_constraint() const
            { return _slope_constraint; }

        template< class D >
            void ConstrainedRegressionFisherEstimation < D >::Estimator::set_slope_constraint(const Eigen::MatrixXd& slope_constraint)
            { _slope_constraint = slope_constraint; }


        template< class D >
            std::vector< Eigen::MatrixXd > ConstrainedRegressionFisherEstimation < D >::Estimator::Z_init(const UnivariateConditionalData& data) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.get_response()->get_sample_space() )->get_cardinality();
                const MultivariateData* _data = data.get_explanatories();
                const MultivariateSampleSpace* explanatory_space = _data->get_sample_space();
                Index p = explanatory_space->encode();
                std::vector< Eigen::MatrixXd > Z;
                Eigen::MatrixXd identity = Eigen::MatrixXd::Identity(J-1, J-1);
                std::unique_ptr< MultivariateData::Generator > generator = _data->generator();
                Eigen::MatrixXd Z_k_complete = Eigen::MatrixXd::Identity(J-1, (J-1) * (1+p));       
                if(_intercept_constraint.size() == 0)
                { _intercept_constraint = Eigen::MatrixXd::Identity(J-1, J-1); }
                else
                {
                    if(_intercept_constraint.rows() != J-1)
                    { throw statiskit::size_error("intercept_constraint", _intercept_constraint.rows(), J-1 ); } 
                    if(_intercept_constraint.cols() > _intercept_constraint.rows())
                    { throw statiskit::size_error("intercept_constraint", _intercept_constraint.cols(), _intercept_constraint.rows(), statiskit::size_error::size_type::superior); } 
                }
                if(_slope_constraint.size() == 0)
                { _slope_constraint = Eigen::MatrixXd::Identity((J-1) * p, (J-1) * p); }
                else
                {
                    if(_slope_constraint.rows() != ( p * (J-1) ) )
                    { throw statiskit::size_error("slope_constraint", _slope_constraint.rows(),  p * (J-1) ); } 
                    if(_slope_constraint.cols() > _slope_constraint.rows())
                    { throw statiskit::size_error("slope_constraint", _slope_constraint.cols(), _slope_constraint.rows(), statiskit::size_error::size_type::superior); } 
                }
                while(generator->is_valid())
                {
                    Eigen::MatrixXd Z_k  = Eigen::MatrixXd::Zero(J-1, _intercept_constraint.cols() + _slope_constraint.cols()) ;
                    Z_k.block(0, 0, J-1, _intercept_constraint.cols()) = _intercept_constraint;
                    const MultivariateEvent* event = generator->event();
                    if(event)
                    {
                        Z_k.block(0, J-1, J-1, _slope_constraint.cols()) = Eigen::kroneckerProduct(identity, explanatory_space->encode(*event)) * _slope_constraint;
                        Z.push_back(Z_k);
                    }
                    else
                    { 
                        Z_k.block(0, J-1, J-1, _slope_constraint.cols()) = std::numeric_limits< double >::quiet_NaN() * Eigen::MatrixXd::Ones(J-1, _slope_constraint.cols());
                        Z.push_back(Z_k);
                    }
                    ++(*generator);
                }
                return Z;
            }

        template<class D >
            Eigen::VectorXd ConstrainedRegressionFisherEstimation < D >::Estimator::beta_init(const UnivariateConditionalData& data) const
            {
                Eigen::VectorXd beta = Eigen::VectorXd::Zero(_intercept_constraint.cols() + _slope_constraint.cols());
                return beta;
            }

        template<class D >        
            ConstrainedVectorPredictor ConstrainedRegressionFisherEstimation < D >::Estimator::build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const
            { return ConstrainedVectorPredictor(explanatory_space,  _slope_constraint, _intercept_constraint);; }

        // template<class D > 
        //     ConstrainedRegressionFisherEstimation < D >::PartialProportionalEstimator::PartialProportionalEstimator() : CategoricalUnivariateConditionalDistributionEstimation::Estimator()
        //     {}

        // template<class D > 
        //     ConstrainedRegressionFisherEstimation < D >::PartialProportionalEstimator::PartialProportionalEstimator(const PartialProportionalEstimator& estimator) : CategoricalUnivariateConditionalDistributionEstimation::Estimator(estimator)
        //     {}

        // template<class D > 
        //     std::unique_ptr< UnivariateConditionalDistributionEstimation > ConstrainedRegressionFisherEstimation < D >::PartialProportionalEstimator::operator() (const UnivariateConditionalData& data, const bool& lazy) const
        //     {
        //         typename ConstrainedRegressionFisherEstimation < D >::Estimator estimator;
        //         Index J = static_cast< const CategoricalSampleSpace* >( data.get_response()->get_sample_space() )->get_cardinality();
        //         std::unique_ptr< MultivariateData > _data = data.get_explanatories();
        //         const MultivariateSampleSpace* explanatory_space = _data->get_sample_space();
        //         Eigen::MatrixXd slope_constraint = ConstrainedVectorPredictor::partial_proportional_constraint(*explanatory_space, J, _proportional);
        //         estimator.set_slope_constraint(slope_constraint);
        //         return estimator(data, lazy);
        //     }

        // template<class D > 
        //     const Indices ConstrainedRegressionFisherEstimation < D >::PartialProportionalEstimator::get_proportional() const
        //     { return _proportional; }

        // template<class D > 
        //     void ConstrainedRegressionFisherEstimation < D >::PartialProportionalEstimator::set_proportional(const Indices& proportional)
        //     { _proportional = proportional; }

        template<class T >
            NominalRegressionFisherEstimation < T >::NominalRegressionFisherEstimation () : T()
            {}

        template<class T >
            NominalRegressionFisherEstimation < T >::NominalRegressionFisherEstimation (NominalRegression const * estimated, UnivariateConditionalData const * data) : T(estimated, data)
            {}

        template<class T >
            NominalRegressionFisherEstimation < T >::NominalRegressionFisherEstimation (const NominalRegressionFisherEstimation & estimation) : T(estimation)
            {}

        template<class T >
            NominalRegressionFisherEstimation < T >::Estimator::Estimator() : PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, typename T::Estimator >()
            { this->_link = new NominalCanonicalLink(); }

        template<class T >
            NominalRegressionFisherEstimation < T >::Estimator::Estimator(const Estimator& estimator) : PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, typename T::Estimator >(estimator)
            {}

        template<class T >           
            NominalRegression * NominalRegressionFisherEstimation < T >::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
            {
                const NominalSampleSpace& _response_space = static_cast< const NominalSampleSpace& >(response_space);
                typename T::Estimator::predictor_type predictor = this->build_predictor(explanatory_space, _response_space.get_cardinality()-1);
                predictor.set_beta(beta);
                return new NominalRegression(_response_space.get_values(), predictor, *(this->_link));
            }


        template<class T >
            OrdinalRegressionFisherEstimation < T >::OrdinalRegressionFisherEstimation() : T()
            {}

        template<class T >
            OrdinalRegressionFisherEstimation < T >::OrdinalRegressionFisherEstimation(OrdinalRegression const * estimated, UnivariateConditionalData const * data) : T(estimated, data)
            {}

        template<class T >
            OrdinalRegressionFisherEstimation < T >::OrdinalRegressionFisherEstimation(const OrdinalRegressionFisherEstimation & estimation) : T(estimation)
            {}

        template<class T >
            OrdinalRegressionFisherEstimation < T >::Estimator::Estimator() : PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, typename T::Estimator >()
            { this->_link = new OrdinalCanonicalLink(); }

        template<class T >
            OrdinalRegressionFisherEstimation < T >::Estimator::Estimator(const Estimator& estimator) : PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, typename T::Estimator >(estimator)
            {}

        template<class T >           
            OrdinalRegression * OrdinalRegressionFisherEstimation < T >::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
            {
                const OrdinalSampleSpace& _response_space = static_cast< const OrdinalSampleSpace& >(response_space);
                typename T::Estimator::predictor_type predictor = this->build_predictor(explanatory_space, _response_space.get_cardinality()-1);
                predictor.set_beta(beta);
                return new OrdinalRegression(_response_space.get_ordered(), predictor, *(this->_link));
            }  

        template<class T >
            CumulativeRegressionFisherEstimation < T >::CumulativeRegressionFisherEstimation () : OrdinalRegressionFisherEstimation < T >()
            {}

        template<class T >
            CumulativeRegressionFisherEstimation < T >::CumulativeRegressionFisherEstimation (OrdinalRegression const * estimated, UnivariateConditionalData const * data) : OrdinalRegressionFisherEstimation < T >(estimated, data)
            {}

        template<class T >
            CumulativeRegressionFisherEstimation < T >::CumulativeRegressionFisherEstimation (const CumulativeRegressionFisherEstimation & estimation) : OrdinalRegressionFisherEstimation < T >(estimation)
            {}

        template<class T >
            CumulativeRegressionFisherEstimation < T >::Estimator::Estimator() : PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, typename OrdinalRegressionFisherEstimation < T >::Estimator >()
            {}

        template<class T >
            CumulativeRegressionFisherEstimation < T >::Estimator::Estimator(const Estimator& estimator) : PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, typename OrdinalRegressionFisherEstimation < T >::Estimator >(estimator)
            {} 

        template<class T >
            const Eigen::VectorXd& CumulativeRegressionFisherEstimation < T >::Estimator::Estimator::get_beta_init() const
            { return _beta_init; }
                                             
        template<class T >
            void CumulativeRegressionFisherEstimation < T >::Estimator::Estimator::set_beta_init(const Eigen::VectorXd& beta_init)
            { _beta_init = beta_init; }

        template<class T >
            Eigen::VectorXd CumulativeRegressionFisherEstimation < T >::Estimator::Estimator::beta_init(const UnivariateConditionalData& data) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.get_response()->get_sample_space() )->get_cardinality();
                Eigen::VectorXd beta = T::Estimator::beta_init(data);
                if (_beta_init.size() == beta.size())
                { beta = _beta_init; }
                else
                {
                    for (Index j=0; j<(J-1); ++j)
                    { beta[j] = LogisticDistribution().quantile( double(1+j)/double(J) ); }
                }                          
                return beta;
            }
    }
}

#endif
