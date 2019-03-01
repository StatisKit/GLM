#include "_glm.h"


namespace autowig {
}

void wrapper_0073cd13259d570d9368e9028bf6a6a4(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > class_0073cd13259d570d9368e9028bf6a6a4(module, "_LazyEstimation_0073cd13259d570d9368e9028bf6a6a4", "");
    class_0073cd13259d570d9368e9028bf6a6a4.def(pybind11::init<  >());
    class_0073cd13259d570d9368e9028bf6a6a4.def(pybind11::init< class ::statiskit::glm::OrdinalRegression const * >());
    class_0073cd13259d570d9368e9028bf6a6a4.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());

}