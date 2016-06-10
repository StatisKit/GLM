#include <statiskit/core/base.h>
#include <statiskit/glm/predictor.h>

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

                virtual void update(const double& value) = 0;
        };

        struct UnivariateLink
        {
            typedef ScalarPredictor predictor_type;

            virtual double inverse(const double& value) const = 0;

        };

        struct BinomialLink : UnivariateLink
        {
            typedef BinomialDistribution family_type;

            virtual double inverse(const double& value) const;

            virtual std::unique_ptr< BinomialLink > copy() const;
        };

        class BinomialRegression : public GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, BinomialLink >
        {
            public:
                BinomialRegression(const unsigned int& kappa, const ScalarPredictor& predictor, const BinomialLink& link);
            private:
                virtual void update(const double& value);                
        };
    }
}

#include "glm.hpp"
#endif

