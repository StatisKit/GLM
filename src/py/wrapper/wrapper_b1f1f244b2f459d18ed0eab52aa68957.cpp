#include "_glm.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< unsigned int, ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_296b5f5cc9745d6ca048715be594c1e5)()const= &::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::size;

namespace autowig {
}

void wrapper_b1f1f244b2f459d18ed0eab52aa68957(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_b1f1f244b2f459d18ed0eab52aa68957(module, "_OptimizationEstimationImpl_b1f1f244b2f459d18ed0eab52aa68957", "");
    class_b1f1f244b2f459d18ed0eab52aa68957.def(pybind11::init<  >());
    class_b1f1f244b2f459d18ed0eab52aa68957.def(pybind11::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_b1f1f244b2f459d18ed0eab52aa68957.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_b1f1f244b2f459d18ed0eab52aa68957.def("__len__", method_pointer_296b5f5cc9745d6ca048715be594c1e5, "");

}