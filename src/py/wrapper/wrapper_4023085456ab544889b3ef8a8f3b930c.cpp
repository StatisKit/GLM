#include "_glm.h"


namespace autowig {
}

void wrapper_4023085456ab544889b3ef8a8f3b930c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::PoissonRegressionFisherEstimation::Estimator, autowig::HolderType< class ::statiskit::glm::PoissonRegressionFisherEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::PoissonRegressionFisherEstimation::Estimator, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_4023085456ab544889b3ef8a8f3b930c(module, "Estimator", "");
    class_4023085456ab544889b3ef8a8f3b930c.def(pybind11::init<  >());
    class_4023085456ab544889b3ef8a8f3b930c.def(pybind11::init< class ::statiskit::glm::PoissonRegressionFisherEstimation::Estimator const & >());

}