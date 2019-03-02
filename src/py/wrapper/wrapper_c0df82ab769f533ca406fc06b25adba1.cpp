#include "_glm.h"


namespace autowig {
}

void wrapper_c0df82ab769f533ca406fc06b25adba1(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_c0df82ab769f533ca406fc06b25adba1(module, "_ScalarRegressionFisherEstimation_c0df82ab769f533ca406fc06b25adba1", "");
    class_c0df82ab769f533ca406fc06b25adba1.def(pybind11::init<  >());
    class_c0df82ab769f533ca406fc06b25adba1.def(pybind11::init< class ::statiskit::glm::BinaryRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_c0df82ab769f533ca406fc06b25adba1.def(pybind11::init< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());

}