#ifndef STATISKIT_GLM_LINK_H
#define STATISKIT_GLM_LINK_H

#include <statiskit/glm/predictor.h>
#include <statiskit/core/distribution.h>

namespace statiskit
{
        struct ScalarLink
        {
            typedef ScalarPredictor predictor_type;
            typedef double expectation_type;

            virtual double inverse(const double& value) const = 0;
        };        
        
        struct PoissonLink : ScalarLink
        {
            typedef PoissonDistribution family_type;

            virtual double inverse(const double& value) const;

            virtual std::unique_ptr< PoissonLink > copy() const;
        };
        
        class PoissonFLink : public PoissonLink
        {
        	public:
		    	PoissonFLink();
		    	virtual ~PoissonFLink();
		    	
		        virtual double inverse(const double& value) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< PoissonLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };
        
        struct BinomialLink : ScalarLink
        {
            typedef BinomialDistribution family_type;

            virtual double inverse(const double& value) const;

            virtual std::unique_ptr< BinomialLink > copy() const;
        };
        
        class BinomialFLink : public BinomialLink
        {
        	public:
		    	BinomialFLink();
		    	virtual ~BinomialFLink();
		    	
		        virtual double inverse(const double& value) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< BinomialLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };       
        
        struct NegativeBinomialLink : ScalarLink
        {
            typedef NegativeBinomialDistribution family_type;

            virtual double inverse(const double& value) const;

            virtual std::unique_ptr< NegativeBinomialLink > copy() const;
        };  
        
        class NegativeBinomialFLink : public NegativeBinomialLink
        {
        	public:
		    	NegativeBinomialFLink();
		    	virtual ~NegativeBinomialFLink();
		    	
		        virtual double inverse(const double& value) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< NegativeBinomialLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };         
        
        struct VectorLink
        {
            typedef VectorPredictor predictor_type;
            typedef std::vector<double> expectation_type;
            
            virtual std::vector<double> inverse(const arma::colvec& values) const = 0;
            
//            virtual std::unique_ptr< VectorLink > copy() const = 0;
        };
        
        struct CategoricalLink : VectorLink
        {
            typedef CategoricalUnivariateDistribution family_type;

            virtual std::vector<double> inverse(const arma::colvec& values) const;

            virtual std::unique_ptr< CategoricalLink > copy() const;
        };
        
        class ReferenceLink : public CategoricalLink
        {
        	public:
		    	ReferenceLink();
		    	virtual ~ReferenceLink();
		    	
		        virtual std::vector<double> inverse(const arma::colvec& value) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< CategoricalLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };
        
//        class AdjacentLink : public CategoricalLink
//        {
//        	public:
//		    	AdjacentLink();
//		    	virtual ~AdjacentLink();
//		    	
//		        virtual std::vector<double> inverse(const arma::colvec& value) const;
//		        
//		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

//		        virtual std::unique_ptr< VectorLink > copy() const;
//            
//            protected:
//            	ContinuousUnivariateDistribution* _distribution;
//        };        
 
       
//        struct OrdinalLink : VectorLink
//        {
//            typedef OrdinalDistribution family_type;

//            virtual std::vector<double> inverse(const arma::colvec& values) const;

//            virtual std::unique_ptr< OrdinalLink > copy() const;
//        };                              
}

#endif
