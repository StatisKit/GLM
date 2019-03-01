#include "_glm.h"


namespace autowig {
}

void wrapper_76951996713f5950b605ba898fd888b8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_76951996713f5950b605ba898fd888b8(module, "_ScalarRegressionFisherEstimation_76951996713f5950b605ba898fd888b8", "");
    class_76951996713f5950b605ba898fd888b8.def(pybind11::init<  >());
    class_76951996713f5950b605ba898fd888b8.def(pybind11::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_76951996713f5950b605ba898fd888b8.def(pybind11::init< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}