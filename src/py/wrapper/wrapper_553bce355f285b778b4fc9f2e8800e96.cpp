#include "_glm.h"


namespace autowig {
}

void wrapper_553bce355f285b778b4fc9f2e8800e96(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::PoissonRegressionFisherEstimation, autowig::HolderType< struct ::statiskit::glm::PoissonRegressionFisherEstimation >::Type, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_553bce355f285b778b4fc9f2e8800e96(module, "PoissonRegressionFisherEstimation", "");
    class_553bce355f285b778b4fc9f2e8800e96.def(pybind11::init< class ::statiskit::glm::PoissonRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_553bce355f285b778b4fc9f2e8800e96.def(pybind11::init< struct ::statiskit::glm::PoissonRegressionFisherEstimation const & >());

}