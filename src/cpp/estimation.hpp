#ifndef STATISKIT_GLM_ESTIMATION_HPP
#define STATISKIT_GLM_ESTIMATION_HPP

namespace statiskit
{
    namespace glm
    {

        template<class D, class B>      
            ScalarFisherEstimation< D, B >::ScalarFisherEstimation() : ConditionalActiveEstimation< D, B, Index >()
            {}

        template<class D, class B>
            ScalarFisherEstimation< D, B >::ScalarFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : ConditionalActiveEstimation< D, B, Index >(estimated, data, response, explanatories)
            {}

        template<class D, class B>
            ScalarFisherEstimation< D, B >::ScalarFisherEstimation(const ScalarFisherEstimation& estimation) : ConditionalActiveEstimation< D, B, Index >(estimation)
            {}           

        template<class D, class B>
            ScalarFisherEstimation< D, B >::Estimator::Estimator() : Optimization()
            { _maxits = 1e4; }
        
        template<class D, class B>
            ScalarFisherEstimation< D, B >::Estimator::~Estimator()
            { delete _link; }

        template<class D, class B>
            ScalarFisherEstimation< D, B >::Estimator::Estimator(const Estimator& estimator) : Optimization(estimator)
            { _link = estimator._link->copy().release(); }

        template<class D, class B>
            const typename D::link_type* ScalarFisherEstimation< D, B >::Estimator::get_link() const
            { return _link; }

        template<class D, class B>
            void ScalarFisherEstimation< D, B >::Estimator::set_link(const typename D::link_type& link)
            { _link = link.copy().release(); }
        
        template<class D, class B>
            std::unique_ptr< UnivariateConditionalDistributionEstimation > ScalarFisherEstimation< D, B >::Estimator::operator() (const MultivariateData& data, const Index& response, const Indices& explanatories, const bool& lazy) const
            {
                std::unique_ptr< UnivariateConditionalDistributionEstimation > estimation;
                if(lazy)
                { estimation = std::make_unique< LazyEstimation< UnivariateConditionalDistribution, ScalarFisherEstimation< D, B > > >((*this)(data, response, explanatories, false)->get_estimated()); }
                else
                {
                    std::unique_ptr< ScalarFisherEstimation< D, B > > _estimation = std::make_unique< ScalarFisherEstimation< D, B > >(nullptr, &data, response, explanatories);
                    _estimation->_beta.clear();
                    Eigen::MatrixXd X = X_init(data, response, explanatories);
                    Eigen::VectorXd y = y_init(data, response, explanatories), w = w_init(data, response, explanatories);
                    Eigen::MatrixXd Xt = X.transpose(), XtWinv = Eigen::MatrixXd::Zero(Xt.rows(), Xt.cols());
                    Eigen::VectorXd eta, mu = Eigen::VectorXd::Zero(y.size()), prime = Eigen::VectorXd::Zero(y.size()), beta = statiskit::linalg::solve(Xt * X, (Xt * y).eval(), statiskit::linalg::solver_type::jacobiSvd);
                    unsigned int its = 0;
                    do
                    {
                        _estimation->_beta.push_back(beta);
                        eta = X * beta;
                        for(unsigned int i = 0; i < eta.size(); ++i)
                        { mu(i) = _link->inverse(eta(i)); }
                        for(unsigned int i = 0; i < mu.size(); ++i)
                        { prime(i) = _link->inverse_derivative(mu(i)); }
                        for(unsigned int i = 0; i < XtWinv.cols(); ++i)
                        {
                            double temp = w(i)/(pow(prime(i), 2) * sigma_square(mu(i)));
                            for(unsigned int j = 0; j < XtWinv.rows(); ++j)
                            { XtWinv(j, i) = Xt(j, i) * temp; }
                        }
                        beta = statiskit::linalg::solve(XtWinv * X, (XtWinv * (eta + (y - mu).cwiseProduct(prime))).eval(), statiskit::linalg::solver_type::jacobiSvd);
                        ++its;
                    } while(this->run(its, statiskit::__impl::reldiff(_estimation->_beta.back(), beta)));
    				_estimation->_X = X;
    				_estimation->_y = y;
    				_estimation->_w = w;
    				_estimation->_estimated = build_estimated(beta, *( data.extract(explanatories)->get_sample_space() ) );
    				//_estimation->set_data(data);
    				_estimation->_response = response;
    				_estimation->_explanatories = explanatories;
    				estimation = std::move(_estimation);
                }
                return estimation;
            }

