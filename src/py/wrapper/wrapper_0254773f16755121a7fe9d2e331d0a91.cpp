#include "_glm.h"


namespace autowig {
}

void wrapper_0254773f16755121a7fe9d2e331d0a91(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator, autowig::HolderType< class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator, struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_0254773f16755121a7fe9d2e331d0a91(module, "Estimator", "");
    class_0254773f16755121a7fe9d2e331d0a91.def(pybind11::init<  >());
    class_0254773f16755121a7fe9d2e331d0a91.def(pybind11::init< class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator const & >());

}