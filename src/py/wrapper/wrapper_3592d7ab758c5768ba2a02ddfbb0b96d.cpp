#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const (::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::NominalRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_41d06a927217528f8333689bacf87246)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_3592d7ab758c5768ba2a02ddfbb0b96d(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_3592d7ab758c5768ba2a02ddfbb0b96d(module, "_OptimizationEstimation_3592d7ab758c5768ba2a02ddfbb0b96d", "");
    class_3592d7ab758c5768ba2a02ddfbb0b96d.def(pybind11::init<  >());
    class_3592d7ab758c5768ba2a02ddfbb0b96d.def(pybind11::init< class ::statiskit::glm::NominalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_3592d7ab758c5768ba2a02ddfbb0b96d.def(pybind11::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_3592d7ab758c5768ba2a02ddfbb0b96d.def("get_iteration", method_pointer_41d06a927217528f8333689bacf87246, "");

}