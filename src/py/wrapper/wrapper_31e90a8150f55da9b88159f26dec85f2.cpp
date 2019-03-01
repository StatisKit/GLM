#include "_glm.h"


namespace autowig {
}

void wrapper_31e90a8150f55da9b88159f26dec85f2(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::NominalRegressionFisherEstimation, autowig::HolderType< class ::statiskit::glm::NominalRegressionFisherEstimation >::Type, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > > class_31e90a8150f55da9b88159f26dec85f2(module, "NominalRegressionFisherEstimation", "");
    class_31e90a8150f55da9b88159f26dec85f2.def(pybind11::init<  >());
    class_31e90a8150f55da9b88159f26dec85f2.def(pybind11::init< class ::statiskit::glm::NominalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_31e90a8150f55da9b88159f26dec85f2.def(pybind11::init< class ::statiskit::glm::NominalRegressionFisherEstimation const & >());

}