        template<class D, class B>
            Eigen::MatrixXd ScalarFisherEstimation< D, B >::Estimator::X_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                std::unique_ptr< MultivariateData > _data = data.extract(explanatories);
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
            Eigen::VectorXd ScalarFisherEstimation< D, B >::Estimator::y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                std::unique_ptr< UnivariateData > _data = data.extract(response);
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
            Eigen::VectorXd ScalarFisherEstimation< D, B >::Estimator::w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                Eigen::VectorXd w = Eigen::VectorXd::Ones(data.size());
                std::unique_ptr< MultivariateData::Generator > generator = data.generator();
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
            CategoricalFisherEstimation< D >::CategoricalFisherEstimation() : ConditionalActiveEstimation< D, CategoricalUnivariateConditionalDistributionEstimation, Index >()
            {}

        template< class D >
            CategoricalFisherEstimation< D >::CategoricalFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : ConditionalActiveEstimation< D, CategoricalUnivariateConditionalDistributionEstimation, Index >(estimated, data, response, explanatories)
            {}

        template< class D >
            CategoricalFisherEstimation< D >::CategoricalFisherEstimation(const CategoricalFisherEstimation& estimation) : ConditionalActiveEstimation< D, CategoricalUnivariateConditionalDistributionEstimation, Index >(estimation)
            {}

        template< class D >
            const double& CategoricalFisherEstimation< D >::get_loglikelihood() const
            { return _loglikelihood; }

        template< class D >
            const std::vector< double >& CategoricalFisherEstimation< D >::get_loglikelihood_sequence() const
            { return _loglikelihood_sequence; }            

        template< class D >
            CategoricalFisherEstimation< D >::Estimator::Estimator() : Optimization()
            { _maxits = 1e4; }
        
        template< class D >
            CategoricalFisherEstimation< D >::Estimator::~Estimator()
            { delete _link; }

        template< class D >
            CategoricalFisherEstimation< D >::Estimator::Estimator(const Estimator& estimator) : Optimization(estimator)
            { _link = estimator._link->copy().release(); }

        template< class D >
            const typename D::link_type* CategoricalFisherEstimation< D >::Estimator::get_link() const
            { return _link; }

        template< class D >
            void CategoricalFisherEstimation< D >::Estimator::set_link(const typename D::link_type& link)
            { _link = link.copy().release(); }
        
        template<class D >
            std::unique_ptr< UnivariateConditionalDistributionEstimation > CategoricalFisherEstimation< D >::Estimator::operator() (const MultivariateData& data, const Index& response, const Indices& explanatories, const bool& lazy) const
            {
                std::unique_ptr< UnivariateConditionalDistributionEstimation > estimation;
                if(lazy)
                { estimation = std::make_unique< LazyEstimation< CategoricalUnivariateConditionalDistribution, CategoricalFisherEstimation< D > > >(static_cast< const CategoricalUnivariateConditionalDistribution* >( (*this)(data, response, explanatories, false)->get_estimated() ) ); }
                else
                {
                    std::unique_ptr< CategoricalFisherEstimation< D > > _estimation = std::make_unique< CategoricalFisherEstimation< D > >(nullptr, &data, response, explanatories);
                    _estimation->_beta.clear();
                    std::vector< Eigen::MatrixXd > Z = Z_init(data, response, explanatories);
                    std::vector< Eigen::VectorXd > y = y_init(data, response, explanatories);
                    std::vector< double > w = w_init(data, response, explanatories);                 
                    Eigen::VectorXd beta = beta_init(data, response, explanatories);
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
    				_estimation->_response = response;
    				_estimation->_explanatories = explanatories;
                    if (l_new > l_old)
                    {
                        _estimation->_estimated = build_estimated(beta, *( data.extract(explanatories)->get_sample_space() ), *( data.extract(response)->get_sample_space() ) );
                        _estimation->_loglikelihood = l_new;
                    }
                    else
                    {
                        _estimation->_estimated = build_estimated(_estimation->_beta.back(), *( data.extract(explanatories)->get_sample_space() ), *( data.extract(response)->get_sample_space() ) );
                        _estimation->_loglikelihood = l_old;                    
                    }
                    estimation = std::move(_estimation);            
                }
                return estimation;
            }

