#include "glm.h"

namespace statiskit
{
    namespace glm
    {
        double BinomialLink::inverse(const double& value) const
        { return 1. / (1 + exp(-value)); }

        std::unique_ptr< BinomialLink > BinomialLink::copy() const
        { return std::make_unique< BinomialLink >(*this); }
        
        BinomialRegression::BinomialRegression(const unsigned int& kappa, const ScalarPredictor& predictor, const BinomialLink& link) :  GeneralizedLinearModel< DiscreteUnivariateConditionalDistribution, BinomialLink >(predictor, link)
        { _family = new BinomialDistribution(kappa, std::numeric_limits< double >::quiet_NaN()); }

        void BinomialRegression::update(const double& value)
        { _family->set_pi(value); }
    }
}
