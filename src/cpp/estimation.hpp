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
                    { X.block(index, 1, 1, X.cols()-1) = sample_space->encode(*event).transpose(); }
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
         
        template<class D, class B>      
            CategoricalFisherEstimation< D, B >::CategoricalFisherEstimation() : ConditionalActiveEstimation< D, B, Index >()
            {}

        template<class D, class B>
            CategoricalFisherEstimation< D, B >::CategoricalFisherEstimation(D const * estimated, MultivariateData const * data, const Index& response, const Indices& explanatories) : ConditionalActiveEstimation< D, B, Index >(estimated, data, response, explanatories)
            {}

        template<class D, class B>
            CategoricalFisherEstimation< D, B >::CategoricalFisherEstimation(const CategoricalFisherEstimation& estimation) : ConditionalActiveEstimation< D, B, Index >(estimation)
            {}

        template<class D, class B>
            CategoricalFisherEstimation< D, B >::Estimator::Estimator() : Optimization()
            { _maxits = 1e4; }
        
        template<class D, class B>
            CategoricalFisherEstimation< D, B >::Estimator::~Estimator()
            { delete _link; }

        template<class D, class B>
            CategoricalFisherEstimation< D, B >::Estimator::Estimator(const Estimator& estimator) : Optimization(estimator)
            { _link = estimator._link->copy().release(); }

        template<class D, class B>
            const typename D::link_type* CategoricalFisherEstimation< D, B >::Estimator::get_link() const
            { return _link; }

        template<class D, class B>
            void CategoricalFisherEstimation< D, B >::Estimator::set_link(const typename D::link_type& link)
            { _link = link.copy().release(); }
        
        template<class D, class B>
            std::unique_ptr< UnivariateConditionalDistributionEstimation > CategoricalFisherEstimation< D, B >::Estimator::operator() (const MultivariateData& data, const Index& response, const Indices& explanatories, const bool& lazy) const
            {
                std::unique_ptr< UnivariateConditionalDistributionEstimation > estimation;
                if(lazy)
                { estimation = std::make_unique< LazyEstimation< UnivariateConditionalDistribution, CategoricalFisherEstimation< D, B > > >((*this)(data, response, explanatories, false)->get_estimated()); }
                else
                {   
                    std::unique_ptr< CategoricalFisherEstimation< D, B > > _estimation = std::make_unique< CategoricalFisherEstimation< D, B > >(nullptr, &data, response, explanatories);
                    _estimation->_beta.clear();
                    std::vector< Eigen::MatrixXd > Z = Z_init(data, response, explanatories);
                    std::vector< Eigen::VectorXd > y = y_init(data, response, explanatories);        
                    std::vector< double > w = w_init(data, response, explanatories);                   
                    Eigen::VectorXd beta = beta_init(data, response, explanatories);
                    Eigen::VectorXd eta, pi, b;
                    Eigen::MatrixXd ZG, ZGS, A;                

                    unsigned int its = 0;
                    do
                    {
                        _estimation->_beta.push_back(beta);
                    	A = Eigen::MatrixXd::Zero(beta.rows(), beta.rows());
                    	b = Eigen::VectorXd::Zero(beta.rows());         
                     
                        for(Index k = 0; k < Z.size(); ++k)
                        {      
    		                eta = Z[k] * beta;    
    		                pi = _link->inverse(eta);  
                                    // A += w[k] * Z[k].transpose().eval() * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() ) * Z[k];
                                    // b += w[k] * Z[k].transpose().eval() * (y[k] - pi);
    		                ZG = Z[k].transpose().eval() * _link->inverse_derivative(eta);
                            ZGS = ZG * ( Eigen::MatrixXd(pi.asDiagonal()) - pi * pi.transpose().eval() ).inverse();
    		                A += w[k] * ZGS * ZG.transpose().eval();    
    		                b += w[k] * ZGS * (y[k] - pi);                                                 
                        }
    					b += A * beta;
    					
                        beta = statiskit::linalg::solve(A, b, statiskit::linalg::solver_type::colPivHouseholderQr); //jacobiSvd);
                        ++its;

                    }while(this->run(its, statiskit::__impl::reldiff(_estimation->_beta.back(), beta)));
    				_estimation->_Z = Z;
    				_estimation->_y = y;
    				_estimation->_w = w;
    				_estimation->_estimated = build_estimated(beta, *( data.extract(explanatories)->get_sample_space() ), *( data.extract(response)->get_sample_space() ) );
    				_estimation->_response = response;
    				_estimation->_explanatories = explanatories;
    				estimation = std::move(_estimation);                 
                }
                return estimation;
            }        

        template<class D, class B>
            std::vector< Eigen::MatrixXd > CategoricalFisherEstimation< D, B >::Estimator::Z_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
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
                        Eigen::RowVectorXd xt_k = sample_space->encode(*event).transpose();    
                    	Z_k.block(0, J-1, J-1, (J-1) * p ) = Eigen::kroneckerProduct(identity, xt_k);
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

        template<class D, class B>
            std::vector< Eigen::VectorXd > CategoricalFisherEstimation< D, B >::Estimator::y_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
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

        template<class D, class B>
            std::vector< double > CategoricalFisherEstimation< D, B >::Estimator::w_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
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
            
        template<class D, class B>
            Eigen::VectorXd CategoricalFisherEstimation< D, B >::Estimator::beta_init(const MultivariateData& data, const Index& response, const Indices& explanatories) const
            {
            	Index J = static_cast< const CategoricalSampleSpace* >( data.extract(response)->get_sample_space() )->get_cardinality();
                Index p = data.extract(explanatories)->get_sample_space()->encode(); 
                Eigen::VectorXd beta = Eigen::VectorXd::Zero((J-1)*(1+p));
                return beta;
            }            
    }
}

#endif
