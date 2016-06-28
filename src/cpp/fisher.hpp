#ifndef STATISKIT_GLM_FISHER_HPP
#define STATISKIT_GLM_FISHER_HPP

namespace statiskit
{
    namespace glm
    {
        template<class D, class B>
            ScalarFisherEstimation< D, B >::Estimator::Estimator()
            {
                _epsilon = get_epsilon();
                _maxits = get_maxits();
                _link = new typename D::link_type();
            }
        
        template<class D, class B>
            ScalarFisherEstimation< D, B >::Estimator::~Estimator()
            { delete _link; }

        template<class D, class B>
            ScalarFisherEstimation< D, B >::Estimator::Estimator(const Estimator& estimator)
            {
                _epsilon = estimator._epsilon;
                _maxits = estimator._maxits;
                _link = estimator._link->copy().release();
            }

        template<class D, class B>
            const double& ScalarFisherEstimation< D, B >::Estimator::get_epsilon() const
            { return _epsilon; }

        template<class D, class B>
            void ScalarFisherEstimation< D, B >::Estimator::set_epsilon(const double& epsilon)
            { _epsilon = epsilon; }

        template<class D, class B>
            const unsigned int& ScalarFisherEstimation< D, B >::Estimator::get_maxits() const
            { return _maxits; }

        template<class D, class B>
            void ScalarFisherEstimation< D, B >::Estimator::set_maxits(const unsigned int& maxits)
            { _maxits = maxits; }

        template<class D, class B>
            const typename D::link_type* ScalarFisherEstimation< D, B >::Estimator::get_link() const
            { return _link; }

        template<class D, class B>
            void ScalarFisherEstimation< D, B >::Estimator::set_link(const typename D::link_type& link)
            { _link = link.copy().release(); }
        
        template<class D, class B>
            std::shared_ptr< UnivariateConditionalDistributionEstimation > ScalarFisherEstimation< D, B >::Estimator::operator() (const std::shared_ptr< MultivariateData >& data, const size_t& response, const std::set< size_t >& explanatories, const bool& lazy) const
        {
            std::shared_ptr< UnivariateConditionalDistributionEstimation > estimation;
            if(lazy)
            { estimation = std::make_shared< LazyEstimation< UnivariateConditionalDistribution, ScalarFisherEstimation< D, B > > >((*this)(data, response, explanatories, false)->get_estimated()); }
            else
            {
                std::shared_ptr< ScalarFisherEstimation< D, B > > _estimation = std::make_shared< ScalarFisherEstimation< D, B > >();
                _estimation->_beta.clear();
                arma::mat X = X_init(*data, response, explanatories);
                arma::colvec y = y_init(*data, response, explanatories), w = w_init(*data, response, explanatories);
                arma::mat Xt = X.t(), XtWinv = arma::zeros< arma::mat >(Xt.n_rows, Xt.n_cols);
                arma::colvec eta, mu = arma::zeros< arma::colvec >(y.n_elem), prime = arma::zeros< arma::colvec >(y.n_elem), beta = arma::solve(Xt * X, Xt * y);
                unsigned int its = 0;
                do
                {
                    _estimation->_beta.push_back(beta);
                    eta = X * beta;
                    for(unsigned int i = 0; i < eta.n_elem; ++i)
                    { mu.at(i) = _link->inverse(eta.at(i)); }
                    for(unsigned int i = 0; i < mu.n_elem; ++i)
                    { prime.at(i) = _link->inverse_derivative(mu.at(i)); }
                    for(unsigned int i = 0; i < XtWinv.n_cols; ++i)
                    {
                        double temp = w.at(i)/(pow(prime.at(i), 2) * sigma_square(mu.at(i)));
                        for(unsigned int j = 0; j < XtWinv.n_rows; ++j)
                        { XtWinv.at(j, i) = Xt.at(j, i) * temp; }
                    }
                    beta = arma::solve(XtWinv * X, XtWinv * arma::diagmat(eta + (y - mu) % prime));
                    ++its;
                } while(arma::norm(beta - _estimation->_beta.back(), 2) >= _epsilon * beta.n_elem && its < _maxits);
				_estimation->_X = X;
				_estimation->_y = y;
				_estimation->_w = w;
				_estimation->_estimated = build_estimated(beta, *( data->get_variables(explanatories)->get_sample_space() ) );
				_estimation->set_data(data);
				_estimation->_response = response;
				_estimation->_explanatories = explanatories;
				estimation = _estimation;
            }
            return estimation;
        }

