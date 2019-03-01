#include "_glm.h"


namespace autowig {
}

void wrapper_473db32424065b56b6f464f44bfd1500(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_473db32424065b56b6f464f44bfd1500(module, "_QuantitativeScalarRegressionFisherEstimation_473db32424065b56b6f464f44bfd1500", "");
    class_473db32424065b56b6f464f44bfd1500.def(pybind11::init<  >());
    class_473db32424065b56b6f464f44bfd1500.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_473db32424065b56b6f464f44bfd1500.def(pybind11::init< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}