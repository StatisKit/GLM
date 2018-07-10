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

        struct STATISKIT_GLM_API BinaryRegressionFisherEstimation : ScalarRegressionFisherEstimation< BinaryRegression, CategoricalUnivariateConditionalDistributionEstimation >
        {
            BinaryRegressionFisherEstimation(BinaryRegression const * estimated, UnivariateConditionalData const * data);
            BinaryRegressionFisherEstimation(const BinaryRegressionFisherEstimation & estimation);

            virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

            class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, ScalarRegressionFisherEstimation< BinaryRegression, CategoricalUnivariateConditionalDistributionEstimation >::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);

                protected:
                    virtual Eigen::VectorXd y_init(const UnivariateConditionalData& data) const;
                    
                    virtual double sigma_square(const double& mu) const;
                    
                    virtual BinaryRegression * build_estimated(const Eigen::VectorXd& beta, const UnivariateConditionalData& data) const;                                        
            };
        };

        struct CategoricalFisherInitialization
        {
            CategoricalFisherInitialization();
            virtual ~CategoricalFisherInitialization();

            virtual void operator()(const UnivariateConditionalData& data, Eigen::VectorXd& beta, const VectorLink& link) = 0;                
        };

        struct CategoricalFisherObservedInitialization : public CategoricalFisherInitialization
        {
            CategoricalFisherObservedInitialization();
            virtual ~CategoricalFisherObservedInitialization();

            virtual void operator()(const UnivariateConditionalData& data, Eigen::VectorXd& beta, const VectorLink& link); 
        };

        struct CategoricalFisherUniformInitialization : public CategoricalFisherInitialization
        {
            CategoricalFisherUniformInitialization();
            virtual ~CategoricalFisherUniformInitialization();

            virtual void operator()(const UnivariateConditionalData& data, Eigen::VectorXd& beta, const VectorLink& link); 
        };      
        
        class CategoricalFisherCustomInitialization : public CategoricalFisherInitialization
        {
            public:
                CategoricalFisherCustomInitialization();
                virtual ~CategoricalFisherCustomInitialization();

                virtual void operator()(const UnivariateConditionalData& data, Eigen::VectorXd& beta, const VectorLink& link); 

                Eigen::VectorXd get_beta() const;
                void set_beta(const Eigen::VectorXd& beta);

            private:
                Eigen::VectorXd _beta;
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
                        enum initialization_type {
                                                  OBSERVED,
                                                  UNIFORM,
                                                  GIVEN
                                                  }; 

                        Estimator();
                        ~Estimator();
                        Estimator(const Estimator& estimator);

                        virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator()(const UnivariateConditionalData& data, const bool& lazy=true) const; 

                        const typename D::link_type* get_link() const;
                        void set_link(const typename D::link_type& link);

                        const Eigen::VectorXd& get_beta_init() const;
                        void set_beta_init(const Eigen::VectorXd& beta_init);

                        const initialization_type& get_init() const;
                        void set_init(const initialization_type& init);

                        //const Eigen::MatrixXd& get_information_inverse() const;
                    
                    protected:
                        Eigen::VectorXd _beta_init;
                        initialization_type _init;
                        //CategoricalFisherInitialization* _initialization;

                        typename D::link_type * _link;

                        virtual std::vector< Eigen::VectorXd > y_init(const UnivariateConditionalData& data) const;
                        virtual std::vector< double > w_init(const UnivariateConditionalData& data) const;

                        virtual std::vector< Eigen::MatrixXd > Z_init(const UnivariateConditionalData& data) const = 0;
                        virtual Eigen::VectorXd beta_init(const UnivariateConditionalData& data) const = 0;

                        virtual D * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const = 0;

                        bool compatible(const Eigen::VectorXd& eta) const;
                }; 
                const double& get_loglikelihood() const;
                const std::vector< double >& get_loglikelihood_sequence() const;

            private:
                std::vector< Eigen::VectorXd > _beta;
                std::vector< Eigen::MatrixXd > _Z;
                std::vector< Eigen::VectorXd > _y;
                std::vector< double > _w;
                //Eigen::MatrixXd& information_inverse;
                mutable std::vector< double > _loglikelihood_sequence;
                mutable double _loglikelihood;
        };

        template< class D > class CompleteRegressionFisherEstimation : public CategoricalRegressionFisherEstimation < D >
        {
            public:
                CompleteRegressionFisherEstimation();
                CompleteRegressionFisherEstimation(D const * estimated, UnivariateConditionalData const * data);
                CompleteRegressionFisherEstimation(const CompleteRegressionFisherEstimation & estimation);

                virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

                class Estimator : public CategoricalRegressionFisherEstimation < D >::Estimator
                {
                    public:
                        typedef CompleteVectorPredictor predictor_type;
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual std::vector< Eigen::MatrixXd > Z_init(const UnivariateConditionalData& data) const;
                        virtual Eigen::VectorXd beta_init(const UnivariateConditionalData& data) const;

                        CompleteVectorPredictor build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const;
                }; 
        };



        template< class D > class ProportionalRegressionFisherEstimation : public CategoricalRegressionFisherEstimation < D >
        {
            public:
                ProportionalRegressionFisherEstimation();
                ProportionalRegressionFisherEstimation(D const * estimated, UnivariateConditionalData const * data);
                ProportionalRegressionFisherEstimation(const ProportionalRegressionFisherEstimation & estimation);

                virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

                class Estimator : public CategoricalRegressionFisherEstimation < D >::Estimator
                {
                    public:
                        typedef ProportionalVectorPredictor predictor_type;
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual std::vector< Eigen::MatrixXd > Z_init(const UnivariateConditionalData& data) const;
                        virtual Eigen::VectorXd beta_init(const UnivariateConditionalData& data) const;

                        ProportionalVectorPredictor build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const;
                }; 
        };


        template< class D > class ConstrainedRegressionFisherEstimation : public CategoricalRegressionFisherEstimation < D >
        {
            public:
                ConstrainedRegressionFisherEstimation();
                ConstrainedRegressionFisherEstimation(D const * estimated, UnivariateConditionalData const * data);
                ConstrainedRegressionFisherEstimation(const ConstrainedRegressionFisherEstimation & estimation);

                virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

                class Estimator : public CategoricalRegressionFisherEstimation < D >::Estimator
                { 
                    public:
                        typedef ConstrainedVectorPredictor predictor_type;
                        Estimator();
                        Estimator(const Estimator& estimator);   

                        const Eigen::MatrixXd& get_intercept_constraint() const;
                        void set_intercept_constraint(const Eigen::MatrixXd& intercept_constraint);

                        const Eigen::MatrixXd get_slope_constraint() const;
                        void set_slope_constraint(const Eigen::MatrixXd& slope_constraint);                  
            
                    protected:
                        mutable Eigen::MatrixXd _intercept_constraint;
                        mutable Eigen::MatrixXd _slope_constraint;

                        virtual std::vector< Eigen::MatrixXd > Z_init(const UnivariateConditionalData& data) const;
                        virtual Eigen::VectorXd beta_init(const UnivariateConditionalData& data) const;

                        ConstrainedVectorPredictor build_predictor(const MultivariateSampleSpace& explanatory_space, const Index& dimension) const;
                }; 

                // class PartialProportionalEstimator : public CategoricalUnivariateConditionalDistributionEstimation::Estimator
                // {
                //     public:
                //         typedef ConstrainedVectorPredictor predictor_type;
                //         PartialProportionalEstimator();
                //         PartialProportionalEstimator(const PartialProportionalEstimator& estimator);

                //         virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator()(const UnivariateConditionalData& data, const bool& lazy=true) const; 

                //         const Indices get_proportional() const;
                //         void set_proportional(const Indices& proportional);

                //     protected:
                //         Indices _proportional;                      
                // };
        };


        template< class  T > class NominalRegressionFisherEstimation : public T
        {
            public:
                NominalRegressionFisherEstimation();
                NominalRegressionFisherEstimation(NominalRegression const * estimated, UnivariateConditionalData const * data);
                NominalRegressionFisherEstimation(const NominalRegressionFisherEstimation & estimation);

                class Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, typename T::Estimator >
                { 
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual Eigen::VectorXd beta_init(const UnivariateConditionalData& data) const;

                        virtual NominalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;              
                }; 
        };

        template< class T > class OrdinalRegressionFisherEstimation : public T
        {
            public:
                OrdinalRegressionFisherEstimation();
                OrdinalRegressionFisherEstimation(OrdinalRegression const * estimated, UnivariateConditionalData const * data);
                OrdinalRegressionFisherEstimation(const OrdinalRegressionFisherEstimation & estimation);

                class Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, typename T::Estimator >
                { 
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:
                        virtual Eigen::VectorXd beta_init(const UnivariateConditionalData& data) const;

                        virtual OrdinalRegression * build_estimated(const Eigen::VectorXd& beta, const MultivariateSampleSpace& explanatory_space, const UnivariateSampleSpace& response_space) const;              
                }; 
        };

        template< class T > class CumulativeRegressionFisherEstimation : public OrdinalRegressionFisherEstimation < T >
        {
            public:
                CumulativeRegressionFisherEstimation();
                CumulativeRegressionFisherEstimation(OrdinalRegression const * estimated, UnivariateConditionalData const * data);
                CumulativeRegressionFisherEstimation(const CumulativeRegressionFisherEstimation & estimation);

                class Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, typename OrdinalRegressionFisherEstimation < T >::Estimator >
                { 
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
            
                    protected:   
                        bool compatible(const Eigen::VectorXd& eta) const;                 
                }; 
        };

        typedef NominalRegressionFisherEstimation< CompleteRegressionFisherEstimation < NominalRegression > > NominalCompleteRegressionFisherEstimation;
        typedef NominalRegressionFisherEstimation< CompleteRegressionFisherEstimation < NominalRegression > >::Estimator NominalCompleteFisherEstimator;

        class STATISKIT_GLM_API HierarchicalRegressionEstimation : public ActiveEstimation< HierarchicalRegression, CategoricalUnivariateConditionalDistributionEstimation >
        {
            public:
                typedef HierarchicalRegression estimated_type;
                
                HierarchicalRegressionEstimation();
                HierarchicalRegressionEstimation(HierarchicalRegression const * estimated, data_type const * data);            
                HierarchicalRegressionEstimation(const HierarchicalRegressionEstimation& estimation);
                virtual ~HierarchicalRegressionEstimation();

                virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > copy() const;

                const UnivariateConditionalDistributionEstimation* get_estimation(const std::string& value) const;

                class STATISKIT_GLM_API Estimator : public PolymorphicCopy< UnivariateConditionalDistributionEstimation::Estimator, Estimator, ActiveEstimation< HierarchicalRegression, UnivariateConditionalDistributionEstimation >::Estimator >
                {
                    public: 
                        Estimator();
                        Estimator(const Estimator& estimator);
                        virtual ~Estimator();
                        
                        virtual std::unique_ptr< UnivariateConditionalDistributionEstimation > operator() (const data_type& data, const bool& lazy=true) const;

                        const CategoricalUnivariateConditionalDistributionEstimation::Estimator* get_default_estimator() const;
                        void set_default_estimator(const CategoricalUnivariateConditionalDistributionEstimation::Estimator* estimator);

                        const CategoricalUnivariateConditionalDistributionEstimation::Estimator* get_estimator(const std::string& value) const;
                        void set_estimator(const std::string& value, const CategoricalUnivariateConditionalDistributionEstimation::Estimator* estimator);

                        //const data_type& partition(const std::string& value, const data_type& data);

                    protected:
                        CategoricalUnivariateConditionalDistributionEstimation::Estimator* _default_estimator;
                        std::map< std::string, CategoricalUnivariateConditionalDistributionEstimation::Estimator* > _estimators;
                };

            protected:
                std::map< std::string, UnivariateConditionalDistributionEstimation* > _estimations;
        };

        typedef NominalRegressionFisherEstimation< ProportionalRegressionFisherEstimation < NominalRegression > > NominalProportionalRegressionFisherEstimation ;
        typedef NominalRegressionFisherEstimation< ProportionalRegressionFisherEstimation < NominalRegression > >::Estimator NominalProportionalFisherEstimator;

        typedef NominalRegressionFisherEstimation< ConstrainedRegressionFisherEstimation < NominalRegression > > NominalConstrainedRegressionFisherEstimation ;
        typedef NominalRegressionFisherEstimation< ConstrainedRegressionFisherEstimation < NominalRegression > >::Estimator NominalConstrainedFisherEstimator;
