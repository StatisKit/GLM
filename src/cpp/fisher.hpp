#ifndef STATISKIT_GLM_FISHER_HPP
#define STATISKIT_GLM_FISHER_HPP

namespace statiskit
{
    namespace glm
    {
        template<class R, class B>
            ScalarFisherEstimation< R, B >::Estimator::Estimator()
            {
                _epsilon = get_epsilon();
                _maxits = get_maxits();
                _link = new typename R::link_type();
            }
        
        template<class R, class B>
            ScalarFisherEstimation< R, B >::Estimator::~Estimator()
            { delete _link; }

        template<class R, class B>
            ScalarFisherEstimation< R, B >::Estimator::Estimator(const Estimator& estimator)
            {
                _epsilon = estimator._epsilon;
                _maxits = estimator._maxits;
                _link = estimator._link->copy().release();
            }

        template<class R, class B>
            const double& ScalarFisherEstimation< R, B >::Estimator::get_epsilon() const
            { return _epsilon; }

        template<class R, class B>
            void ScalarFisherEstimation< R, B >::Estimator::set_epsilon(const double& epsilon)
            { _epsilon = epsilon; }

        template<class R, class B>
            const unsigned int& ScalarFisherEstimation< R, B >::Estimator::get_maxits() const
            { return _maxits; }

        template<class R, class B>
            void ScalarFisherEstimation< R, B >::Estimator::set_maxits(const unsigned int& maxits)
            { _maxits = maxits; }

        template<class R, class B>
            const typename R::link_type* ScalarFisherEstimation< R, B >::Estimator::get_link() const
            { return _link; }

        template<class R, class B>
            void ScalarFisherEstimation< R, B >::Estimator::set_link(const typename R::link_type& link)
            { _link = link.copy().release(); }
        
        template<class R, class B>
            std::shared_ptr< UnivariateConditionalDistributionEstimation > ScalarFisherEstimation< R, B >::Estimator::operator() (const std::shared_ptr< MultivariateData >& data, const size_t& response, const std::set< size_t >& explanatories, const bool& lazy) const
        {
            std::shared_ptr< UnivariateConditionalDistributionEstimation > estimation;
            if(lazy)
            { estimation = std::make_shared< LazyEstimation< UnivariateConditionalDistribution, ScalarFisherEstimation< R, B > > >((*this)(data, response, explanatories, false)->get_estimated()); }
            else
            {
                std::shared_ptr< ScalarFisherEstimation< R, B > > _estimation = std::make_shared< ScalarFisherEstimation< R, B > >();
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
                estimation = _estimation;
            }
            return estimation;
        }

        template<class R, class B>
            arma::mat ScalarFisherEstimation< R, B >::Estimator::X_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
                std::shared_ptr< MultivariateData > _data = data.get_variables(explanatories);
                const MultivariateSampleSpace* sample_space = _data->get_sample_space();
                arma::mat X = arma::ones< arma::mat >(_data->size(), sample_space->encode());
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

        template<class R, class B>
            arma::colvec ScalarFisherEstimation< R, B >::Estimator::y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
                std::shared_ptr< UnivariateData > _data = data.get_variable(response);
                arma::colvec y = arma::ones< arma::colvec >(_data->size());
                for(size_t index = 0, max_index = _data->size(); index != max_index; ++index)
                {
                    const UnivariateEvent* event = _data->get_event(index);
                    if(event && event->get_event() == ELEMENTARY)
                    { y.at(index) = static_cast< const ElementaryEvent< typename R::link_type::family_type::event_type >* >(event)->get_value(); }
                    else
                    { y.at(index) = std::numeric_limits< double >::quiet_NaN(); }
                }
                return y;
            }

        template<class R, class B>
            arma::colvec ScalarFisherEstimation< R, B >::Estimator::w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
            {
                arma::colvec w = arma::ones< arma::colvec >(data.size());
                for(size_t index = 0, max_index = data.size(); index != max_index; ++index)
                { w.at(index) = data.get_weight(index); }
                return w;
            }
    }
}

#endif
