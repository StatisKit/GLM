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
                
                virtual const typename T::response_type* operator() (const MultivariateEvent& event) const;
                
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
            CategoricalGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link);
            CategoricalGeneralizedLinearModel(const CategoricalGeneralizedLinearModel< L >& glm);
            virtual ~CategoricalGeneralizedLinearModel();
                    	
        	virtual unsigned int get_nb_parameters() const;
        };             
        
        class STATISKIT_GLM_API NominalRegression : public CategoricalGeneralizedLinearModel< NominalLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                NominalRegression(const std::set< std::string >& values, const VectorPredictor& predictor, const NominalLink& link);
                 
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;    
                           
            private:
                virtual void update(const Eigen::VectorXd& values) const;                
        };
        
        class STATISKIT_GLM_API OrdinalRegression : public CategoricalGeneralizedLinearModel< OrdinalLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                OrdinalRegression(const std::vector< std::string >& values, const VectorPredictor& predictor, const OrdinalLink& link);
                  
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;   
                             
            private:
                virtual void update(const Eigen::VectorXd& values) const;                
        };                                               

        template<class L>
            class SplittingRegressionI : public GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >
            { 
                public:
                    SplittingRegressionI(const DiscreteUnivariateConditionalDistribution& sum, const typename L::predictor_type& predictor, const L& link);
                    SplittingRegressionI(const SplittingRegressionI< L >& glm);
                    virtual ~SplittingRegressionI();

                    virtual const MultivariateDistribution* operator() (const MultivariateEvent& event) const;

                    virtual Index get_nb_components() const;

                    virtual unsigned int get_nb_parameters() const;

                    const DiscreteUnivariateConditionalDistribution* get_sum() const;
                    void set_sum(const DiscreteUnivariateConditionalDistribution& sum);

                protected:
                    DiscreteUnivariateConditionalDistribution* _sum;
            };

        template<class L>
            class SplittingRegressionII : public GeneralizedLinearModel< DiscreteMultivariateConditionalDistribution, L >
            { 
                public:
                    SplittingRegressionII(const DiscreteUnivariateDistribution& sum, const typename L::predictor_type& predictor, const L& link);
                    SplittingRegressionII(const SplittingRegressionII< L >& glm);
                    virtual ~SplittingRegressionII();

                    virtual Index get_nb_components() const;

                    virtual unsigned int get_nb_parameters() const;

                    const DiscreteUnivariateDistribution* get_sum() const;
                    void set_sum(const DiscreteUnivariateDistribution& sum);

                protected:
                    DiscreteUnivariateDistribution* _sum;
            };

        template<class F>
            class SplittingRegressionIII : public DiscreteMultivariateConditionalDistribution
            { 
                public:
                    SplittingRegressionIII(const DiscreteUnivariateConditionalDistribution& sum, const F& family);
                    SplittingRegressionIII(const SplittingRegressionIII< F >& glm);
                    virtual ~SplittingRegressionIII();

                    virtual Index get_nb_components() const;

                    virtual const MultivariateSampleSpace* get_explanatory_space() const;

                    virtual const MultivariateDistribution* operator() (const MultivariateEvent& event) const;

                    const DiscreteUnivariateConditionalDistribution* get_sum() const;
                    void set_sum(const DiscreteUnivariateConditionalDistribution& sum);

                protected:
                    DiscreteUnivariateConditionalDistribution* _sum;
                    F* _family;
            };

        class STATISKIT_GLM_API MultinomialSplittingRegressionI : public SplittingRegressionI< MultinomialSplittingLink >
        {
            public:
                MultinomialSplittingRegressionI(const DiscreteUnivariateConditionalDistribution& sum, const VectorPredictor& predictor, const MultinomialSplittingLink& link);
                MultinomialSplittingRegressionI(const MultinomialSplittingRegressionI& splitting);

                virtual std::unique_ptr< MultivariateConditionalDistribution > copy() const;
                
            private:
                virtual void update(const Eigen::VectorXd& values) const;  
        };

        class STATISKIT_GLM_API MultinomialSplittingRegressionII : public SplittingRegressionII< MultinomialSplittingLink >
        {
            public:
                MultinomialSplittingRegressionII(const DiscreteUnivariateDistribution& sum, const VectorPredictor& predictor, const MultinomialSplittingLink& link);
                MultinomialSplittingRegressionII(const MultinomialSplittingRegressionII& splitting);

                virtual std::unique_ptr< MultivariateConditionalDistribution > copy() const;
                
            private:
                virtual void update(const Eigen::VectorXd& values) const;  
        };

        class STATISKIT_GLM_API MultinomialSplittingRegressionIII : public SplittingRegressionIII< MultinomialSplittingDistribution >
        {
            public:
                MultinomialSplittingRegressionIII(const DiscreteUnivariateConditionalDistribution& sum, const MultinomialSplittingDistribution& family);
                MultinomialSplittingRegressionIII(const MultinomialSplittingRegressionIII& splitting);

                virtual unsigned int get_nb_parameters() const;

                const Eigen::VectorXd& get_pi() const;
                void set_pi(const Eigen::VectorXd& pi);

                virtual std::unique_ptr< MultivariateConditionalDistribution > copy() const;
                
            private:
                virtual void update(const Eigen::VectorXd& values) const;  
        };
    }
}

#include "regression.hpp"
#endif

