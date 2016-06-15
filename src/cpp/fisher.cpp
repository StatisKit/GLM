#include "fisher.h"

namespace statiskit
{
    namespace glm
    {
        double PoissonFisherEstimation::Estimator::sigma_square(const double& mu) const
        { return mu; }
    }
}
