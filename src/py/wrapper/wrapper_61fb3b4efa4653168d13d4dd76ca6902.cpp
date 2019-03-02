#include "_glm.h"


namespace autowig {
}

void wrapper_61fb3b4efa4653168d13d4dd76ca6902(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator, autowig::HolderType< class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > > class_61fb3b4efa4653168d13d4dd76ca6902(module, "Estimator", "");
    class_61fb3b4efa4653168d13d4dd76ca6902.def(pybind11::init<  >());
    class_61fb3b4efa4653168d13d4dd76ca6902.def(pybind11::init< class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator const & >());

}