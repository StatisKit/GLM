#include "_glm.h"


namespace autowig {
}

void wrapper_130b7caa305c5bf4b3fb27e37e82ebb1(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > class_130b7caa305c5bf4b3fb27e37e82ebb1(module, "_LazyEstimation_130b7caa305c5bf4b3fb27e37e82ebb1", "");
    class_130b7caa305c5bf4b3fb27e37e82ebb1.def(pybind11::init<  >());
    class_130b7caa305c5bf4b3fb27e37e82ebb1.def(pybind11::init< class ::statiskit::glm::BinaryRegression const * >());
    class_130b7caa305c5bf4b3fb27e37e82ebb1.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());

}