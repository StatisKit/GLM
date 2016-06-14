#include "glm.h"

namespace statiskit
{
    namespace glm
    {              
        PoissonRegression::PoissonRegression(const ScalarPredictor& predictor, const PoissonLink& link) :  GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, PoissonLink >(predictor, link)
        { _family = new PoissonDistribution(std::numeric_limits< double >::quiet_NaN()); }

        void PoissonRegression::update(const double& value)
        { _family->set_theta(value); } 
        
                    
        BinomialRegression::BinomialRegression(const unsigned int& kappa, const ScalarPredictor& predictor, const BinomialLink& link) :  GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, BinomialLink >(predictor, link)
        { _family = new BinomialDistribution(kappa, std::numeric_limits< double >::quiet_NaN()); }

        void BinomialRegression::update(const double& value)
        { _family->set_pi(value); }    
        
        
        NegativeBinomialRegression::NegativeBinomialRegression(const unsigned int& kappa, const ScalarPredictor& predictor, const NegativeBinomialLink& link) :  GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, NegativeBinomialLink >(predictor, link)
        { _family = new NegativeBinomialDistribution(kappa, std::numeric_limits< double >::quiet_NaN()); }

        void NegativeBinomialRegression::update(const double& value)
        { _family->set_pi(value); } 
        
        
        ReferenceRegression::ReferenceRegression(const std::set< event_type::value_type >& values, const VectorPredictor& predictor, const NominalLink& link) :  GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, NominalLink >(predictor, link)
        {
        	std::vector< double > pi;
        	_family = new NominalDistribution(values, pi); 
        }

        void ReferenceRegression::update(const std::vector< double >& values)
        { _family->set_pi(values); }                   
    }
}
