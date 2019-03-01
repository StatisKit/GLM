#include "_glm.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  (::statiskit::glm::NegativeBinomialRegressionX2Estimation::*method_pointer_c0b7a4cd36c4518b8dc75789b0e10470)()const= &::statiskit::glm::NegativeBinomialRegressionX2Estimation::copy;

namespace autowig {
}

void wrapper_42c4b95e3c2959d78ff2080715b8c2eb(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation, autowig::HolderType< struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation >::Type, struct ::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_42c4b95e3c2959d78ff2080715b8c2eb(module, "NegativeBinomialRegressionX2Estimation", "");
    class_42c4b95e3c2959d78ff2080715b8c2eb.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_42c4b95e3c2959d78ff2080715b8c2eb.def(pybind11::init< struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation const & >());
    class_42c4b95e3c2959d78ff2080715b8c2eb.def("copy", method_pointer_c0b7a4cd36c4518b8dc75789b0e10470, "");

}