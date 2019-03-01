#include "_glm.h"


namespace autowig {
}

void wrapper_0ca78b30b3c85b0bb530830d002cb183(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > class_0ca78b30b3c85b0bb530830d002cb183(module, "_LazyEstimation_0ca78b30b3c85b0bb530830d002cb183", "");
    class_0ca78b30b3c85b0bb530830d002cb183.def(pybind11::init<  >());
    class_0ca78b30b3c85b0bb530830d002cb183.def(pybind11::init< class ::statiskit::glm::NominalRegression const * >());
    class_0ca78b30b3c85b0bb530830d002cb183.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());

}