        template<class D, class B>
            arma::mat ScalarFisherEstimation< D, B >::Estimator::X_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
                std::shared_ptr< MultivariateData > _data = data.get_variables(explanatories);
                const MultivariateSampleSpace* sample_space = _data->get_sample_space();
                arma::mat X = arma::ones< arma::mat >(_data->size(), 1+sample_space->encode());
                for(size_t index = 0, max_index = _data->size(); index != max_index; ++index)
                {
                    const MultivariateEvent* event = _data->get_event(index);
                    if(event)
                    { X.submat(index, 1, index, X.n_cols) = sample_space->encode(*event); }
                    else
                    { X.submat(index, 1, index, X.n_cols) = std::numeric_limits< double >::quiet_NaN() * arma::ones< arma::rowvec >(X.n_cols - 1); }
                }
                return X;
            }

        template<class D, class B>
            arma::colvec ScalarFisherEstimation< D, B >::Estimator::y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
                std::shared_ptr< UnivariateData > _data = data.get_variable(response);
                arma::colvec y = arma::ones< arma::colvec >(_data->size());
                for(size_t index = 0, max_index = _data->size(); index != max_index; ++index)
                {
                    const UnivariateEvent* event = _data->get_event(index);
                    if(event && event->get_event() == ELEMENTARY)
                    { y.at(index) = static_cast< const ElementaryEvent< typename D::link_type::family_type::event_type >* >(event)->get_value(); }
                    else
                    { y.at(index) = std::numeric_limits< double >::quiet_NaN(); }
                }
                return y;
            }

        template<class D, class B>
            arma::colvec ScalarFisherEstimation< D, B >::Estimator::w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
                arma::colvec w = arma::ones< arma::colvec >(data.size());
                for(size_t index = 0, max_index = data.size(); index != max_index; ++index)
                { w.at(index) = data.get_weight(index); }
                return w;
            }
         
 
        template<class D, class B>
            CategoricalFisherEstimation< D, B >::Estimator::Estimator()
            {
                _epsilon = get_epsilon();
                _maxits = get_maxits();
                _link = new typename D::link_type();
            }
        
        template<class D, class B>
            CategoricalFisherEstimation< D, B >::Estimator::~Estimator()
            { delete _link; }

        template<class D, class B>
            CategoricalFisherEstimation< D, B >::Estimator::Estimator(const Estimator& estimator)
            {
                _epsilon = estimator._epsilon;
                _maxits = estimator._maxits;
                _link = estimator._link->copy().release();
            }

        template<class D, class B>
            const double& CategoricalFisherEstimation< D, B >::Estimator::get_epsilon() const
            { return _epsilon; }

        template<class D, class B>
            void CategoricalFisherEstimation< D, B >::Estimator::set_epsilon(const double& epsilon)
            { _epsilon = epsilon; }

        template<class D, class B>
            const unsigned int& CategoricalFisherEstimation< D, B >::Estimator::get_maxits() const
            { return _maxits; }

        template<class D, class B>
            void CategoricalFisherEstimation< D, B >::Estimator::set_maxits(const unsigned int& maxits)
            { _maxits = maxits; }

        template<class D, class B>
            const typename D::link_type* CategoricalFisherEstimation< D, B >::Estimator::get_link() const
            { return _link; }

        template<class D, class B>
            void CategoricalFisherEstimation< D, B >::Estimator::set_link(const typename D::link_type& link)
            { _link = link.copy().release(); }
        
        template<class D, class B>
            std::shared_ptr< UnivariateConditionalDistributionEstimation > CategoricalFisherEstimation< D, B >::Estimator::operator() (const std::shared_ptr< MultivariateData >& data, const size_t& response, const std::set< size_t >& explanatories, const bool& lazy) const
        {
            std::shared_ptr< UnivariateConditionalDistributionEstimation > estimation;
            if(lazy)
            { estimation = std::make_shared< LazyEstimation< UnivariateConditionalDistribution, CategoricalFisherEstimation< D, B > > >((*this)(data, response, explanatories, false)->get_estimated()); }
            else
            {
                std::shared_ptr< CategoricalFisherEstimation< D, B > > _estimation = std::make_shared< CategoricalFisherEstimation< D, B > >();
                _estimation->_beta.clear();
                
                std::vector< arma::mat > Z = Z_init(*data, response, explanatories);
                std::vector< arma::colvec > y = y_init(*data, response, explanatories);
                std::vector< double > w = w_init(*data, response, explanatories);
                arma::colvec beta = beta_init(*data, response, explanatories);
                
                arma::colvec eta, pi, b;
                arma::mat ZG, A;                

                unsigned int its = 0;
                do
                {
                	A = arma::zeros< arma::mat >(beta.n_rows, beta.n_rows);
                	b = arma::zeros< arma::colvec >(beta.n_rows);
                    for(size_t k = 0; k < Z.size(); ++k)
                    {      
		                eta = Z[k] * beta;
		                pi = _link->inverse(eta);                     
		                ZG = Z[k].t() * _link->inverse_derivative(eta);
		                A += w[k] * ZG * arma::inv( arma::diagmat(pi) - pi * pi.t() ) * ZG.t();
		                b += w[k] * ZG * (y[k] - pi);                     
                    }
					b += A * beta;
					
                    beta = arma::solve(A, b);
                    ++its;
                } while(arma::norm(beta - _estimation->_beta.back(), 2) >= _epsilon * beta.n_elem && its < _maxits);
				_estimation->_Z = Z;
				_estimation->_y = y;
				_estimation->_w = w;
				_estimation->_estimated = build_estimated(beta, *( data->get_variables(explanatories)->get_sample_space() ), *( data->get_variable(response)->get_sample_space() ) );
				_estimation->set_data(data);
				_estimation->_response = response;
				_estimation->_explanatories = explanatories;
				estimation = _estimation;
            }
            return estimation;
        }        

        template<class D, class B>
            std::vector< arma::mat > CategoricalFisherEstimation< D, B >::Estimator::Z_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
            	size_t J = static_cast< const CategoricalSampleSpace* >( data.get_variable(response)->get_sample_space() )->get_cardinality();
                std::shared_ptr< MultivariateData > _data = data.get_variables(explanatories);
                const MultivariateSampleSpace* sample_space = _data->get_sample_space();
                size_t p = sample_space->encode();
                std::vector< arma::mat > Z;
                arma::mat identity = arma::mat(J-1, J-1, arma::fill::eye);
                for(size_t index = 0, max_index = _data->size(); index != max_index; ++index)
                {
                	arma::mat Z_k = arma::mat(J-1, (J-1) * (1+p) , arma::fill::eye);
                    const MultivariateEvent* event = _data->get_event(index);
                    if(event)
                    {
                    	Z_k.submat(0, J-1, J-1, (J-1) * (1+p) - 1) = arma::kron(identity, sample_space->encode(*event));
                    	Z.push_back(Z_k);
                    }
                    else
                    { 
                    	Z_k.submat(0, J-1, J-1, (J-1) * (1+p) - 1) = std::numeric_limits< double >::quiet_NaN() * arma::ones< arma::mat >(J-1, (J-1) * p);
                    	Z.push_back(Z_k);
                    }
                }
                return Z;
            }

        template<class D, class B>
            std::vector< arma::colvec > CategoricalFisherEstimation< D, B >::Estimator::y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
                std::shared_ptr< UnivariateData > _data = data.get_variable(response);
                std::vector< arma::colvec > y;
                CategoricalSampleSpace* sample_space = const_cast< CategoricalSampleSpace* >(static_cast< const CategoricalSampleSpace* >( data.get_variable(response)->get_sample_space() ));
                encoding_type initial_encoding = sample_space->get_encoding();
                sample_space->set_encoding(encoding_type::TREATMENT);
                size_t J = sample_space->get_cardinality();
                for(size_t index = 0, max_index = _data->size(); index != max_index; ++index)
                {
                    const UnivariateEvent* event = _data->get_event(index);
                    if(event && event->get_event() == ELEMENTARY)
                    { y.push_back( sample_space->encode( static_cast< const ElementaryEvent< CategoricalEvent > * >(event)->get_value() ) ); }
                    else
                    { y.push_back( std::numeric_limits< double >::quiet_NaN() * arma::ones< arma::colvec >(J-1) ); }
                }
                sample_space->set_encoding(initial_encoding);
                return y;
            }

        template<class D, class B>
            std::vector< double > CategoricalFisherEstimation< D, B >::Estimator::w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
                std::vector< double > w;
                for(size_t index = 0, max_index = data.size(); index != max_index; ++index)
                { w.push_back( data.get_weight(index) ); }
                return w;
            }
            
        template<class D, class B>
            arma::colvec CategoricalFisherEstimation< D, B >::Estimator::beta_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
            	size_t J = static_cast< const CategoricalSampleSpace* >( data.get_variable(response)->get_sample_space() )->get_cardinality();
                size_t p = data.get_variables(explanatories)->get_sample_space()->encode(); 
                arma::colvec beta = arma::zeros< arma::colvec >((J-1)*(1+p));
                return beta;
            }            
    }
}

#endif
