#include "_glm.h"

double const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::*method_pointer_da82378dff0757e4a358627e937ecd10)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::get_loglikelihood;
class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::*method_pointer_55c25c4ff1dc5e38b9ff451b945601db)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::get_loglikelihood_sequence;
bool const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::*method_pointer_f73f12afaf185f66883b5d0704da1544)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::get_converged;

namespace autowig {
}

void wrapper_e7c465f54bff53b2b62fea726a278b20(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >, autowig::HolderType< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_e7c465f54bff53b2b62fea726a278b20(module, "_CategoricalRegressionFisherEstimation_e7c465f54bff53b2b62fea726a278b20", "");
    class_e7c465f54bff53b2b62fea726a278b20.def(pybind11::init<  >());
    class_e7c465f54bff53b2b62fea726a278b20.def(pybind11::init< class ::statiskit::glm::OrdinalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_e7c465f54bff53b2b62fea726a278b20.def(pybind11::init< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > const & >());
    class_e7c465f54bff53b2b62fea726a278b20.def("get_loglikelihood", method_pointer_da82378dff0757e4a358627e937ecd10, pybind11::return_value_policy::copy, "");
    class_e7c465f54bff53b2b62fea726a278b20.def("get_loglikelihood_sequence", method_pointer_55c25c4ff1dc5e38b9ff451b945601db, pybind11::return_value_policy::copy, "");
    class_e7c465f54bff53b2b62fea726a278b20.def("get_converged", method_pointer_f73f12afaf185f66883b5d0704da1544, pybind11::return_value_policy::copy, "");

}