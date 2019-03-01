#include "_glm.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_6a404fc71c4c5f0a81a4ac8ae4509eb3)()const= &::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::size;

namespace autowig {
}

void wrapper_7db4e403f3e45084a71ccc0c2bac4085(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_7db4e403f3e45084a71ccc0c2bac4085(module, "_OptimizationEstimationImpl_7db4e403f3e45084a71ccc0c2bac4085", "");
    class_7db4e403f3e45084a71ccc0c2bac4085.def(pybind11::init<  >());
    class_7db4e403f3e45084a71ccc0c2bac4085.def(pybind11::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_7db4e403f3e45084a71ccc0c2bac4085.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_7db4e403f3e45084a71ccc0c2bac4085.def("__len__", method_pointer_6a404fc71c4c5f0a81a4ac8ae4509eb3, "");

}