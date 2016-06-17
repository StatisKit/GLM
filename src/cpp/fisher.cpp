#include "fisher.h"

namespace statiskit
{
    namespace glm
    {
        double PoissonFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu; }
        
        
        BinomialFisherEstimation::Estimator::Estimator(const unsigned int& n) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        {
        	if(n == 0)
        	{ throw lower_bound_error("n", n, 0, true); }
        	_n = n;
        }
        
        BinomialFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        { _n = estimator._n; }
                
        double BinomialFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu * (1 - mu); }

        arma::colvec BinomialFisherEstimation::Estimator::y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data, response, explanatories) / _n; }
        
        arma::colvec BinomialFisherEstimation::Estimator::w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::w_init(data, response, explanatories) * _n; }
    }
}
