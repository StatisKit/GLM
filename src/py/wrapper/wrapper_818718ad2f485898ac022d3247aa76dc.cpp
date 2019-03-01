#include "_glm.h"


namespace autowig {
}

void wrapper_818718ad2f485898ac022d3247aa76dc(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_818718ad2f485898ac022d3247aa76dc(module, "_ScalarRegressionFisherEstimation_818718ad2f485898ac022d3247aa76dc", "");
    class_818718ad2f485898ac022d3247aa76dc.def(pybind11::init<  >());
    class_818718ad2f485898ac022d3247aa76dc.def(pybind11::init< class ::statiskit::glm::PoissonRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_818718ad2f485898ac022d3247aa76dc.def(pybind11::init< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());

}