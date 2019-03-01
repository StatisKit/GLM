#include "_glm.h"

unsigned int const (::statiskit::OptimizationEstimation< unsigned int, ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_f90f4abe36fe53c5967da1d6915f613d)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_4768691a065b5cbfb6a077f5196f28fa(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_4768691a065b5cbfb6a077f5196f28fa(module, "_OptimizationEstimation_4768691a065b5cbfb6a077f5196f28fa", "");
    class_4768691a065b5cbfb6a077f5196f28fa.def(pybind11::init<  >());
    class_4768691a065b5cbfb6a077f5196f28fa.def(pybind11::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_4768691a065b5cbfb6a077f5196f28fa.def(pybind11::init< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_4768691a065b5cbfb6a077f5196f28fa.def("get_iteration", method_pointer_f90f4abe36fe53c5967da1d6915f613d, "");

}