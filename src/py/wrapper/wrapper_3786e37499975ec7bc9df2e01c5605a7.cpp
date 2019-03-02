#include "_glm.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_71ab4da8ab9a523898c131fbf286dc54)()const= &::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::size;

namespace autowig {
}

void wrapper_3786e37499975ec7bc9df2e01c5605a7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_3786e37499975ec7bc9df2e01c5605a7(module, "_OptimizationEstimationImpl_3786e37499975ec7bc9df2e01c5605a7", "");
    class_3786e37499975ec7bc9df2e01c5605a7.def(pybind11::init<  >());
    class_3786e37499975ec7bc9df2e01c5605a7.def(pybind11::init< class ::statiskit::glm::BinaryRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_3786e37499975ec7bc9df2e01c5605a7.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_3786e37499975ec7bc9df2e01c5605a7.def("__len__", method_pointer_71ab4da8ab9a523898c131fbf286dc54, "");

}