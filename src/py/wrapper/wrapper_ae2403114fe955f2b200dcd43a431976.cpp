#include "_glm.h"


namespace autowig {
}

void wrapper_ae2403114fe955f2b200dcd43a431976(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > class_ae2403114fe955f2b200dcd43a431976(module, "_LazyEstimation_ae2403114fe955f2b200dcd43a431976", "");
    class_ae2403114fe955f2b200dcd43a431976.def(pybind11::init<  >());
    class_ae2403114fe955f2b200dcd43a431976.def(pybind11::init< class ::statiskit::glm::HierarchicalRegression const * >());
    class_ae2403114fe955f2b200dcd43a431976.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());

}