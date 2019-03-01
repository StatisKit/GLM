#include "_glm.h"

double  (::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator::*method_pointer_2f46226117565a1293b219f00223cd92)()const= &::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator::get_kappa;
void  (::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator::*method_pointer_ea911849e0d85f6b803b1c67ce8bc13a)(double const &)= &::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator::set_kappa;

namespace autowig {
}

void wrapper_d774945872b75993aa2e7ebb0b2c5638(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator, autowig::HolderType< class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_d774945872b75993aa2e7ebb0b2c5638(module, "Estimator", "");
    class_d774945872b75993aa2e7ebb0b2c5638.def(pybind11::init<  >());
    class_d774945872b75993aa2e7ebb0b2c5638.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator const & >());
    class_d774945872b75993aa2e7ebb0b2c5638.def("get_kappa", method_pointer_2f46226117565a1293b219f00223cd92, "");
    class_d774945872b75993aa2e7ebb0b2c5638.def("set_kappa", method_pointer_ea911849e0d85f6b803b1c67ce8bc13a, "");

}