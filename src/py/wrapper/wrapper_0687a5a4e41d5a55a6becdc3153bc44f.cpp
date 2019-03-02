#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const (::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_f5d91b8cd4c2544f916fd91eede0a238)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_0687a5a4e41d5a55a6becdc3153bc44f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_0687a5a4e41d5a55a6becdc3153bc44f(module, "_OptimizationEstimation_0687a5a4e41d5a55a6becdc3153bc44f", "");
    class_0687a5a4e41d5a55a6becdc3153bc44f.def(pybind11::init<  >());
    class_0687a5a4e41d5a55a6becdc3153bc44f.def(pybind11::init< class ::statiskit::glm::BinaryRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_0687a5a4e41d5a55a6becdc3153bc44f.def(pybind11::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_0687a5a4e41d5a55a6becdc3153bc44f.def("get_iteration", method_pointer_f5d91b8cd4c2544f916fd91eede0a238, "");

}