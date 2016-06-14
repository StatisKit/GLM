#include "link.h"

namespace statiskit
{
        double PoissonLink::inverse(const double& value) const
        { return exp(value); }

        std::unique_ptr< ScalarLink > PoissonLink::copy() const
        { return std::make_unique< PoissonLink >(*this); } 


		PoissonFLink::PoissonFLink()
		{ _distribution = new LogisticDistribution(); }
		
		PoissonFLink::~PoissonFLink()
		{ delete _distribution; }
		
		void PoissonFLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
		{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        double PoissonFLink::inverse(const double& value) const
        { return _distribution->cdf(value) / ( 1-_distribution->cdf(value) ); }

        std::unique_ptr< PoissonLink > PoissonFLink::copy() const
        { return std::make_unique< PoissonFLink >(*this); }        

                   
        double BinomialLink::inverse(const double& value) const
        { return 1. / (1 + exp(-value)); }

        std::unique_ptr< BinomialLink > BinomialLink::copy() const
        { return std::make_unique< BinomialLink >(*this); }


		BinomialFLink::BinomialFLink()
		{ _distribution = new LogisticDistribution(); }
		
		BinomialFLink::~BinomialFLink()
		{ delete _distribution; }
				
		void BinomialFLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
		{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        double BinomialFLink::inverse(const double& value) const
        { return _distribution->cdf(value); }

        std::unique_ptr< BinomialLink > BinomialFLink::copy() const
        { return std::make_unique< BinomialFLink >(*this); }  
           
           
        double NegativeBinomialLink::inverse(const double& value) const
        { return 1 - exp(value); } // defined if value < 0.

        std::unique_ptr< NegativeBinomialLink > NegativeBinomialLink::copy() const
        { return std::make_unique< NegativeBinomialLink >(*this); } 


		NegativeBinomialFLink::NegativeBinomialFLink()
		{ _distribution = new LogisticDistribution(); }
		
		NegativeBinomialFLink::~NegativeBinomialFLink()
		{ delete _distribution; }
				
		void NegativeBinomialFLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
		{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        double NegativeBinomialFLink::inverse(const double& value) const
        { return _distribution->cdf(value); }

        std::unique_ptr< NegativeBinomialLink > NegativeBinomialFLink::copy() const
        { return std::make_unique< NegativeBinomialFLink >(*this); }
        
        
        std::vector<double> CategoricalLink::inverse(const arma::colvec& values) const
        {
        	std::vector<double> pi( values.size() );
        	double norm = 1;
        	for(size_t j=0; j<values.size(); ++j)
        	{ norm += exp( values(j) ); }
        	for(size_t j=0; j<values.size(); ++j)
        	{ pi[j] = exp( values(j) ) / norm; }    
        	    	
        	return pi; 
        } 
        
        std::unique_ptr< CategoricalLink > CategoricalLink::copy() const
        { return std::make_unique< CategoricalLink >(*this); }
        
        
		ReferenceLink::ReferenceLink()
		{ _distribution = new LogisticDistribution(); }
		
		ReferenceLink::~ReferenceLink()
		{ delete _distribution; }
				
		void ReferenceLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
		{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        std::vector<double> ReferenceLink::inverse(const arma::colvec& values) const
        {
        	std::vector<double> pi( values.size() );
        	double norm = 1;
        	for(size_t j=0; j<values.size(); ++j)
        	{ norm += _distribution->cdf( values(j) ) / ( 1-_distribution->cdf( values(j) ) ); }
        	for(size_t j=0; j<values.size(); ++j)
        	{ pi[j] = _distribution->cdf( values(j) ) / ( 1-_distribution->cdf( values(j) ) ) / norm; }    
        	    	
        	return pi; 
        }        

        std::unique_ptr< CategoricalLink > ReferenceLink::copy() const
        { return std::make_unique< ReferenceLink >(*this); } 
        
//        
//        std::vector<double> OrdinalLink::inverse(const arma::colvec& values) const
//        {
//        	std::vector<double> ordered_pi( values.size() );
//        	double norm = 1;
//        	for(size_t j=0; j<values.size(); ++j)
//        	{ norm += exp( values(j) ); }
//        	for(size_t j=0; j<values.size(); ++j)
//        	{ ordered_pi[j] = exp( values(j) ) / norm; }    
//        	    	
//        	return ordered_pi; 
//        } 
//        
//        std::unique_ptr< OrdinalLink > OrdinalLink::copy() const
//        { return std::make_unique< OrdinalLink >(*this); }                
}


