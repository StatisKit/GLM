#include "_glm.h"


namespace autowig {
}

void wrapper_dd7036683c1958718a0654c6090ee93e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::BinaryRegressionFisherEstimation, autowig::HolderType< struct ::statiskit::glm::BinaryRegressionFisherEstimation >::Type, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_dd7036683c1958718a0654c6090ee93e(module, "BinaryRegressionFisherEstimation", "");
    class_dd7036683c1958718a0654c6090ee93e.def(pybind11::init< class ::statiskit::glm::BinaryRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_dd7036683c1958718a0654c6090ee93e.def(pybind11::init< struct ::statiskit::glm::BinaryRegressionFisherEstimation const & >());

}