        template< class D >
            std::vector< Eigen::VectorXd > CategoricalFisherEstimation< D >::Estimator::y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                std::unique_ptr< UnivariateData > _data = data.extract(response);
                std::vector< Eigen::VectorXd > y;
                CategoricalSampleSpace* sample_space = const_cast< CategoricalSampleSpace* >(static_cast< const CategoricalSampleSpace* >(_data->get_sample_space() )); // data.extract(response)->get_sample_space() ));
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
            std::vector< double > CategoricalFisherEstimation< D >::Estimator::w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                std::vector< double > w;
                std::unique_ptr< MultivariateData::Generator > generator = data.generator();
                while(generator->is_valid())
                {
                    w.push_back( generator->weight() );
                    ++(*generator);
                }
                return w;
            }





        template< class D >
            CompleteFisherEstimation< D >::CompleteFisherEstimation() : CategoricalFisherEstimation< D >()
            {}

        template< class D >
            CompleteFisherEstimation< D >::CompleteFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : CategoricalFisherEstimation< D >(estimated, data, response, explanatories)
            {}

        template< class D >
            CompleteFisherEstimation< D >::CompleteFisherEstimation(const CompleteFisherEstimation& estimation) : CategoricalFisherEstimation< D >(estimation)
            {}

        template< class D >
            CompleteFisherEstimation< D >::Estimator::Estimator() : CategoricalFisherEstimation< D >::Estimator()
            {}

        template< class D >
            CompleteFisherEstimation< D >::Estimator::Estimator(const Estimator& estimator) : CategoricalFisherEstimation< D >::Estimator(estimator)
            {}

