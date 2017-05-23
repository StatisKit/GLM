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
                
                virtual const UnivariateDistribution* operator() (const MultivariateEvent& event);
                
                // virtual std::unique_ptr< UnivariateSampleSpace > get_response_space() const;
                
                virtual const MultivariateSampleSpace* get_explanatory_space() const;

                const typename L::predictor_type* get_predictor() const;

                const L* get_link() const;
                void set_link(const L& link);
                
            protected:
                L* _link;
                typename L::predictor_type* _predictor;
                typename L::family_type* _family;

                virtual void update(const typename L::expectation_type& value) = 0;
        };            
       
        template<class L>
        struct DiscreteGeneralizedLinearModel : GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, L >
        { 
            DiscreteGeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link);
            DiscreteGeneralizedLinearModel(const DiscreteGeneralizedLinearModel< L >& glm);
            virtual ~DiscreteGeneralizedLinearModel();

        	virtual unsigned int get_nb_parameters() const;
        };
        
        class STATISKIT_GLM_API PoissonRegression : public DiscreteGeneralizedLinearModel< PoissonLink >
        {
            public:
                PoissonRegression(const ScalarPredictor& predictor, const PoissonLink& link);
                
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;
                
            private:
                virtual void update(const double& value);                
        };          

        class STATISKIT_GLM_API BinomialRegression : public DiscreteGeneralizedLinearModel< BinomialLink >
        {
            public:
                BinomialRegression(const unsigned int& kappa, const ScalarPredictor& predictor, const BinomialLink& link);
                
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;     
                           
            private:
                virtual void update(const double& value);                
        };
      
        class STATISKIT_GLM_API NegativeBinomialRegression : public DiscreteGeneralizedLinearModel< NegativeBinomialLink >
        {
            public:
                NegativeBinomialRegression(const double& kappa, const ScalarPredictor& predictor, const NegativeBinomialLink& link);
                
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;
                                
            private:
                virtual void update(const double& value);                
        };
        
        template<class L>
        struct ContinuousGeneralizedLinearModel : GeneralizedLinearModel< ContinuousUnivariateConditionalDistribution, L >
        { 
        	using GeneralizedLinearModel< ContinuousUnivariateConditionalDistribution, L >::GeneralizedLinearModel;
        	
        	virtual unsigned int get_nb_parameters() const;
        };
        
        template<class L>
        struct CategoricalGeneralizedLinearModel : GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, L >
        { 
        	using GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, L >::GeneralizedLinearModel;
        	
        	virtual unsigned int get_nb_parameters() const;
        };             
        
        class STATISKIT_GLM_API NominalRegression : public CategoricalGeneralizedLinearModel< NominalLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                NominalRegression(const std::set< std::string >& values, const VectorPredictor& predictor, const NominalLink& link);
                 
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;    
                           
            private:
                virtual void update(const Eigen::VectorXd& values);                
        };
        
        class STATISKIT_GLM_API OrdinalRegression : public CategoricalGeneralizedLinearModel< OrdinalLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                OrdinalRegression(const std::vector< std::string >& values, const VectorPredictor& predictor, const OrdinalLink& link);
                  
                virtual std::unique_ptr< UnivariateConditionalDistribution > copy() const;   
                             
            private:
                virtual void update(const Eigen::VectorXd& values);                
        };                                               
    }
}

#include "regression.hpp"
#endif

