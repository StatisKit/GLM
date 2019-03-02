#include "_glm.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::glm::HierarchicalRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_a4fe2445de3e56f8bade09fd1ad331ee)()const= &::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_f7aeef9c4cba52dc88b65cef7a2cfc55(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_f7aeef9c4cba52dc88b65cef7a2cfc55(module, "_ActiveEstimation_f7aeef9c4cba52dc88b65cef7a2cfc55", "");
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def(pybind11::init<  >());
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def(pybind11::init< class ::statiskit::glm::HierarchicalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def("get_data", method_pointer_a4fe2445de3e56f8bade09fd1ad331ee, pybind11::return_value_policy::reference_internal, "");

}