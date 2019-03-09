#include <statiskit/core/base.h>
#include <statiskit/glm/predictor.h>
#include <statiskit/glm/link.h>

#ifndef STATISKIT_GLM_REGRESSION_H
#define STATISKIT_GLM_REGRESSION_H

#include <statiskit/core/distribution.h>

namespace statiskit
{
    namespace glm
    {
        template<class T, class L>
        class GeneralizedLinearModel : public T
        {
            public:
                typedef T base_type;
                typedef L link_type;
                
                GeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link);
                GeneralizedLinearModel(const GeneralizedLinearModel<T, L>& glm);
                virtual ~GeneralizedLinearModel();
                
                virtual const UnivariateDistribution* operator() (const MultivariateEvent& event) const;
                
                // virtual std::unique_ptr< UnivariateSampleSpace > get_response_space() const;
                
                virtual const MultivariateSampleSpace* get_explanatory_space() const;

                typename L::predictor_type* get_predictor() const;
                void set_predictor(const typename L::predictor_type& predictor);

                L* get_link() const;
                void set_link(const L& link);
                
            protected:
                L* _link;
                typename L::predictor_type* _predictor;
                typename L::family_type* _family;

                virtual void update(const typename L::expectation_type& value) const = 0;
        };
       
        template<class L>
        struct UnivariateDiscreteGeneralizedLinearModel : GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, L >
        { 
            UnivariateDiscreteGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link);
            UnivariateDiscreteGeneralizedLinearModel(const UnivariateDiscreteGeneralizedLinearModel< L >& glm);
            virtual ~UnivariateDiscreteGeneralizedLinearModel();

