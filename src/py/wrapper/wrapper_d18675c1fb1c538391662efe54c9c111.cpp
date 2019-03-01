#include "_glm.h"


namespace autowig {
}

void wrapper_d18675c1fb1c538391662efe54c9c111(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_d18675c1fb1c538391662efe54c9c111(module, "_QuantitativeScalarRegressionFisherEstimation_d18675c1fb1c538391662efe54c9c111", "");
    class_d18675c1fb1c538391662efe54c9c111.def(pybind11::init<  >());
    class_d18675c1fb1c538391662efe54c9c111.def(pybind11::init< class ::statiskit::glm::PoissonRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_d18675c1fb1c538391662efe54c9c111.def(pybind11::init< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}