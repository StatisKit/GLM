#ifndef STATISKIT_GLM_ESTIMATOR_H
#define STATISKIT_GLM_ESTIMATOR_H

#include <statiskit/core/estimator.h>
#include <statiskit/glm/regression.h>
#include <statiskit/linalg/Eigen.h>
#include <Eigen/Unsupported/KroneckerProduct>

namespace statiskit
{
    namespace glm
    {
        template< class D, class B> class ScalarRegressionFisherEstimation : public OptimizationEstimation< Eigen::VectorXd, D, B >
        {
            public:
                ScalarRegressionFisherEstimation();
                ScalarRegressionFisherEstimation(D const * estimated, UnivariateConditionalData const * data);
                ScalarRegressionFisherEstimation(const ScalarRegressionFisherEstimation  & estimation);

                class Estimator : public OptimizationEstimation< Eigen::VectorXd, D, B >::Estimator
                { 
                    public:
                        Estimator();
                        ~Estimator();
                        Estimator(const Estimator& estimator);

                        virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator()(const UnivariateConditionalData& data, const bool& lazy=true) const; 

                        const statiskit::linalg::solver_type& get_solver() const;
                        void set_solver(const statiskit::linalg::solver_type& solver);

                        const typename D::link_type* get_link() const;
                        void set_link(const typename D::link_type& link);
                    
                    protected:
                        statiskit::linalg::solver_type _solver;
                        typename D::link_type * _link;

                        virtual Eigen::MatrixXd X_init(const UnivariateConditionalData& data) const;
                        virtual Eigen::VectorXd y_init(const UnivariateConditionalData& data) const = 0;
                        virtual Eigen::VectorXd w_init(const UnivariateConditionalData& data) const;

                        virtual double sigma_square(const double& mu) const = 0;

                        virtual D * build_estimated(const Eigen::VectorXd& beta, const UnivariateConditionalData& data) const = 0; //const MultivariateSampleSpace& explanatory_space) const = 0;
                }; 

            // private:
            //     // std::vector< Eigen::VectorXd > _beta;
            //     // Eigen::MatrixXd _X;
            //     // Eigen::VectorXd _y;
            //     // Eigen::VectorXd _w;
        };

        template< class D, class B> class QuantitativeScalarRegressionFisherEstimation : public ScalarRegressionFisherEstimation< D, B >
        {
            public:
                QuantitativeScalarRegressionFisherEstimation();
                QuantitativeScalarRegressionFisherEstimation(D const * estimated, UnivariateConditionalData const * data);
                QuantitativeScalarRegressionFisherEstimation(const QuantitativeScalarRegressionFisherEstimation  & estimation);

                class Estimator : public ScalarRegressionFisherEstimation< D, B >::Estimator
                { 
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
                        ~Estimator();
                    
                    protected:
                        virtual Eigen::VectorXd y_init(const UnivariateConditionalData& data) const;
                }; 
        };        

        struct STATISKIT_GLM_API PoissonRegressionFisherEstimation :  QuantitativeScalarRegressionFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >  // PolymorphicCopy <UnivariateConditionalDistributionEstimation, PoissonRegressionFisherEstimation, ScalarRegressionFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation > > 
        {
            PoissonRegressionFisherEstimation(PoissonRegression const * estimated, UnivariateConditionalData const * data);
            PoissonRegressionFisherEstimation(const PoissonRegressionFisherEstimation & estimation);

            virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

            class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, QuantitativeScalarRegressionFisherEstimation< PoissonRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
            {
            	public:
            		Estimator();
                    Estimator(const Estimator& estimator);

                protected:
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual PoissonRegression * build_estimated(const Eigen::VectorXd& beta, const UnivariateConditionalData& data) const;
            };
        };
        
        struct STATISKIT_GLM_API BinomialRegressionFisherEstimation : QuantitativeScalarRegressionFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            BinomialRegressionFisherEstimation(BinomialRegression const * estimated, UnivariateConditionalData const * data);
            BinomialRegressionFisherEstimation(const BinomialRegressionFisherEstimation & estimation);

            virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

            class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, QuantitativeScalarRegressionFisherEstimation< BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
            {
            	public:
            		Estimator();
            		Estimator(const Estimator& estimator);
            		
                    unsigned int get_kappa() const;
                    void set_kappa(const unsigned int& kappa);

                protected:
                	unsigned int _kappa;
                	
                    virtual Eigen::VectorXd y_init(const UnivariateConditionalData& data) const;
                    
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual BinomialRegression * build_estimated(const Eigen::VectorXd& beta, const UnivariateConditionalData& data) const;                                        
            };
        };
        
