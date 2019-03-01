#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const (::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_0c95746f4cf552c38ced507ef9dcdb55)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_78fe0cf2a6795623a3a25dfafce60bc9(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_78fe0cf2a6795623a3a25dfafce60bc9(module, "_OptimizationEstimation_78fe0cf2a6795623a3a25dfafce60bc9", "");
    class_78fe0cf2a6795623a3a25dfafce60bc9.def(pybind11::init<  >());
    class_78fe0cf2a6795623a3a25dfafce60bc9.def(pybind11::init< class ::statiskit::glm::PoissonRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_78fe0cf2a6795623a3a25dfafce60bc9.def(pybind11::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_78fe0cf2a6795623a3a25dfafce60bc9.def("get_iteration", method_pointer_0c95746f4cf552c38ced507ef9dcdb55, "");

}