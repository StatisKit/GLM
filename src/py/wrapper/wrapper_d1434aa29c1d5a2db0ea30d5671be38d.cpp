#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const (::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::OrdinalRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_a2295943c52a5dc18bc704551f283d8f)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_d1434aa29c1d5a2db0ea30d5671be38d(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_d1434aa29c1d5a2db0ea30d5671be38d(module, "_OptimizationEstimation_d1434aa29c1d5a2db0ea30d5671be38d", "");
    class_d1434aa29c1d5a2db0ea30d5671be38d.def(pybind11::init<  >());
    class_d1434aa29c1d5a2db0ea30d5671be38d.def(pybind11::init< class ::statiskit::glm::OrdinalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_d1434aa29c1d5a2db0ea30d5671be38d.def(pybind11::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_d1434aa29c1d5a2db0ea30d5671be38d.def("get_iteration", method_pointer_a2295943c52a5dc18bc704551f283d8f, "");

}