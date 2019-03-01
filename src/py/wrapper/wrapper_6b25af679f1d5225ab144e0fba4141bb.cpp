#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const (::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_c90dedf3eced56dfadf84809e94e4d9d)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_6b25af679f1d5225ab144e0fba4141bb(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_6b25af679f1d5225ab144e0fba4141bb(module, "_OptimizationEstimation_6b25af679f1d5225ab144e0fba4141bb", "");
    class_6b25af679f1d5225ab144e0fba4141bb.def(pybind11::init<  >());
    class_6b25af679f1d5225ab144e0fba4141bb.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_6b25af679f1d5225ab144e0fba4141bb.def(pybind11::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_6b25af679f1d5225ab144e0fba4141bb.def("get_iteration", method_pointer_c90dedf3eced56dfadf84809e94e4d9d, "");

}