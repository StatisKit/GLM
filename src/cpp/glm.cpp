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
        
        
        NominalRegression::NominalRegression(const std::set< event_type::value_type >& values, const VectorPredictor& predictor, const NominalLink& link) :  GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, NominalLink >(predictor, link)
        {
        	std::vector< double > pi;
        	_family = new NominalDistribution(values, pi); 
        }

        void NominalRegression::update(const std::vector< double >& values)
        { _family->set_pi(values); }   
        
        
        ReferenceRegression::ReferenceRegression(const std::set< event_type::value_type >& values, const VectorPredictor& predictor, const ReferenceLink& link) :  GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, ReferenceLink >(predictor, link)
        {
        	std::vector< double > pi;
        	_family = new NominalDistribution(values, pi); 
        }

        void ReferenceRegression::update(const std::vector< double >& values)
        { _family->set_pi(values); }
        
        OrdinalRegression::OrdinalRegression(const std::set< event_type::value_type >& values, const std::vector< size_t >& rank, const VectorPredictor& predictor, const OrdinalLink& link) :  GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, OrdinalLink >(predictor, link)
        {
        	std::vector< double > pi;
        	_family = new OrdinalDistribution(values, rank, pi); 
        }

        void OrdinalRegression::update(const std::vector< double >& values)
        { _family->set_ordered_pi(values); } 
                
        AdjacentRegression::AdjacentRegression(const std::set< event_type::value_type >& values, const std::vector< size_t >& rank, const VectorPredictor& predictor, const AdjacentLink& link) :  GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, AdjacentLink >(predictor, link)
        {
        	std::vector< double > pi;
        	_family = new OrdinalDistribution(values, rank, pi); 
        }

        void AdjacentRegression::update(const std::vector< double >& values)
        { _family->set_ordered_pi(values); }            
 
                
        CumulativeRegression::CumulativeRegression(const std::set< event_type::value_type >& values, const std::vector< size_t >& rank, const VectorPredictor& predictor, const CumulativeLink& link) :  GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, CumulativeLink >(predictor, link)
        {
        	std::vector< double > pi;
        	_family = new OrdinalDistribution(values, rank, pi); 
        }

        void CumulativeRegression::update(const std::vector< double >& values)
        { _family->set_ordered_pi(values); }
        
                
        SequentialRegression::SequentialRegression(const std::set< event_type::value_type >& values, const std::vector< size_t >& rank, const VectorPredictor& predictor, const SequentialLink& link) :  GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, SequentialLink >(predictor, link)
        {
        	std::vector< double > pi;
        	_family = new OrdinalDistribution(values, rank, pi); 
        }

        void SequentialRegression::update(const std::vector< double >& values)
        { _family->set_ordered_pi(values); }                                 
    }
}
