#include "_glm.h"


namespace autowig {
}

void wrapper_c9b70d492ad75f21a0a7e1591d087b93(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_c9b70d492ad75f21a0a7e1591d087b93(module, "_ScalarRegressionFisherEstimation_c9b70d492ad75f21a0a7e1591d087b93", "");
    class_c9b70d492ad75f21a0a7e1591d087b93.def(pybind11::init<  >());
    class_c9b70d492ad75f21a0a7e1591d087b93.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_c9b70d492ad75f21a0a7e1591d087b93.def(pybind11::init< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}