#include "_glm.h"


namespace autowig {
}

void wrapper_112971b983735f79add1da6580205721(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > class_112971b983735f79add1da6580205721(module, "_LazyEstimation_112971b983735f79add1da6580205721", "");
    class_112971b983735f79add1da6580205721.def(pybind11::init<  >());
    class_112971b983735f79add1da6580205721.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const * >());
    class_112971b983735f79add1da6580205721.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}