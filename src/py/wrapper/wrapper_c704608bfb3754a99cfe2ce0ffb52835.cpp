#include "_glm.h"


namespace autowig {
}

void wrapper_c704608bfb3754a99cfe2ce0ffb52835(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator, autowig::HolderType< class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > > class_c704608bfb3754a99cfe2ce0ffb52835(module, "Estimator", "");
    class_c704608bfb3754a99cfe2ce0ffb52835.def(pybind11::init<  >());
    class_c704608bfb3754a99cfe2ce0ffb52835.def(pybind11::init< class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator const & >());

}