#include "_glm.h"


namespace autowig {
}

void wrapper_957d6c322e915a51a2117bfe24ef629f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator, autowig::HolderType< class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator, struct ::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_957d6c322e915a51a2117bfe24ef629f(module, "Estimator", "");
    class_957d6c322e915a51a2117bfe24ef629f.def(pybind11::init<  >());
    class_957d6c322e915a51a2117bfe24ef629f.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator const & >());

}