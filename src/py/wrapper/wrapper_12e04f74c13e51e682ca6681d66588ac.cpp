#include "_glm.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::OrdinalRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_28be9c9cffac5e9eb6a7d005fc36b2c4)()const= &::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::size;

namespace autowig {
}

void wrapper_12e04f74c13e51e682ca6681d66588ac(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_12e04f74c13e51e682ca6681d66588ac(module, "_OptimizationEstimationImpl_12e04f74c13e51e682ca6681d66588ac", "");
    class_12e04f74c13e51e682ca6681d66588ac.def(pybind11::init<  >());
    class_12e04f74c13e51e682ca6681d66588ac.def(pybind11::init< class ::statiskit::glm::OrdinalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_12e04f74c13e51e682ca6681d66588ac.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_12e04f74c13e51e682ca6681d66588ac.def("__len__", method_pointer_28be9c9cffac5e9eb6a7d005fc36b2c4, "");

}