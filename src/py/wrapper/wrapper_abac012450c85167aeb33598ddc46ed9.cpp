#include "_glm.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_2ea9fcf5157e5c068d62f88e5c7032e9)()const= &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::size;

namespace autowig {
}

void wrapper_abac012450c85167aeb33598ddc46ed9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_abac012450c85167aeb33598ddc46ed9(module, "_OptimizationEstimationImpl_abac012450c85167aeb33598ddc46ed9", "");
    class_abac012450c85167aeb33598ddc46ed9.def(pybind11::init<  >());
    class_abac012450c85167aeb33598ddc46ed9.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_abac012450c85167aeb33598ddc46ed9.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_abac012450c85167aeb33598ddc46ed9.def("__len__", method_pointer_2ea9fcf5157e5c068d62f88e5c7032e9, "");

}