#include <statiskit/core/base.h>
#include <statiskit/glm/predictor.h>
#include <statiskit/glm/link.h>

#ifndef STATISKIT_GLM_GLM_H
#define STATISKIT_GLM_GLM_H

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
                
                GeneralizedLinearModel(const typename L::predictor_type& predictor, const L& link);
                GeneralizedLinearModel(const GeneralizedLinearModel<T, L>& glm);
                virtual ~GeneralizedLinearModel();
                
                virtual const UnivariateDistribution* operator() (const MultivariateEvent& event);
                
                virtual std::unique_ptr< UnivariateSampleSpace > get_response_space() const;
                
                virtual const MultivariateSampleSpace* get_explanatory_space() const;

                virtual unsigned int get_nb_parameters() const;

                const typename L::predictor_type* get_predictor() const;

                const L* get_link() const;
                void set_link(const L& link);
                
            protected:
                L* _link;
                typename L::predictor_type* _predictor;
                typename L::family_type* _family;

                virtual void update(const typename L::expectation_type& value) = 0;
        };            
       
        class PoissonRegression : public GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, PoissonLink >
        {
            public:
                PoissonRegression(const ScalarPredictor& predictor, const PoissonLink& link);
                
            private:
                virtual void update(const double& value);                
        };          

        class BinomialRegression : public GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, BinomialLink >
        {
            public:
                BinomialRegression(const unsigned int& kappa, const ScalarPredictor& predictor, const BinomialLink& link);
                
            private:
                virtual void update(const double& value);                
        };
      
        class NegativeBinomialRegression : public GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, NegativeBinomialLink >
        {
            public:
                NegativeBinomialRegression(const unsigned int& kappa, const ScalarPredictor& predictor, const NegativeBinomialLink& link);
                
            private:
                virtual void update(const double& value);                
        };
        
        class NominalRegression : public GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, NominalLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                NominalRegression(const std::set< event_type::value_type >& values, const VectorPredictor& predictor, const NominalLink& link);
                
            private:
                virtual void update(const std::vector<double>& values);                
        };
        
        class ReferenceRegression : public GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, ReferenceLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                ReferenceRegression(const std::set< event_type::value_type >& values, const VectorPredictor& predictor, const ReferenceLink& link);
                
            private:
                virtual void update(const std::vector<double>& values);                
        };
        
        class OrdinalRegression : public GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, OrdinalLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                OrdinalRegression(const std::set< event_type::value_type >& values, const std::vector< size_t >& rank, const VectorPredictor& predictor, const OrdinalLink& link);
                
            private:
                virtual void update(const std::vector<double>& values);                
        };        
        
        class AdjacentRegression : public GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, AdjacentLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                AdjacentRegression(const std::set< event_type::value_type >& values, const std::vector< size_t >& rank, const VectorPredictor& predictor, const AdjacentLink& link);
                
            private:
                virtual void update(const std::vector<double>& values);                
        }; 
        
        class CumulativeRegression : public GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, CumulativeLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                CumulativeRegression(const std::set< event_type::value_type >& values, const std::vector< size_t >& rank, const VectorPredictor& predictor, const CumulativeLink& link);
                
            private:
                virtual void update(const std::vector<double>& values);                
        };
        
        class SequentialRegression : public GeneralizedLinearModel< CategoricalUnivariateConditionalDistribution, SequentialLink >
        {
        	typedef CategoricalEvent event_type;
        	
            public:
                SequentialRegression(const std::set< event_type::value_type >& values, const std::vector< size_t >& rank, const VectorPredictor& predictor, const SequentialLink& link);
                
            private:
                virtual void update(const std::vector<double>& values);                
        };                                         
    }
}

#include "glm.hpp"
#endif

