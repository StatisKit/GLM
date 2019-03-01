#include "_glm.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_869494ed4f8f5cc3a4d0c5fb2f47fa9e)()const= &::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::size;

namespace autowig {
}

void wrapper_c2aeca62fc7d5e049c990f89a08225ce(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_c2aeca62fc7d5e049c990f89a08225ce(module, "_OptimizationEstimationImpl_c2aeca62fc7d5e049c990f89a08225ce", "");
    class_c2aeca62fc7d5e049c990f89a08225ce.def(pybind11::init<  >());
    class_c2aeca62fc7d5e049c990f89a08225ce.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_c2aeca62fc7d5e049c990f89a08225ce.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_c2aeca62fc7d5e049c990f89a08225ce.def("__len__", method_pointer_869494ed4f8f5cc3a4d0c5fb2f47fa9e, "");

}