        template< class D >
            std::vector< Eigen::MatrixXd > CompleteFisherEstimation< D >::Estimator::Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
                std::unique_ptr< MultivariateData > _data = data.extract(explanatories);
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
            Eigen::VectorXd CompleteFisherEstimation< D >::Estimator::beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
                Index p = data.extract(explanatories)->get_sample_space()->encode(); 
                Eigen::VectorXd beta = Eigen::VectorXd::Zero((J-1)*(1+p));
                return beta;
            }

        template<class D >        
            CompleteVectorPredictor CompleteFisherEstimation< D >::Estimator::build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const
            { return CompleteVectorPredictor(explanatory_space, dimension); }



        template< class D >
            ProportionalFisherEstimation< D >::ProportionalFisherEstimation() : CategoricalFisherEstimation< D >()
            {}

        template< class D >
            ProportionalFisherEstimation< D >::ProportionalFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : CategoricalFisherEstimation< D >(estimated, data, response, explanatories)
            {}

        template< class D >
            ProportionalFisherEstimation< D >::ProportionalFisherEstimation(const ProportionalFisherEstimation& estimation) : CategoricalFisherEstimation< D >(estimation)
            {}

        template< class D >
            ProportionalFisherEstimation< D >::Estimator::Estimator() : CategoricalFisherEstimation< D >::Estimator()
            {}

        template< class D >
            ProportionalFisherEstimation< D >::Estimator::Estimator(const Estimator& estimator) : CategoricalFisherEstimation< D >::Estimator(estimator)
            {}

        template< class D >
            std::vector< Eigen::MatrixXd > ProportionalFisherEstimation< D >::Estimator::Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
                std::shared_ptr< MultivariateData > _data = data.extract(explanatories);
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
            Eigen::VectorXd ProportionalFisherEstimation< D >::Estimator::beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
                Index p = data.extract(explanatories)->get_sample_space()->encode(); 
                Eigen::VectorXd beta = Eigen::VectorXd::Zero(J-1+p);
                return beta;
            }

        template<class D >        
            ProportionalVectorPredictor ProportionalFisherEstimation< D >::Estimator::build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const
            { return ProportionalVectorPredictor(explanatory_space, dimension); }



        template< class D >
            ConstrainedFisherEstimation< D >::ConstrainedFisherEstimation() : CategoricalFisherEstimation< D >()
            {}

        template< class D >
            ConstrainedFisherEstimation< D >::ConstrainedFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : CategoricalFisherEstimation< D >(estimated, data, response, explanatories)
            {}

        template< class D >
            ConstrainedFisherEstimation< D >::ConstrainedFisherEstimation(const ConstrainedFisherEstimation& estimation) : CategoricalFisherEstimation< D >(estimation)
            {}

        template< class D >
            ConstrainedFisherEstimation< D >::Estimator::Estimator() : CategoricalFisherEstimation< D >::Estimator()
            {}

        template< class D >
            ConstrainedFisherEstimation< D >::Estimator::Estimator(const Estimator& estimator) : CategoricalFisherEstimation< D >::Estimator(estimator)
            {
                _slope_constraint = estimator._slope_constraint;
                _intercept_constraint = estimator._intercept_constraint;                
            }

        template< class D >
            const Eigen::MatrixXd& ConstrainedFisherEstimation< D >::Estimator::get_intercept_constraint() const
            { return _intercept_constraint; }

        template< class D >
            void ConstrainedFisherEstimation< D >::Estimator::set_intercept_constraint(const Eigen::MatrixXd& intercept_constraint)
            { _intercept_constraint = intercept_constraint; }

        template< class D >
            const Eigen::MatrixXd ConstrainedFisherEstimation< D >::Estimator::get_slope_constraint() const
            { return _slope_constraint; }

        template< class D >
            void ConstrainedFisherEstimation< D >::Estimator::set_slope_constraint(const Eigen::MatrixXd& slope_constraint)
            { _slope_constraint = slope_constraint; }


        template< class D >
            std::vector< Eigen::MatrixXd > ConstrainedFisherEstimation< D >::Estimator::Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
                std::unique_ptr< MultivariateData > _data = data.extract(explanatories);
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
            Eigen::VectorXd ConstrainedFisherEstimation< D >::Estimator::beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                Eigen::VectorXd beta = Eigen::VectorXd::Zero(_intercept_constraint.cols() + _slope_constraint.cols());
                return beta;
            }

        template<class D >        
            ConstrainedVectorPredictor ConstrainedFisherEstimation< D >::Estimator::build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const
            { return ConstrainedVectorPredictor(explanatory_space,  _slope_constraint, _intercept_constraint);; }


        // template<class D > 
        //     ConstrainedFisherEstimation< D >::PartialProportionalEstimator::PartialProportionalEstimator() : CategoricalUnivariateConditionalDistributionEstimation::Estimator()
        //     {}

        // template<class D > 
        //     ConstrainedFisherEstimation< D >::PartialProportionalEstimator::PartialProportionalEstimator(const PartialProportionalEstimator& estimator) : CategoricalUnivariateConditionalDistributionEstimation::Estimator(estimator)
        //     {}

        // template<class D > 
        //     std::unique_ptr< UnivariateConditionalDistributionEstimation > ConstrainedFisherEstimation< D >::PartialProportionalEstimator::operator() (const MultivariateData& data, const Index& response, const Indices& explanatories, const bool& lazy) const
        //     {
        //         typename ConstrainedFisherEstimation< D >::Estimator estimator;
        //         Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
        //         std::unique_ptr< MultivariateData > _data = data.extract(explanatories);
        //         const MultivariateSampleSpace* explanatory_space = _data->get_sample_space();
        //         Eigen::MatrixXd slope_constraint = ConstrainedVectorPredictor::partial_proportional_constraint(*explanatory_space, J, _proportional);
        //         estimator.set_slope_constraint(slope_constraint);
        //         return estimator(data, response, explanatories, lazy);
        //     }

        // template<class D > 
        //     const Indices ConstrainedFisherEstimation< D >::PartialProportionalEstimator::get_proportional() const
        //     { return _proportional; }

        // template<class D > 
        //     void ConstrainedFisherEstimation< D >::PartialProportionalEstimator::set_proportional(const Indices& proportional)
        //     { _proportional = proportional; }


        template<class T >
            NominalFisherEstimation< T >::NominalFisherEstimation() : T()
            {}

        template<class T >
            NominalFisherEstimation< T >::NominalFisherEstimation(NominalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : T(estimated, data, response, explanatories)
            {}

        template<class T >
            NominalFisherEstimation< T >::NominalFisherEstimation(const NominalFisherEstimation& estimation) : T(estimation)
            {}

        template<class T >
            NominalFisherEstimation< T >::Estimator::Estimator() : T::Estimator()
            { this->_link = new NominalCanonicalLink(); }

        template<class T >
            NominalFisherEstimation< T >::Estimator::Estimator(const Estimator& estimator) : T::Estimator(estimator)
            {}

        template<class T >           
            NominalRegression * NominalFisherEstimation< T >::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
            {
                const NominalSampleSpace& _response_space = static_cast< const NominalSampleSpace& >(response_space);
                typename T::Estimator::predictor_type predictor = this->build_predictor(explanatory_space, _response_space.get_cardinality()-1);
                predictor.set_beta(beta);
                return new NominalRegression(_response_space.get_values(), predictor, *(this->_link));
            }


        template<class T >
            OrdinalFisherEstimation< T >::OrdinalFisherEstimation() : T()
            {}

        template<class T >
            OrdinalFisherEstimation< T >::OrdinalFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : T(estimated, data, response, explanatories)
            {}

        template<class T >
            OrdinalFisherEstimation< T >::OrdinalFisherEstimation(const OrdinalFisherEstimation& estimation) : T(estimation)
            {}

        template<class T >
            OrdinalFisherEstimation< T >::Estimator::Estimator() : T::Estimator()
            { this->_link = new OrdinalCanonicalLink(); }

        template<class T >
            OrdinalFisherEstimation< T >::Estimator::Estimator(const Estimator& estimator) : T::Estimator(estimator)
            {}

        template<class T >           
            OrdinalRegression * OrdinalFisherEstimation< T >::Estimator::build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
            {
                const OrdinalSampleSpace& _response_space = static_cast< const OrdinalSampleSpace& >(response_space);
                typename T::Estimator::predictor_type predictor = this->build_predictor(explanatory_space, _response_space.get_cardinality()-1);
                predictor.set_beta(beta);
                return new OrdinalRegression(_response_space.get_ordered(), predictor, *(this->_link));
            }  

            
        template<class T >
            CumulativeFisherEstimation< T >::CumulativeFisherEstimation() : OrdinalFisherEstimation< T >()
            {}

        template<class T >
            CumulativeFisherEstimation< T >::CumulativeFisherEstimation(OrdinalRegression const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : OrdinalFisherEstimation< T >(estimated, data, response, explanatories)
            {}

        template<class T >
            CumulativeFisherEstimation< T >::CumulativeFisherEstimation(const CumulativeFisherEstimation& estimation) : OrdinalFisherEstimation< T >(estimation)
            {}

        template<class T >
            CumulativeFisherEstimation< T >::Estimator::Estimator() : OrdinalFisherEstimation< T >::Estimator()
            {}

        template<class T >
            CumulativeFisherEstimation< T >::Estimator::Estimator(const Estimator& estimator) : OrdinalFisherEstimation< T >::Estimator(estimator)
            {} 

        template<class T >
            const Eigen::VectorXd& CumulativeFisherEstimation< T >::Estimator::Estimator::get_beta_init() const
            { return _beta_init; }
                                             
        template<class T >
            void CumulativeFisherEstimation< T >::Estimator::Estimator::set_beta_init(const Eigen::VectorXd& beta_init)
            { _beta_init = beta_init; }

        template<class T >
            Eigen::VectorXd CumulativeFisherEstimation< T >::Estimator::Estimator::beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
                Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
                Eigen::VectorXd beta = T::Estimator::beta_init(data, response, explanatories);
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
