#include "_glm.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_8793d576567a5ec7bbb013ae04cfc612)()const= &::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::size;

namespace autowig {
}

void wrapper_374da17212d25c22a44c6fe459683386(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_374da17212d25c22a44c6fe459683386(module, "_OptimizationEstimationImpl_374da17212d25c22a44c6fe459683386", "");
    class_374da17212d25c22a44c6fe459683386.def(pybind11::init<  >());
    class_374da17212d25c22a44c6fe459683386.def(pybind11::init< class ::statiskit::glm::PoissonRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_374da17212d25c22a44c6fe459683386.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_374da17212d25c22a44c6fe459683386.def("__len__", method_pointer_8793d576567a5ec7bbb013ae04cfc612, "");

}