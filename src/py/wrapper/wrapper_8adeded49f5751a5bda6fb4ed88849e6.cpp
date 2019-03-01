#include "_glm.h"

double const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::*method_pointer_d8e7cc51298455d598ecb20ad7be582b)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::get_loglikelihood;
class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::*method_pointer_ad16153accb15d779aa4229bc2cd9810)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::get_loglikelihood_sequence;
bool const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::*method_pointer_5fa02f13c3a059be8d56641aa7a3cab1)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::get_converged;

namespace autowig {
}

void wrapper_8adeded49f5751a5bda6fb4ed88849e6(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >, autowig::HolderType< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_8adeded49f5751a5bda6fb4ed88849e6(module, "_CategoricalRegressionFisherEstimation_8adeded49f5751a5bda6fb4ed88849e6", "");
    class_8adeded49f5751a5bda6fb4ed88849e6.def(pybind11::init<  >());
    class_8adeded49f5751a5bda6fb4ed88849e6.def(pybind11::init< class ::statiskit::glm::NominalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_8adeded49f5751a5bda6fb4ed88849e6.def(pybind11::init< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > const & >());
    class_8adeded49f5751a5bda6fb4ed88849e6.def("get_loglikelihood", method_pointer_d8e7cc51298455d598ecb20ad7be582b, pybind11::return_value_policy::copy, "");
    class_8adeded49f5751a5bda6fb4ed88849e6.def("get_loglikelihood_sequence", method_pointer_ad16153accb15d779aa4229bc2cd9810, pybind11::return_value_policy::copy, "");
    class_8adeded49f5751a5bda6fb4ed88849e6.def("get_converged", method_pointer_5fa02f13c3a059be8d56641aa7a3cab1, pybind11::return_value_policy::copy, "");

}