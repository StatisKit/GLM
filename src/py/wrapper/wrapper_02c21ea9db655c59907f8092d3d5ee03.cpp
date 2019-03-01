#include "_glm.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::glm::OrdinalRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_16fa0ae97d815d3fbba5801f732cc736)()const= &::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_02c21ea9db655c59907f8092d3d5ee03(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_02c21ea9db655c59907f8092d3d5ee03(module, "_ActiveEstimation_02c21ea9db655c59907f8092d3d5ee03", "");
    class_02c21ea9db655c59907f8092d3d5ee03.def(pybind11::init<  >());
    class_02c21ea9db655c59907f8092d3d5ee03.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_02c21ea9db655c59907f8092d3d5ee03.def(pybind11::init< class ::statiskit::glm::OrdinalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_02c21ea9db655c59907f8092d3d5ee03.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_02c21ea9db655c59907f8092d3d5ee03.def("get_data", method_pointer_16fa0ae97d815d3fbba5801f732cc736, pybind11::return_value_policy::reference_internal, "");

}