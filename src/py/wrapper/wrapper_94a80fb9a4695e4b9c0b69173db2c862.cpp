#include "_glm.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_e5a22e23fc685a908537620f000c4069)()const= &::statiskit::ActiveEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_94a80fb9a4695e4b9c0b69173db2c862(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_94a80fb9a4695e4b9c0b69173db2c862(module, "_ActiveEstimation_94a80fb9a4695e4b9c0b69173db2c862", "");
    class_94a80fb9a4695e4b9c0b69173db2c862.def(pybind11::init<  >());
    class_94a80fb9a4695e4b9c0b69173db2c862.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_94a80fb9a4695e4b9c0b69173db2c862.def(pybind11::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_94a80fb9a4695e4b9c0b69173db2c862.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_94a80fb9a4695e4b9c0b69173db2c862.def("get_data", method_pointer_e5a22e23fc685a908537620f000c4069, pybind11::return_value_policy::reference_internal, "");

}