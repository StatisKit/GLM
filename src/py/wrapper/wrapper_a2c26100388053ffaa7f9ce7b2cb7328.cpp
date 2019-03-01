#include "_glm.h"


namespace autowig {
}

void wrapper_a2c26100388053ffaa7f9ce7b2cb7328(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > class_a2c26100388053ffaa7f9ce7b2cb7328(module, "_LazyEstimation_a2c26100388053ffaa7f9ce7b2cb7328", "");
    class_a2c26100388053ffaa7f9ce7b2cb7328.def(pybind11::init<  >());
    class_a2c26100388053ffaa7f9ce7b2cb7328.def(pybind11::init< class ::statiskit::glm::BinomialRegression const * >());
    class_a2c26100388053ffaa7f9ce7b2cb7328.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}