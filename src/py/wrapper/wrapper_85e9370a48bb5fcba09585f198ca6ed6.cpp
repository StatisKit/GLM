#include "_glm.h"

double const (::statiskit::OptimizationEstimation< double, ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_84f624aabcf753b6b7655e891957f7d3)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_85e9370a48bb5fcba09585f198ca6ed6(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_85e9370a48bb5fcba09585f198ca6ed6(module, "_OptimizationEstimation_85e9370a48bb5fcba09585f198ca6ed6", "");
    class_85e9370a48bb5fcba09585f198ca6ed6.def(pybind11::init<  >());
    class_85e9370a48bb5fcba09585f198ca6ed6.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_85e9370a48bb5fcba09585f198ca6ed6.def(pybind11::init< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_85e9370a48bb5fcba09585f198ca6ed6.def("get_iteration", method_pointer_84f624aabcf753b6b7655e891957f7d3, "");

}