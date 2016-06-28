#include "fisher.h"

namespace statiskit
{
    namespace glm
    {
        double PoissonFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu; }
        
        std::shared_ptr< PoissonRegression > PoissonFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return std::make_shared< PoissonRegression >(predictor, *_link);
        }
        
        
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
        
        std::shared_ptr< BinomialRegression > BinomialFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return std::make_shared< BinomialRegression >(_kappa, predictor, *_link);
        }
        
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

        std::shared_ptr< NegativeBinomialRegression > NegativeBinomialFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space) const
        {
        	CompleteScalarPredictor predictor = CompleteScalarPredictor(explanatory_space);
        	predictor.set_beta(beta);
        	return std::make_shared< NegativeBinomialRegression >(_kappa, predictor, *_link);
        }
        
        arma::colvec NegativeBinomialFisherEstimation::Estimator::y_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::y_init(data, response, explanatories) / _kappa; }
        
        arma::colvec NegativeBinomialFisherEstimation::Estimator::w_init(const MultivariateData& data, const size_t& response, const std::set< size_t >& explanatories) const
        { return ScalarFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator::w_init(data, response, explanatories) * _kappa; }  
        
        
        std::shared_ptr< NominalRegression > NominalFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
            const NominalSampleSpace& _response_space = static_cast< const NominalSampleSpace& >(response_space);
        	CompleteVectorPredictor predictor = CompleteVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return std::make_shared< NominalRegression >(_response_space.get_values(), predictor, *_link);
        } 
        
        std::shared_ptr< OrdinalRegression > OrdinalFisherEstimation::Estimator::build_estimated(const arma::colvec& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const
        {
        	const OrdinalSampleSpace& _response_space = static_cast< const OrdinalSampleSpace& >(response_space);
        	CompleteVectorPredictor predictor = CompleteVectorPredictor(explanatory_space, _response_space.get_cardinality()-1);
        	predictor.set_beta(beta);
        	return std::make_shared< OrdinalRegression >(_response_space.get_ordered(), predictor, *_link);
        }                      
    }
}
