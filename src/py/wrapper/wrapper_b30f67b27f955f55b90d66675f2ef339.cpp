#include "_glm.h"


namespace autowig {
}

void wrapper_b30f67b27f955f55b90d66675f2ef339(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::OrdinalRegressionFisherEstimation, autowig::HolderType< class ::statiskit::glm::OrdinalRegressionFisherEstimation >::Type, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > class_b30f67b27f955f55b90d66675f2ef339(module, "OrdinalRegressionFisherEstimation", "");
    class_b30f67b27f955f55b90d66675f2ef339.def(pybind11::init<  >());
    class_b30f67b27f955f55b90d66675f2ef339.def(pybind11::init< class ::statiskit::glm::OrdinalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_b30f67b27f955f55b90d66675f2ef339.def(pybind11::init< class ::statiskit::glm::OrdinalRegressionFisherEstimation const & >());

}