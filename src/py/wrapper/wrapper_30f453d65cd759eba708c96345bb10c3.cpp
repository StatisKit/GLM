#include "_glm.h"


namespace autowig {
}

void wrapper_30f453d65cd759eba708c96345bb10c3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_30f453d65cd759eba708c96345bb10c3(module, "_QuantitativeScalarRegressionFisherEstimation_30f453d65cd759eba708c96345bb10c3", "");
    class_30f453d65cd759eba708c96345bb10c3.def(pybind11::init<  >());
    class_30f453d65cd759eba708c96345bb10c3.def(pybind11::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_30f453d65cd759eba708c96345bb10c3.def(pybind11::init< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}