#include "_glm.h"


namespace autowig {
}

void wrapper_24e0883e92ab577e9f3795eb169f1b08(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation, autowig::HolderType< struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation >::Type, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_24e0883e92ab577e9f3795eb169f1b08(module, "NegativeBinomialRegressionFisherEstimation", "");
    class_24e0883e92ab577e9f3795eb169f1b08.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_24e0883e92ab577e9f3795eb169f1b08.def(pybind11::init< struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation const & >());

}