#include "_glm.h"


namespace autowig {
}

void wrapper_daab0afa78aa533c90458f7104e2c9a9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > class_daab0afa78aa533c90458f7104e2c9a9(module, "_LazyEstimation_daab0afa78aa533c90458f7104e2c9a9", "");
    class_daab0afa78aa533c90458f7104e2c9a9.def(pybind11::init<  >());
    class_daab0afa78aa533c90458f7104e2c9a9.def(pybind11::init< class ::statiskit::glm::PoissonRegression const * >());
    class_daab0afa78aa533c90458f7104e2c9a9.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}