#ifndef STATISKIT_GLM_LINK_H
#define STATISKIT_GLM_LINK_H

#include <statiskit/glm/predictor.h>
#include <statiskit/core/distribution.h>

namespace statiskit
{
        struct STATISKIT_GLM_API ScalarLink
        {
            typedef ScalarPredictor predictor_type;
            typedef double expectation_type;

            virtual double inverse(const double& value) const = 0;
            virtual double inverse_derivative(const double& value) const = 0;
        };        
        
        struct STATISKIT_GLM_API PoissonLink : ScalarLink
        {
            typedef PoissonDistribution family_type;

            virtual double inverse(const double& value) const;
            virtual double inverse_derivative(const double& value) const;
            
            virtual std::unique_ptr< PoissonLink > copy() const;
        };
        
        class STATISKIT_GLM_API PoissonFLink : public PoissonLink
        {
        	public:
		    	PoissonFLink();
		    	virtual ~PoissonFLink();
		    	
		        virtual double inverse(const double& value) const;
		        virtual double inverse_derivative(const double& value) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< PoissonLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };
        
        struct STATISKIT_GLM_API BinomialLink : ScalarLink
        {
            typedef BinomialDistribution family_type;

            virtual double inverse(const double& value) const;
            virtual double inverse_derivative(const double& value) const;
            
            virtual std::unique_ptr< BinomialLink > copy() const;
        };
        
        class STATISKIT_GLM_API BinomialFLink : public BinomialLink
        {
        	public:
		    	BinomialFLink();
		    	virtual ~BinomialFLink();
		    	
		        virtual double inverse(const double& value) const;
		        virtual double inverse_derivative(const double& value) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< BinomialLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };       
        
        struct STATISKIT_GLM_API NegativeBinomialLink : ScalarLink
        {
            typedef NegativeBinomialDistribution family_type;

            virtual double inverse(const double& value) const;
            virtual double inverse_derivative(const double& value) const;
            
			virtual std::unique_ptr< NegativeBinomialLink > copy() const;
        };  
        
        class STATISKIT_GLM_API NegativeBinomialFLink : public NegativeBinomialLink
        {
        	public:
		    	NegativeBinomialFLink();
		    	virtual ~NegativeBinomialFLink();
		    	
		        virtual double inverse(const double& value) const;
		        virtual double inverse_derivative(const double& value) const;
		                    
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< NegativeBinomialLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };         
        
        struct STATISKIT_GLM_API VectorLink
        {
            typedef VectorPredictor predictor_type;
            typedef Eigen::VectorXd expectation_type;
            
            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& values) const = 0;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const = 0;
        };
        
        struct STATISKIT_GLM_API NominalLink : VectorLink
        {
            typedef NominalDistribution family_type;

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& values) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< NominalLink > copy() const;
        };
        
        class STATISKIT_GLM_API ReferenceLink : public NominalLink
        {
        	public:
		    	ReferenceLink();
		    	virtual ~ReferenceLink();
		    	
		        virtual Eigen::VectorXd inverse(const Eigen::VectorXd& value) const;
		        virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< NominalLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };
        
        struct STATISKIT_GLM_API OrdinalLink : VectorLink
        {
            typedef OrdinalDistribution family_type;

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& values) const;
			virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< OrdinalLink > copy() const;
        };
                
        class STATISKIT_GLM_API AdjacentLink : public OrdinalLink
        {
        	public:
		    	AdjacentLink();
		    	virtual ~AdjacentLink();
		    	
		        virtual Eigen::VectorXd inverse(const Eigen::VectorXd& value) const;
		        virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< OrdinalLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };  
        
        class STATISKIT_GLM_API CumulativeLink : public OrdinalLink
        {
        	public:
		    	CumulativeLink();
		    	virtual ~CumulativeLink();
		    	
		        virtual Eigen::VectorXd inverse(const Eigen::VectorXd& value) const;
		        virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< OrdinalLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };
        
        class STATISKIT_GLM_API SequentialLink : public OrdinalLink
        {
        	public:
		    	SequentialLink();
		    	virtual ~SequentialLink();
		    	
		        virtual Eigen::VectorXd inverse(const Eigen::VectorXd& value) const;
		        virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;
		        
		        void set_distribution(const ContinuousUnivariateDistribution& distribution);

		        virtual std::unique_ptr< OrdinalLink > copy() const;
            
            protected:
            	ContinuousUnivariateDistribution* _distribution;
        };                                                   
}

#endif
