#include "_glm.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  (::statiskit::glm::BinomialRegressionSteepestAscentEstimation::*method_pointer_6ae0c13173be51c6bebb09f1122a4fe9)()const= &::statiskit::glm::BinomialRegressionSteepestAscentEstimation::copy;

namespace autowig {
}

void wrapper_a4bfff7e28ee596b990e2eb2c1c236b4(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation, autowig::HolderType< struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation >::Type, struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_a4bfff7e28ee596b990e2eb2c1c236b4(module, "BinomialRegressionSteepestAscentEstimation", "");
    class_a4bfff7e28ee596b990e2eb2c1c236b4.def(pybind11::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_a4bfff7e28ee596b990e2eb2c1c236b4.def(pybind11::init< struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation const & >());
    class_a4bfff7e28ee596b990e2eb2c1c236b4.def("copy", method_pointer_6ae0c13173be51c6bebb09f1122a4fe9, "");

}