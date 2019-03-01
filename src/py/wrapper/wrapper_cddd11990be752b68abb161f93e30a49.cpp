#include "_glm.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  (::statiskit::glm::BinomialRegressionFisherEstimation::*method_pointer_f961cc727eaa5536b2e731c6dd0bafa7)()const= &::statiskit::glm::BinomialRegressionFisherEstimation::copy;

namespace autowig {
}

void wrapper_cddd11990be752b68abb161f93e30a49(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::BinomialRegressionFisherEstimation, autowig::HolderType< struct ::statiskit::glm::BinomialRegressionFisherEstimation >::Type, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_cddd11990be752b68abb161f93e30a49(module, "BinomialRegressionFisherEstimation", "");
    class_cddd11990be752b68abb161f93e30a49.def(pybind11::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_cddd11990be752b68abb161f93e30a49.def(pybind11::init< struct ::statiskit::glm::BinomialRegressionFisherEstimation const & >());
    class_cddd11990be752b68abb161f93e30a49.def("copy", method_pointer_f961cc727eaa5536b2e731c6dd0bafa7, "");

}