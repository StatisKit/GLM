#ifndef STATISKIT_GLM_LINK_H
#define STATISKIT_GLM_LINK_H

#include <statiskit/glm/predictor.h>
#include <statiskit/core/distribution.h>

namespace statiskit
{
    namespace glm
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

            virtual double evaluate(const double& mu) const = 0;
            virtual double inverse(const double& eta) const = 0;
            virtual double inverse_derivative(const double& eta) const = 0;
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

            virtual double evaluate(const double& mu) const;
            virtual double inverse(const double& eta) const;
            virtual double inverse_derivative(const double& eta) const;
            
            virtual std::unique_ptr< PoissonLink > copy() const;
        };
        
        struct STATISKIT_GLM_API PoissonVLink : FLink<PoissonLink>
        {
            PoissonVLink();
            PoissonVLink(const PoissonVLink& link);
            virtual ~PoissonVLink();

            virtual double evaluate(const double& mu) const;
	        virtual double inverse(const double& eta) const;
	        virtual double inverse_derivative(const double& eta) const;

	        virtual std::unique_ptr< PoissonLink > copy() const;
        };

        struct STATISKIT_GLM_API BinomialLink : ScalarLink
        {
            typedef BinomialDistribution family_type;
            
            virtual std::unique_ptr< BinomialLink > copy() const = 0;
        };

        struct STATISKIT_GLM_API BinaryLink : ScalarLink
        {
            typedef BinaryDistribution family_type;
            
            virtual std::unique_ptr< BinaryLink > copy() const = 0;
        };

        template<class T>
        struct STATISKIT_GLM_API BinCanonicalLink : T
        {
            BinCanonicalLink();
            virtual ~BinCanonicalLink();

            virtual double evaluate(const double& mu) const;
            virtual double inverse(const double& eta) const;
            virtual double inverse_derivative(const double& eta) const;
            
            virtual std::unique_ptr< T > copy() const;
        };

        typedef BinCanonicalLink< BinaryLink > BinaryCanonicalLink;
        typedef BinCanonicalLink< BinomialLink > BinomialCanonicalLink;        
        
        template<class T>
        struct STATISKIT_GLM_API BinFLink : FLink< T >
        {
            BinFLink();
            BinFLink(const BinFLink& link);
            virtual ~BinFLink();

            virtual double evaluate(const double& mu) const;
            virtual double inverse(const double& eta) const;
            virtual double inverse_derivative(const double& eta) const;

            virtual std::unique_ptr< T > copy() const;
        };

        typedef BinFLink< BinaryLink > BinaryFLink;
        typedef BinFLink< BinomialLink > BinomialFLink;       

        struct STATISKIT_GLM_API NegativeBinomialLink : ScalarLink
        {
            typedef NegativeBinomialDistribution family_type;
            
            virtual std::unique_ptr< NegativeBinomialLink > copy() const = 0;
        };        
        
        struct STATISKIT_GLM_API NegativeBinomialCanonicalLink : NegativeBinomialLink
        {
            NegativeBinomialCanonicalLink();
            virtual ~NegativeBinomialCanonicalLink();

            virtual double evaluate(const double& mu) const;
            virtual double inverse(const double& eta) const;
            virtual double inverse_derivative(const double& eta) const;
            
			virtual std::unique_ptr< NegativeBinomialLink > copy() const;
        };  
        
        struct STATISKIT_GLM_API NegativeBinomialULink : FLink<NegativeBinomialLink>
        {
            NegativeBinomialULink();
            NegativeBinomialULink(const NegativeBinomialULink& link);
            virtual ~NegativeBinomialULink();

            virtual double evaluate(const double& mu) const;
            virtual double inverse(const double& eta) const;
            virtual double inverse_derivative(const double& eta) const;
                        
            virtual std::unique_ptr< NegativeBinomialLink > copy() const;
        };

        struct STATISKIT_GLM_API NegativeBinomialVLink : FLink<NegativeBinomialLink>
        {
            NegativeBinomialVLink();
            NegativeBinomialVLink(const NegativeBinomialVLink& link);
            virtual ~NegativeBinomialVLink();

            virtual double evaluate(const double& mu) const;
            virtual double inverse(const double& eta) const;
            virtual double inverse_derivative(const double& eta) const;
                        
            virtual std::unique_ptr< NegativeBinomialLink > copy() const;
        };

        struct STATISKIT_GLM_API VectorLink
        {
            typedef VectorPredictor predictor_type;
            typedef Eigen::VectorXd expectation_type;
            
            virtual Eigen::VectorXd evaluate(const Eigen::VectorXd& mu) const = 0;
            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& eta) const = 0;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& eta) const = 0;

            Eigen::VectorXd in_open_corner(const Eigen::VectorXd& p) const; // projection into a closed simplex strictly included in the open corner of hypercube.

            double _epsilon_0 = 1e-10;
            double _epsilon_1 = 1e-6;
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

            virtual Eigen::VectorXd evaluate(const Eigen::VectorXd& pi) const;
            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& eta) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& eta) const;

            virtual std::unique_ptr< NominalLink > copy() const;
        };
        
        struct STATISKIT_GLM_API ReferenceLink : FLink<NominalLink>
        {
            ReferenceLink();
            ReferenceLink(const ReferenceLink& link);
            virtual ~ReferenceLink();

            virtual Eigen::VectorXd evaluate(const Eigen::VectorXd& pi) const;
            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& eta) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& eta) const;

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

            virtual Eigen::VectorXd evaluate(const Eigen::VectorXd& pi) const;
            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& eta) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& eta) const;

            virtual std::unique_ptr< OrdinalLink > copy() const;
        };

        struct STATISKIT_GLM_API AdjacentLink : FLink<OrdinalLink>
        {
            AdjacentLink();
            AdjacentLink(const AdjacentLink& link);
            virtual ~AdjacentLink();

            virtual Eigen::VectorXd evaluate(const Eigen::VectorXd& pi) const;
            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& eta) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& eta) const;

            virtual std::unique_ptr< OrdinalLink > copy() const;
        };  
        
        struct STATISKIT_GLM_API CumulativeLink : FLink<OrdinalLink>
        {
            CumulativeLink();
            CumulativeLink(const CumulativeLink& link);
            virtual ~CumulativeLink();
            
            virtual Eigen::VectorXd evaluate(const Eigen::VectorXd& pi) const;
            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& eta) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& eta) const;

            virtual std::unique_ptr< OrdinalLink > copy() const;
        };
        
        struct STATISKIT_GLM_API SequentialLink : FLink<OrdinalLink>
        {
            SequentialLink();
            SequentialLink(const SequentialLink& link);
            virtual ~SequentialLink();
            
            virtual Eigen::VectorXd evaluate(const Eigen::VectorXd& pi) const;
            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& eta) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& eta) const;

            virtual std::unique_ptr< OrdinalLink > copy() const;
        };                                                   

        /*struct STATISKIT_GLM_API MultinomialSplittingLink : VectorLink
        {
            typedef MultinomialSplittingOperator family_type;

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

        struct STATISKIT_GLM_API DirichletMultinomialSplittingLink : VectorLink
        {
            typedef DirichletMultinomialSplittingOperator family_type;
            
            virtual std::unique_ptr< DirichletMultinomialSplittingLink > copy() const = 0;
        };

        struct STATISKIT_GLM_API DirichletMultinomialSplittingCanonicalLink : DirichletMultinomialSplittingLink
        {
            DirichletMultinomialSplittingCanonicalLink();
            virtual ~DirichletMultinomialSplittingCanonicalLink();

            virtual Eigen::VectorXd inverse(const Eigen::VectorXd& values) const;
            virtual Eigen::MatrixXd inverse_derivative(const Eigen::VectorXd& values) const;

            virtual std::unique_ptr< DirichletMultinomialSplittingLink > copy() const;
        };*/
    }
}

#include "link.hpp"
#endif
