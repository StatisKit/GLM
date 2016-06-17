#include "link.h"

namespace statiskit
{
        double PoissonLink::inverse(const double& value) const
        { return exp(value); }

        std::unique_ptr< PoissonLink > PoissonLink::copy() const
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
        
        
        arma::colvec NominalLink::inverse(const arma::colvec& values) const
        {
        	arma::colvec pi( values.size());
        	pi = arma::exp(values);
        	double norm = 1 + arma::norm(pi);
        	return pi/norm; 
        } 
        
        std::unique_ptr< NominalLink > NominalLink::copy() const
        { return std::make_unique< NominalLink >(*this); }
        
        
		ReferenceLink::ReferenceLink()
		{ _distribution = new LogisticDistribution(); }
		
		ReferenceLink::~ReferenceLink()
		{ delete _distribution; }
				
		void ReferenceLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
		{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        arma::colvec ReferenceLink::inverse(const arma::colvec& values) const
        {
        	arma::colvec pi( values.size() );
        	double norm = 1;
        	for(size_t j=0; j<values.size(); ++j)
        	{
        		pi[j] = _distribution->cdf( values(j) ) / ( 1-_distribution->cdf( values(j) ) );
        		norm += pi[j];
        	}
        	return pi/norm; 
        }        

        std::unique_ptr< NominalLink > ReferenceLink::copy() const
        { return std::make_unique< ReferenceLink >(*this); } 
        
        
        
        arma::colvec OrdinalLink::inverse(const arma::colvec& values) const
        {
        	arma::colvec pi( values.size());
        	pi = arma::exp(values);
        	double norm = 1 + arma::norm(pi);
        	return pi/norm;  
        } 
        
        std::unique_ptr< OrdinalLink > OrdinalLink::copy() const
        { return std::make_unique< OrdinalLink >(*this); }   
        
            

		AdjacentLink::AdjacentLink()
		{ _distribution = new LogisticDistribution(); }
		
		AdjacentLink::~AdjacentLink()
		{ delete _distribution; }
				
		void AdjacentLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
		{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        arma::colvec AdjacentLink::inverse(const arma::colvec& values) const
        {
        	arma::colvec ordered_pi( values.size() );
        	ordered_pi[values.size()-1] = _distribution->cdf( values(values.size()-1) ) / ( 1-_distribution->cdf( values(values.size()-1) ) );
        	double norm = 1 + ordered_pi[values.size()-1];
        	for(size_t j=values.size()-2; j>=0; --j)
        	{
        		ordered_pi[j] = ordered_pi[j+1] * _distribution->cdf( values(j) ) / ( 1-_distribution->cdf( values(j) ) );
        		norm += ordered_pi[j];
        	}         	    	
        	return ordered_pi/norm; 
        }        

        std::unique_ptr< OrdinalLink > AdjacentLink::copy() const
        { return std::make_unique< AdjacentLink >(*this); }
            

		CumulativeLink::CumulativeLink()
		{ _distribution = new LogisticDistribution(); }
		
		CumulativeLink::~CumulativeLink()
		{ delete _distribution; }
				
		void CumulativeLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
		{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        arma::colvec CumulativeLink::inverse(const arma::colvec& values) const
        {
        	arma::colvec ordered_pi( values.size() );
			ordered_pi[0] = _distribution->cdf( values(0) );
        	for(size_t j=1; j<values.size(); ++j)
        	{ ordered_pi[j] = _distribution->cdf( values(j) ) - _distribution->cdf( values(j-1) ); }
        	
        	return ordered_pi; 
        }        

        std::unique_ptr< OrdinalLink > CumulativeLink::copy() const
        { return std::make_unique< CumulativeLink >(*this); }
        
            

		SequentialLink::SequentialLink()
		{ _distribution = new LogisticDistribution(); }
		
		SequentialLink::~SequentialLink()
		{ delete _distribution; }
				
		void SequentialLink::set_distribution(const ContinuousUnivariateDistribution& distribution)
		{ _distribution = static_cast< ContinuousUnivariateDistribution* >( distribution.copy().release() ); }
        
        arma::colvec SequentialLink::inverse(const arma::colvec& values) const
        {
        	arma::colvec ordered_pi( values.size() );
			double product = 1;
        	for(size_t j=0; j<values.size(); ++j)
        	{ 
        		ordered_pi[j] = product * _distribution->cdf( values(j) );
        		product *= ( 1 - _distribution->cdf( values(j) ) );
        	}			
        	    	
        	return ordered_pi; 
        }        

        std::unique_ptr< OrdinalLink > SequentialLink::copy() const
        { return std::make_unique< SequentialLink >(*this); }                 
}


