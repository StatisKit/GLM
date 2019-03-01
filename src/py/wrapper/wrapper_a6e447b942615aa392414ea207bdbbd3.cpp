#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const (::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_9ce1618c1eab551a8f342c924f42fa7f)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_a6e447b942615aa392414ea207bdbbd3(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_a6e447b942615aa392414ea207bdbbd3(module, "_OptimizationEstimation_a6e447b942615aa392414ea207bdbbd3", "");
    class_a6e447b942615aa392414ea207bdbbd3.def(pybind11::init<  >());
    class_a6e447b942615aa392414ea207bdbbd3.def(pybind11::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_a6e447b942615aa392414ea207bdbbd3.def(pybind11::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_a6e447b942615aa392414ea207bdbbd3.def("get_iteration", method_pointer_9ce1618c1eab551a8f342c924f42fa7f, "");

}