#include "_glm.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::NominalRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_a0d586169f345ed4adf5365108ce4e10)()const= &::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::size;

namespace autowig {
}

void wrapper_bb51623c9e4a5a408c3a28dd93aa120d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_bb51623c9e4a5a408c3a28dd93aa120d(module, "_OptimizationEstimationImpl_bb51623c9e4a5a408c3a28dd93aa120d", "");
    class_bb51623c9e4a5a408c3a28dd93aa120d.def(pybind11::init<  >());
    class_bb51623c9e4a5a408c3a28dd93aa120d.def(pybind11::init< class ::statiskit::glm::NominalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_bb51623c9e4a5a408c3a28dd93aa120d.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_bb51623c9e4a5a408c3a28dd93aa120d.def("__len__", method_pointer_a0d586169f345ed4adf5365108ce4e10, "");

}