        	virtual unsigned int get_nb_parameters() const;
        };
            
        class STATISKIT_GLM_API PoissonRegression : public UnivariateDiscreteGeneralizedLinearModel< PoissonLink >
        {
            public:
                PoissonRegression(const ScalarPredictor& predictor, const PoissonLink& link);
                
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;
                
            private:
                virtual void update(const double& value) const;                
        };          

        class STATISKIT_GLM_API BinomialRegression : public UnivariateDiscreteGeneralizedLinearModel< BinomialLink >
        {
            public:
                BinomialRegression(const unsigned int& kappa, const ScalarPredictor& predictor, const BinomialLink& link);
                           
                unsigned int get_kappa() const;
                void set_kappa(const unsigned int& kappa);

                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;     

            private:
                virtual void update(const double& value) const;                
        };
      
        class STATISKIT_GLM_API NegativeBinomialRegression : public UnivariateDiscreteGeneralizedLinearModel< NegativeBinomialLink >
        {
            public:
                NegativeBinomialRegression(const double& kappa, const ScalarPredictor& predictor, const NegativeBinomialLink& link);
                           
                double get_kappa() const;
                void set_kappa(const double& kappa);

                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;
                                
            private:
                virtual void update(const double& value) const;                
        };
        
        template<class L>
        struct UnivariateContinuousGeneralizedLinearModel : GeneralizedLinearModel< ContinuousUnivariateConditionalDistribution, L >
        { 
            UnivariateContinuousGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link);
            UnivariateContinuousGeneralizedLinearModel(const UnivariateContinuousGeneralizedLinearModel< L >& glm);
            virtual ~UnivariateContinuousGeneralizedLinearModel();

        	virtual unsigned int get_nb_parameters() const;
        };
        
        template<class L>
        struct CategoricalGeneralizedLinearModel : GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, L >
        {
            //typedef CategoricalEvent event_type; 

            CategoricalGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link);
            CategoricalGeneralizedLinearModel(const CategoricalGeneralizedLinearModel< L >& glm);
            virtual ~CategoricalGeneralizedLinearModel();
                    	
        	virtual unsigned int get_nb_parameters() const;
        };

        class STATISKIT_GLM_API BinaryRegression : public CategoricalGeneralizedLinearModel< BinaryLink >
        {
            public:
                BinaryRegression(const std::string& value, const std::string reference_value, const ScalarPredictor& predictor, const BinaryLink& link);
                 
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;    
                           
            private:
                virtual void update(const double& value) const;
        };       
        
        class STATISKIT_GLM_API NominalRegression : public CategoricalGeneralizedLinearModel< NominalLink >
        {
        	//typedef CategoricalEvent event_type;
        	
            public:
                NominalRegression(const NominalSampleSpace& nss, const VectorPredictor& predictor, const NominalLink& link);

                // std::string get_reference() const;
                void set_reference(const std::string& value);
                 
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;    
                           
            private:
                std::string _reference;
                virtual void update(const Eigen::VectorXd& values) const;                
        };
        
        class STATISKIT_GLM_API OrdinalRegression : public CategoricalGeneralizedLinearModel< OrdinalLink >
        {
        	//typedef CategoricalEvent event_type;
        	
            public:
                OrdinalRegression(const OrdinalSampleSpace& oss, const VectorPredictor& predictor, const OrdinalLink& link);
                  
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;   
                             
            private:
                virtual void update(const Eigen::VectorXd& values) const;                
        };                                               


        class STATISKIT_GLM_API HierarchicalRegression : public CategoricalUnivariateConditionalDistribution
        {
            //typedef CategoricalEvent event_type;
            typedef statiskit::HierarchicalDistribution response_type;
            
            public:
                HierarchicalRegression(const HierarchicalSampleSpace& hss, const MultivariateSampleSpace& explanatory_space);
                HierarchicalRegression(const HierarchicalRegression& hr);
                virtual ~HierarchicalRegression();

                /// \Brief This is an operation of conditioning that returns the conditional distribution \f$ Y \vert \boldsymbol{X} = \boldsymbol{x} \f$.
                virtual const UnivariateDistribution* operator() (const MultivariateEvent& event) const;

                /// \Brief Get the sample space of the explanatory components \f$ \boldsymbol{X} \f$.
                virtual const MultivariateSampleSpace* get_explanatory_space() const;

                /// \Brief Get the number of parameters of the \f$ Y \vert \boldsymbol{X} \f$.
                virtual unsigned int get_nb_parameters() const;

                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;      

                const CategoricalUnivariateConditionalDistribution* get_regression(const std::string& value) const;
                void set_regression(const std::string& value, const CategoricalUnivariateConditionalDistribution& regression);           
                           
                class STATISKIT_GLM_API HierarchicalDistribution : public statiskit::HierarchicalDistribution
                {
                    public:
                        typedef std::map< std::string, CategoricalUnivariateDistribution* >::iterator iterator;

                        HierarchicalDistribution(const HierarchicalSampleSpace& hss);
                        HierarchicalDistribution(const HierarchicalDistribution& hd);
                        virtual ~HierarchicalDistribution();

                        iterator begin();
                        iterator end();
                        unsigned int index(const std::string& value) const;
                };

            protected:
                HierarchicalDistribution* _hierarchical_distribution;
                std::vector< CategoricalUnivariateConditionalDistribution* > _regressions;        
                MultivariateSampleSpace* _explanatory_space;
        };

        /* struct STATISKIT_GLM_API SplittingOperator
        {
            typedef statiskit::SplittingOperator response_type;

            virtual Index get_nb_components() const = 0;

            virtual unsigned int get_nb_parameters() const = 0;

            virtual const statiskit::SplittingOperator* operator() (const MultivariateEvent& event) const = 0;
                            
            virtual const MultivariateSampleSpace* get_explanatory_space() const = 0; 

            virtual std::unique_ptr< SplittingOperator > copy() const = 0;           
        }; */

        template<class T, class L>
        struct MultivariateGeneralizedLinearModel : GeneralizedLinearModel< T, L >
        {
            MultivariateGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link);
            MultivariateGeneralizedLinearModel(const MultivariateGeneralizedLinearModel<T, L>& glm);

            virtual Index get_nb_components() const = 0;
        };

        /* class STATISKIT_GLM_API MultinomialSplittingOperator : public MultivariateGeneralizedLinearModel< SplittingOperator, MultinomialSplittingLink >
        {
            public:
                MultinomialSplittingOperator(const VectorPredictor& predictor, const MultinomialSplittingLink& link);
                MultinomialSplittingOperator(const MultinomialSplittingOperator& splitting);
                virtual ~MultinomialSplittingOperator();

            protected:
                virtual void update(const Eigen::VectorXd& value) const;
        };

        class STATISKIT_GLM_API DirichletMultinomialSplittingOperator : public MultivariateGeneralizedLinearModel< SplittingOperator, DirichletMultinomialSplittingLink >
        {
            public:
                DirichletMultinomialSplittingOperator(const VectorPredictor& predictor, const DirichletMultinomialSplittingLink& link);
                DirichletMultinomialSplittingOperator(const DirichletMultinomialSplittingOperator& splitting);
                virtual ~DirichletMultinomialSplittingOperator();

            protected:
                virtual void update(const Eigen::VectorXd& value) const;
        };

        class STATISKIT_GLM_API SplittingRegressionI : public DiscreteMultivariateConditionalDistribution
        {
            public:
                SplittingRegressionI(const DiscreteUnivariateConditionalDistribution& sum, const SplittingOperator& splitting);
                SplittingRegressionI(const SplittingRegressionI& splitting);
                virtual ~SplittingRegressionI();

                virtual const MultivariateDistribution* operator() (const MultivariateEvent& event) const;

                virtual Index get_nb_components() const;

                virtual const MultivariateSampleSpace* get_explanatory_space() const;

                virtual unsigned int get_nb_parameters() const;

                const DiscreteUnivariateConditionalDistribution* get_sum() const;
                void set_sum(const DiscreteUnivariateConditionalDistribution& sum);

                const SplittingOperator* get_splitting() const;
                void set_splitting(const SplittingOperator& splitting);

            protected:
                struct STATISKIT_GLM_API SplittingDistribution : public statiskit::SplittingDistribution
                {
                    SplittingDistribution();
                    virtual ~SplittingDistribution();

                    void set_sum(DiscreteUnivariateDistribution* sum);

                    void set_splitting(statiskit::SplittingOperator* splitting);
                };           

                DiscreteUnivariateConditionalDistribution* _sum;
                SplittingOperator* _splitting; 
                SplittingDistribution* _family;
        };

        // template<class L>
        //     class SplittingRegressionI : public GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >
        //     { 
        //         public:
        //             SplittingRegressionI(const DiscreteUnivariateConditionalDistribution& sum, const typename L::predictor_type& predictor, const L& link);
        //             SplittingRegressionI(const SplittingRegressionI< L >& glm);
        //             virtual ~SplittingRegressionI();

        //             virtual const MultivariateDistribution* operator() (const MultivariateEvent& event) const;

        //             virtual Index get_nb_components() const;

        //             virtual unsigned int get_nb_parameters() const;

        //             const DiscreteUnivariateConditionalDistribution* get_sum() const;
        //             void set_sum(const DiscreteUnivariateConditionalDistribution& sum);

        //         protected:
        //             DiscreteUnivariateConditionalDistribution* _sum;
        //     };

        // template<class L>
        //     class SplittingRegressionII : public GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >
        //     { 
        //         public:
        //             SplittingRegressionII(const DiscreteUnivariateDistribution& sum, const typename L::predictor_type& predictor, const L& link);
        //             SplittingRegressionII(const SplittingRegressionII< L >& glm);
        //             virtual ~SplittingRegressionII();

        //             virtual Index get_nb_components() const;

        //             virtual unsigned int get_nb_parameters() const;

        //             const DiscreteUnivariateDistribution* get_sum() const;
        //             void set_sum(const DiscreteUnivariateDistribution& sum);

        //         protected:
        //             DiscreteUnivariateDistribution* _sum;
        //     };

        // template<class F>
        //     class SplittingRegressionIII : public DiscreteMultivariateConditionalDistribution
        //     { 
        //         public:
        //             SplittingRegressionIII(const DiscreteUnivariateConditionalDistribution& sum, const F& family);
        //             SplittingRegressionIII(const SplittingRegressionIII< F >& glm);
        //             virtual ~SplittingRegressionIII();

        //             virtual Index get_nb_components() const;

        //             virtual const MultivariateSampleSpace* get_explanatory_space() const;

        //             virtual const MultivariateDistribution* operator() (const MultivariateEvent& event) const;

        //             const DiscreteUnivariateConditionalDistribution* get_sum() const;
        //             void set_sum(const DiscreteUnivariateConditionalDistribution& sum);

        //         protected:
        //             DiscreteUnivariateConditionalDistribution* _sum;
        //             F* _family;
        //     };

        // class STATISKIT_GLM_API MultinomialSplittingRegressionI : public SplittingRegressionI< MultinomialSplittingLink >
        // {
        //     public:
        //         MultinomialSplittingRegressionI(const DiscreteUnivariateConditionalDistribution& sum, const VectorPredictor& predictor, const MultinomialSplittingLink& link);
        //         MultinomialSplittingRegressionI(const MultinomialSplittingRegressionI& splitting);

        //         virtual std::unique_ptr< MultivariateConditionalDistribution > copy() const;
                
        //     private:
        //         virtual void update(const Eigen::VectorXd& values) const;  
        // };

        // class STATISKIT_GLM_API MultinomialSplittingRegressionII : public SplittingRegressionII< MultinomialSplittingLink >
        // {
        //     public:
        //         MultinomialSplittingRegressionII(const DiscreteUnivariateDistribution& sum, const VectorPredictor& predictor, const MultinomialSplittingLink& link);
        //         MultinomialSplittingRegressionII(const MultinomialSplittingRegressionII& splitting);

        //         virtual std::unique_ptr< MultivariateConditionalDistribution > copy() const;
                
        //     private:
        //         virtual void update(const Eigen::VectorXd& values) const;  
        // };

        // class STATISKIT_GLM_API MultinomialSplittingRegressionIII : public SplittingRegressionIII< MultinomialSplittingDistribution >
        // {
        //     public:
        //         MultinomialSplittingRegressionIII(const DiscreteUnivariateConditionalDistribution& sum, const MultinomialSplittingDistribution& family);
        //         MultinomialSplittingRegressionIII(const MultinomialSplittingRegressionIII& splitting);

        //         virtual unsigned int get_nb_parameters() const;

        //         const Eigen::VectorXd& get_pi() const;
        //         void set_pi(const Eigen::VectorXd& pi);

        //         virtual std::unique_ptr< MultivariateConditionalDistribution > copy() const;
                
        //     private:
        //         virtual void update(const Eigen::VectorXd& values) const;  
        // }; */
    }
}

#include "regression.hpp"
#endif

