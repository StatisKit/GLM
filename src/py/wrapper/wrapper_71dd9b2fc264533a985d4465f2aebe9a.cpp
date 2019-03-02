#include "_glm.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_1e4e093820745364b68cd96258121727)()const= &::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_71dd9b2fc264533a985d4465f2aebe9a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_71dd9b2fc264533a985d4465f2aebe9a(module, "_ActiveEstimation_71dd9b2fc264533a985d4465f2aebe9a", "");
    class_71dd9b2fc264533a985d4465f2aebe9a.def(pybind11::init<  >());
    class_71dd9b2fc264533a985d4465f2aebe9a.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_71dd9b2fc264533a985d4465f2aebe9a.def(pybind11::init< class ::statiskit::glm::BinaryRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_71dd9b2fc264533a985d4465f2aebe9a.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_71dd9b2fc264533a985d4465f2aebe9a.def("get_data", method_pointer_1e4e093820745364b68cd96258121727, pybind11::return_value_policy::reference_internal, "");

}