        struct STATISKIT_GLM_API BinomialRegressionSteepestAscentEstimation : OptimizationEstimation<unsigned int, BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            BinomialRegressionSteepestAscentEstimation(BinomialRegression const * estimated, UnivariateConditionalData const * data);
            BinomialRegressionSteepestAscentEstimation(const BinomialRegressionSteepestAscentEstimation & estimation);

            virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

            class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, OptimizationEstimation<unsigned int, BinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
                    
                    virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator()(const UnivariateConditionalData& data, const bool& lazy=true) const; 

                protected:
                    BinomialRegressionFisherEstimation::Estimator* _estimator;                                       
            };
        };

        struct STATISKIT_GLM_API NegativeBinomialRegressionFisherEstimation : QuantitativeScalarRegressionFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            NegativeBinomialRegressionFisherEstimation(NegativeBinomialRegression const * estimated, UnivariateConditionalData const * data);
            NegativeBinomialRegressionFisherEstimation(const NegativeBinomialRegressionFisherEstimation & estimation);  

            virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;
                      
            class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, QuantitativeScalarRegressionFisherEstimation< NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
            {
            	public:
            		Estimator();
            		Estimator(const Estimator& estimator);
                    
                    double get_kappa() const;
                    void set_kappa(const double& kappa);

                protected:
                	double _kappa;
                	
                    virtual Eigen::VectorXd y_init(const UnivariateConditionalData& data) const;
                    
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual NegativeBinomialRegression * build_estimated(const Eigen::VectorXd& beta, const UnivariateConditionalData& data) const;                                                            
            };
        };
        
        struct STATISKIT_GLM_API NegativeBinomialRegressionX2Estimation : OptimizationEstimation<double, NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >
        {
            NegativeBinomialRegressionX2Estimation(NegativeBinomialRegression const * estimated, UnivariateConditionalData const * data);
            NegativeBinomialRegressionX2Estimation(const NegativeBinomialRegressionX2Estimation & estimation);

            virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

            class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, OptimizationEstimation<double, NegativeBinomialRegression, DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
                    
                    virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator()(const UnivariateConditionalData& data, const bool& lazy=true) const; 

                protected:
                    NegativeBinomialRegressionFisherEstimation::Estimator* _estimator;                                       
            };
        };

        // struct STATISKIT_GLM_API BinaryRegressionFisherEstimation : ScalarRegressionFisherEstimation< BinaryRegression, CategoricalUnivariateConditionalDistributionEstimation >
        // {
        //     BinaryRegressionFisherEstimation(BinaryRegression const * estimated, UnivariateConditionalData const * data);
        //     BinaryRegressionFisherEstimation(const BinaryRegressionFisherEstimation & estimation);

        //     virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

        //     class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, ScalarRegressionFisherEstimation< BinaryRegression, CategoricalUnivariateConditionalDistributionEstimation >::Estimator >
        //     {
        //         public:
        //             Estimator();
        //             Estimator(const Estimator& estimator);

        //         protected:
        //             virtual Eigen::VectorXd y_init(const UnivariateConditionalData& data) const;
                    
        //             virtual double sigma_square(const double& mu) const;
                    
        //             virtual BinaryRegression * build_estimated(const Eigen::VectorXd& beta, const UnivariateConditionalData& data) const;                                        
        //     };
        // };

        struct STATISKIT_GLM_API CategoricalFisherInitialization
        {
            CategoricalFisherInitialization();
            virtual ~CategoricalFisherInitialization();

            virtual void operator()(const UnivariateConditionalData& data, Eigen::VectorXd& beta, const VectorLink& link) const = 0;

            virtual std::unique_ptr< CategoricalFisherInitialization > copy() const = 0;     
        };

        struct STATISKIT_GLM_API CategoricalFisherObservedInitialization : public PolymorphicCopy< CategoricalFisherInitialization, CategoricalFisherObservedInitialization >
        {
            CategoricalFisherObservedInitialization();
            virtual ~CategoricalFisherObservedInitialization();

            virtual void operator()(const UnivariateConditionalData& data, Eigen::VectorXd& beta, const VectorLink& link) const; 
        };

        struct STATISKIT_GLM_API CategoricalFisherUniformInitialization : public PolymorphicCopy< CategoricalFisherInitialization, CategoricalFisherUniformInitialization >
        {
            CategoricalFisherUniformInitialization();
            virtual ~CategoricalFisherUniformInitialization();

            virtual void operator()(const UnivariateConditionalData& data, Eigen::VectorXd& beta, const VectorLink& link) const; 
        };      
        
        class STATISKIT_GLM_API CategoricalFisherCustomInitialization : public PolymorphicCopy< CategoricalFisherInitialization, CategoricalFisherCustomInitialization >
        {
            public:
                CategoricalFisherCustomInitialization();
                CategoricalFisherCustomInitialization(const Eigen::VectorXd& beta);
                virtual ~CategoricalFisherCustomInitialization();

                virtual void operator()(const UnivariateConditionalData& data, Eigen::VectorXd& beta, const VectorLink& link) const; 

                Eigen::VectorXd get_beta() const;
                void set_beta(const Eigen::VectorXd& beta);

            private:
                Eigen::VectorXd _beta;
        }; 

        struct STATISKIT_GLM_API Design
        {
            Design();
            virtual ~Design();

            virtual std::vector< Eigen::MatrixXd > Z_init(const UnivariateConditionalData& data) const = 0;
            virtual Index beta_size(const UnivariateConditionalData& data) const = 0;
            virtual VectorPredictor* build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const = 0;

            virtual std::unique_ptr< Design > copy() const = 0; 
        };

        struct STATISKIT_GLM_API CompleteDesign : public PolymorphicCopy< Design, CompleteDesign >
        {
            CompleteDesign();
            virtual ~CompleteDesign();

            virtual std::vector< Eigen::MatrixXd > Z_init(const UnivariateConditionalData& data) const;
            virtual Index beta_size(const UnivariateConditionalData& data) const;
            virtual VectorPredictor* build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const;
        };        

        struct STATISKIT_GLM_API ProportionalDesign : public PolymorphicCopy< Design, ProportionalDesign >
        {
            ProportionalDesign();
            virtual ~ProportionalDesign();

            virtual std::vector< Eigen::MatrixXd > Z_init(const UnivariateConditionalData& data) const;
            virtual Index beta_size(const UnivariateConditionalData& data) const;
            virtual VectorPredictor* build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const;
        }; 

        class STATISKIT_GLM_API ConstrainedDesign : public PolymorphicCopy< Design, ConstrainedDesign >
        {
            public:
                ConstrainedDesign();
                ConstrainedDesign(const Eigen::MatrixXd& slope_constraint);
                virtual ~ConstrainedDesign();

                virtual std::vector< Eigen::MatrixXd > Z_init(const UnivariateConditionalData& data) const;
                virtual Index beta_size(const UnivariateConditionalData& data) const;
                virtual VectorPredictor* build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const;

                const Eigen::MatrixXd& get_intercept_constraint() const;
                void set_intercept_constraint(const Eigen::MatrixXd& intercept_constraint);
                const Eigen::MatrixXd get_slope_constraint() const;
                void set_slope_constraint(const Eigen::MatrixXd& slope_constraint);                  

            private:
                mutable Eigen::MatrixXd _intercept_constraint;
                mutable Eigen::MatrixXd _slope_constraint;                               
        }; 

        template< class D > class CategoricalRegressionFisherEstimation : public OptimizationEstimation< Eigen::VectorXd, D, CategoricalUnivariateConditionalDistributionEstimation >
        {
            public:
                CategoricalRegressionFisherEstimation();
                CategoricalRegressionFisherEstimation(D const * estimated, UnivariateConditionalData const * data);
                CategoricalRegressionFisherEstimation(const CategoricalRegressionFisherEstimation & estimation);

                class Estimator : public OptimizationEstimation< Eigen::VectorXd, D, CategoricalUnivariateConditionalDistributionEstimation >::Estimator
                {
                    public:
                        Estimator();
                        ~Estimator();
                        Estimator(const Estimator& estimator);

                        virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator()(const UnivariateConditionalData& data, const bool& lazy=true) const; 

                        const typename D::link_type* get_link() const;
                        void set_link(const typename D::link_type& link);
                        // const VectorLink* get_link() const;
                        // void set_link(const VectorLink& link);                        

                        const Design* get_design() const;
                        void set_design(const Design& design);

                        const CategoricalFisherInitialization* get_initialization() const;
                        void set_initialization(const CategoricalFisherInitialization& initialization);

                    protected:
                        typename D::link_type * _link;
                        // VectorLink* _link;
                        Design* _design;
                        CategoricalFisherInitialization* _initialization;
                        
                        virtual std::vector< Eigen::VectorXd > y_init(const UnivariateConditionalData& data) const;
                        virtual std::vector< double > w_init(const UnivariateConditionalData& data) const;

                        virtual D * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const = 0;
                }; 
                const double& get_loglikelihood() const;
                const std::vector< double >& get_loglikelihood_sequence() const;
                //const Eigen::MatrixXd& get_asymptotic_tests(const D* model) const;
                const bool& get_converged() const;

            private:
                std::vector< Eigen::VectorXd > _beta;
                std::vector< Eigen::MatrixXd > _Z;
                std::vector< Eigen::VectorXd > _y;
                std::vector< double > _w;
                mutable std::vector< double > _loglikelihood_sequence;
                mutable double _loglikelihood;
                Eigen::MatrixXd _information_inverse;
                bool _converged;
        };

        class STATISKIT_GLM_API NominalRegressionFisherEstimation : public CategoricalRegressionFisherEstimation< NominalRegression >
        {
            public:
                NominalRegressionFisherEstimation();
                NominalRegressionFisherEstimation(NominalRegression const * estimated, UnivariateConditionalData const * data);
                NominalRegressionFisherEstimation(const NominalRegressionFisherEstimation & estimation);

                class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, CategoricalRegressionFisherEstimation< NominalRegression >::Estimator >
                { 
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual NominalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;              
                }; 
        };

        class STATISKIT_GLM_API OrdinalRegressionFisherEstimation : public CategoricalRegressionFisherEstimation< OrdinalRegression >
        {
            public:
                OrdinalRegressionFisherEstimation();
                OrdinalRegressionFisherEstimation(OrdinalRegression const * estimated, UnivariateConditionalData const * data);
                OrdinalRegressionFisherEstimation(const OrdinalRegressionFisherEstimation & estimation);

                class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, CategoricalRegressionFisherEstimation< OrdinalRegression >::Estimator >
                { 
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual OrdinalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;              
                }; 
        };

        // class STATISKIT_GLM_API HierarchicalRegressionEstimation : public ActiveEstimation< HierarchicalRegression, CategoricalUnivariateConditionalDistributionEstimation >
        // {
        //     public:
        //         typedef HierarchicalRegression estimated_type;
                
        //         HierarchicalRegressionEstimation();
        //         HierarchicalRegressionEstimation(HierarchicalRegression const * estimated, data_type const * data);            
        //         HierarchicalRegressionEstimation(const HierarchicalRegressionEstimation& estimation);
        //         virtual ~HierarchicalRegressionEstimation();

        //         virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

        //         const UnivariateConditionalDistributionEstimation* get_estimation(const std::string& value) const;

        //         class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, ActiveEstimation< HierarchicalRegression, UnivariateConditionalDistributionEstimation >::Estimator >
        //         {
        //             public: 
        //                 Estimator();
        //                 Estimator(const Estimator& estimator);
        //                 virtual ~Estimator();
                        
        //                 virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator() (const data_type& data, const bool& lazy=true) const;

        //                 const CategoricalUnivariateConditionalDistributionEstimation::Estimator* get_default_estimator() const;
        //                 void set_default_estimator(const CategoricalUnivariateConditionalDistributionEstimation::Estimator* estimator);

        //                 const CategoricalUnivariateConditionalDistributionEstimation::Estimator* get_estimator(const std::string& value) const;
        //                 void set_estimator(const std::string& value, const CategoricalUnivariateConditionalDistributionEstimation::Estimator* estimator);

        //                 //const data_type& partition(const std::string& value, const data_type& data);

        //             protected:
        //                 CategoricalUnivariateConditionalDistributionEstimation::Estimator* _default_estimator;
        //                 std::map< std::string, CategoricalUnivariateConditionalDistributionEstimation::Estimator* > _estimators;
        //         };

        //     protected:
        //         std::map< std::string, UnivariateConditionalDistributionEstimation* > _estimations;
        // };

//typedef CumulativeRegressionFisherEstimation < ConstrainedRegressionFisherEstimation < OrdinalRegression > >::PartialProportionalEstimator CumulativePartialProportionalFisherEstimator;

        // template< class D > class SplittingRegressionIRPREstimation : public OptimizationEstimation< Eigen::MatrixXd, D, DiscreteMultivariateConditionalDistributionEstimation >
        // {
        //     public:
        //         SplittingRegressionIRPREstimation();
        //         SplittingRegressionIRPREstimation(D const * estimated, MultivariateConditionalData const * data);
        //         SplittingRegressionIRPREstimation(const SplittingRegressionIRPREstimation& estimation);
        // };
    }
}

#include "estimator.hpp"
#endif