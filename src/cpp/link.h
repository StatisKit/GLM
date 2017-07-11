#ifndef STATISKIT_GLM_LINK_H
#define STATISKIT_GLM_LINK_H

#include <statiskit/glm/predictor.h>
#include <statiskit/core/distribution.h>

namespace statiskit
{
        template<class T>
        struct FLink : public T
        {
            public:
                FLink();
                FLink(const FLink& flink);
                virtual ~FLink();

                ContinuousUnivariateDistribution* get_distribution();            
                void set_distribution(const ContinuousUnivariateDistribution& distribution);
            
            protected:
                ContinuousUnivariateDistribution* _distribution;
        };

        struct STATISKIT_GLM_API ScalarLink
        {
            typedef ScalarPredictor predictor_type;
            typedef double expectation_type;

            virtual double evaluate(const double& value) const = 0;

            virtual double inverse(const double& value) const = 0;
            virtual double inverse_derivative(const double& value) const = 0;
        };        

        struct STATISKIT_GLM_API PoissonLink : ScalarLink
        {
            typedef PoissonDistribution family_type;
            
            virtual std::unique_ptr< PoissonLink > copy() const = 0;
        };

        struct STATISKIT_GLM_API PoissonCanonicalLink : PoissonLink
        {
            PoissonCanonicalLink();
            virtual ~PoissonCanonicalLink();

            virtual double evaluate(const double& value) const;

            virtual double inverse(const double& value) const;
            virtual double inverse_derivative(const double& value) const;
            
            virtual std::unique_ptr< PoissonLink > copy() const;
        };
        
        struct STATISKIT_GLM_API PoissonVLink : FLink<PoissonLink>
        {
            PoissonVLink();
            PoissonVLink(const PoissonVLink& link);
            virtual ~PoissonVLink();

            virtual double evaluate(const double& value) const;

	        virtual double inverse(const double& value) const;
	        virtual double inverse_derivative(const double& value) const;

	        virtual std::unique_ptr< PoissonLink > copy() const;
        };

        struct STATISKIT_GLM_API BinomialLink : ScalarLink
        {
            typedef BinomialDistribution family_type;
            
            virtual std::unique_ptr< BinomialLink > copy() const = 0;
        };

        struct STATISKIT_GLM_API BinomialCanonicalLink : BinomialLink
        {
            BinomialCanonicalLink();
            virtual ~BinomialCanonicalLink();

            virtual double evaluate(const double& value) const;

            virtual double inverse(const double& value) const;
            virtual double inverse_derivative(const double& value) const;
            
            virtual std::unique_ptr< BinomialLink > copy() const;
        };
        
        struct STATISKIT_GLM_API BinomialFLink : FLink<BinomialLink>
        {
	    	BinomialFLink();
            BinomialFLink(const BinomialFLink& link);
	    	virtual ~BinomialFLink();

            virtual double evaluate(const double& value) const;

	        virtual double inverse(const double& value) const;
	        virtual double inverse_derivative(const double& value) const;

	        virtual std::unique_ptr< BinomialLink > copy() const;
        };       

        struct STATISKIT_GLM_API NegativeBinomialLink : ScalarLink
        {
            typedef NegativeBinomialDistribution family_type;
            
            virtual std::unique_ptr< NegativeBinomialLink > copy() const = 0;
        };        
        
        struct STATISKIT_GLM_API NegativeBinomialCanonicalLink : NegativeBinomialLink
        {
            NegativeBinomialCanonicalLink();
            virtual ~NegativeBinomialCanonicalLink();

            virtual double evaluate(const double& value) const;

            virtual double inverse(const double& value) const;
            virtual double inverse_derivative(const double& value) const;
            
			virtual std::unique_ptr< NegativeBinomialLink > copy() const;
        };  
        
        struct STATISKIT_GLM_API NegativeBinomialULink : FLink<NegativeBinomialLink>
        {
            NegativeBinomialULink();
            NegativeBinomialULink(const NegativeBinomialULink& link);
            virtual ~NegativeBinomialULink();

            virtual double evaluate(const double& value) const;

            virtual double inverse(const double& value) const;
            virtual double inverse_derivative(const double& value) const;
                        
            virtual std::unique_ptr< NegativeBinomialLink > copy() const;
        };

        struct STATISKIT_GLM_API NegativeBinomialVLink : FLink<NegativeBinomialLink>
        {
            NegativeBinomialVLink();
            NegativeBinomialVLink(const NegativeBinomialVLink& link);
            virtual ~NegativeBinomialVLink();

            virtual double evaluate(const double& value) const;

            virtual double inverse(const double& value) const;
            virtual double inverse_derivative(const double& value) const;
                        
            virtual std::unique_ptr< NegativeBinomialLink > copy() const;
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

            virtual std::unique_ptr< NominalLink > copy() const = 0;
        };

        struct STATISKIT_GLM_API NominalCanonicalLink : NominalLink
        {
            NominalCanonicalLink();
            virtual ~NominalCanonicalLink();

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& values) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< NominalLink > copy() const;
        };
        
        struct STATISKIT_GLM_API ReferenceLink : FLink<NominalLink>
        {
            ReferenceLink();
            ReferenceLink(const ReferenceLink& link);
            virtual ~ReferenceLink();

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& value) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< NominalLink > copy() const;
        };
        
        struct STATISKIT_GLM_API OrdinalLink : VectorLink
        {
            typedef OrdinalDistribution family_type;

            virtual std::unique_ptr< OrdinalLink > copy() const = 0;
        };

        struct STATISKIT_GLM_API OrdinalCanonicalLink : OrdinalLink
        {
            OrdinalCanonicalLink();
            virtual ~OrdinalCanonicalLink();

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& values) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< OrdinalLink > copy() const;
        };

        struct STATISKIT_GLM_API AdjacentLink : FLink<OrdinalLink>
        {
            AdjacentLink();
            AdjacentLink(const AdjacentLink& link);
            virtual ~AdjacentLink();

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& value) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< OrdinalLink > copy() const;
        };  
        
        struct STATISKIT_GLM_API CumulativeLink : FLink<OrdinalLink>
        {
            CumulativeLink();
            CumulativeLink(const CumulativeLink& link);
            virtual ~CumulativeLink();

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& value) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< OrdinalLink > copy() const;
        };
        
        struct STATISKIT_GLM_API SequentialLink : FLink<OrdinalLink>
        {
            SequentialLink();
            SequentialLink(const SequentialLink& link);
            virtual ~SequentialLink();

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& value) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< OrdinalLink > copy() const;
        };                                                   

        struct STATISKIT_GLM_API MultinomialSplittingLink : VectorLink
        {
            typedef MultinomialSplittingDistribution family_type;

            virtual std::unique_ptr< MultinomialSplittingLink > copy() const = 0;
        };

        struct STATISKIT_GLM_API MultinomialSplittingCanonicalLink : MultinomialSplittingLink
        {
            MultinomialSplittingCanonicalLink();
            virtual ~MultinomialSplittingCanonicalLink();

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& values) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< MultinomialSplittingLink > copy() const;
        };
}

#include "link.hpp"
#endif
