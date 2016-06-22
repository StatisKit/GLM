#include "fisher.h"

namespace statiskit
{
    namespace glm
    {
        double PoissonFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu; }
        
        
        BinomialFisherEstimation::Estimator::Estimator(const unsigned int& kappa) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        {
        	if(kappa == 0)
        	{ throw lower_bound_error("kappa", kappa, 0, true); }
        	_kappa = kappa;
        }
        
        BinomialFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        { _kappa = estimator._kappa; }
                
        double BinomialFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu * (1 - mu); }

        arma::colvec BinomialFisherEstimation::Estimator::y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data, response, explanatories) / _kappa; }
        
        arma::colvec BinomialFisherEstimation::Estimator::w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::w_init(data, response, explanatories) * _kappa; }
        
        
        NegativeBinomialFisherEstimation::Estimator::Estimator(const double& kappa) : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator()
        {
        	if(kappa <= 0)
        	{ throw lower_bound_error("kappa", kappa, 0, true); }
        	_kappa = kappa;
        }
        
        NegativeBinomialFisherEstimation::Estimator::Estimator(const Estimator& estimator) : ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator(estimator)
        { _kappa = estimator._kappa; }
                
        double NegativeBinomialFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu / pow(1 - mu, 2); }

        arma::colvec NegativeBinomialFisherEstimation::Estimator::y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data, response, explanatories) / _kappa; }
        
        arma::colvec NegativeBinomialFisherEstimation::Estimator::w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::w_init(data, response, explanatories) * _kappa; }        
    }
}