//typedef NominalRegressionFisherEstimation < ConstrainedRegressionFisherEstimation < NominalRegression > >::PartialProportionalEstimator NominalPartialProportionalFisherEstimator; 

        typedef OrdinalRegressionFisherEstimation< CompleteRegressionFisherEstimation < OrdinalRegression > > OrdinalCompleteRegressionFisherEstimation ;
        typedef OrdinalRegressionFisherEstimation< CompleteRegressionFisherEstimation < OrdinalRegression > >::Estimator OrdinalCompleteFisherEstimator;

        typedef OrdinalRegressionFisherEstimation< ProportionalRegressionFisherEstimation < OrdinalRegression > > OrdinalProportionalRegressionFisherEstimation ;
        typedef OrdinalRegressionFisherEstimation< ProportionalRegressionFisherEstimation < OrdinalRegression > >::Estimator OrdinalProportionalFisherEstimator;

        typedef OrdinalRegressionFisherEstimation< ConstrainedRegressionFisherEstimation < OrdinalRegression > > OrdinalConstrainedRegressionFisherEstimation ;
        typedef OrdinalRegressionFisherEstimation< ConstrainedRegressionFisherEstimation < OrdinalRegression > >::Estimator OrdinalConstrainedFisherEstimator;       
//typedef OrdinalRegressionFisherEstimation < ConstrainedRegressionFisherEstimation < OrdinalRegression > >::PartialProportionalEstimator OrdinalPartialProportionalFisherEstimator;           

     
        typedef CumulativeRegressionFisherEstimation< CompleteRegressionFisherEstimation < OrdinalRegression > > CumulativeCompleteRegressionFisherEstimation ;
        typedef CumulativeRegressionFisherEstimation< CompleteRegressionFisherEstimation < OrdinalRegression > >::Estimator CumulativeCompleteFisherEstimator;

        typedef CumulativeRegressionFisherEstimation< ProportionalRegressionFisherEstimation < OrdinalRegression > > CumulativeProportionalRegressionFisherEstimation ;
        typedef CumulativeRegressionFisherEstimation< ProportionalRegressionFisherEstimation < OrdinalRegression > >::Estimator CumulativeProportionalFisherEstimator;

        typedef CumulativeRegressionFisherEstimation< ConstrainedRegressionFisherEstimation < OrdinalRegression > > CumulativeConstrainedRegressionFisherEstimation ;
        typedef CumulativeRegressionFisherEstimation< ConstrainedRegressionFisherEstimation < OrdinalRegression > >::Estimator CumulativeConstrainedFisherEstimator;

        // typedef SequentialRegressionFisherEstimation< CompleteRegressionFisherEstimation < OrdinalRegression > > SequentialCompleteRegressionFisherEstimation ;
        // typedef SequentialRegressionFisherEstimation< CompleteRegressionFisherEstimation < OrdinalRegression > >::Estimator SequentialCompleteFisherEstimator;

        // typedef SequentialRegressionFisherEstimation< ProportionalRegressionFisherEstimation < OrdinalRegression > > SequentialProportionalRegressionFisherEstimation ;
        // typedef SequentialRegressionFisherEstimation< ProportionalRegressionFisherEstimation < OrdinalRegression > >::Estimator SequentialProportionalFisherEstimator;

        // typedef SequentialRegressionFisherEstimation< ConstrainedRegressionFisherEstimation < OrdinalRegression > > SequentialConstrainedRegressionFisherEstimation ;
        // typedef SequentialRegressionFisherEstimation< ConstrainedRegressionFisherEstimation < OrdinalRegression > >::Estimator SequentialConstrainedFisherEstimator;

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