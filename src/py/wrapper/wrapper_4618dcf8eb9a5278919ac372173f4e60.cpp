#include "_glm.h"

unsigned int  (::statiskit::glm::BinomialRegressionFisherEstimation::Estimator::*method_pointer_a6635b1d44d657a18288036e306e7b45)()const= &::statiskit::glm::BinomialRegressionFisherEstimation::Estimator::get_kappa;
void  (::statiskit::glm::BinomialRegressionFisherEstimation::Estimator::*method_pointer_870d85387fea50029e3b7dd3886d87f8)(unsigned int const &)= &::statiskit::glm::BinomialRegressionFisherEstimation::Estimator::set_kappa;

namespace autowig {
}

void wrapper_4618dcf8eb9a5278919ac372173f4e60(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator, autowig::HolderType< class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_4618dcf8eb9a5278919ac372173f4e60(module, "Estimator", "");
    class_4618dcf8eb9a5278919ac372173f4e60.def(pybind11::init<  >());
    class_4618dcf8eb9a5278919ac372173f4e60.def(pybind11::init< class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator const & >());
    class_4618dcf8eb9a5278919ac372173f4e60.def("get_kappa", method_pointer_a6635b1d44d657a18288036e306e7b45, "");
    class_4618dcf8eb9a5278919ac372173f4e60.def("set_kappa", method_pointer_870d85387fea50029e3b7dd3886d87f8, "");

}