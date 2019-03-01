#include "_glm.h"


namespace autowig {
}

void wrapper_844fd50b3286534a9e45bc5e36be057f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::NominalRegressionFisherEstimation::Estimator, autowig::HolderType< class ::statiskit::glm::NominalRegressionFisherEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation::Estimator, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > > class_844fd50b3286534a9e45bc5e36be057f(module, "Estimator", "");
    class_844fd50b3286534a9e45bc5e36be057f.def(pybind11::init<  >());
    class_844fd50b3286534a9e45bc5e36be057f.def(pybind11::init< class ::statiskit::glm::NominalRegressionFisherEstimation::Estimator const & >());

}