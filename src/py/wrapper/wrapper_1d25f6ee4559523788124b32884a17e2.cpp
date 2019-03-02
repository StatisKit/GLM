#include "_glm.h"

struct ::statiskit::UnivariateConditionalDistributionEstimation const * (::statiskit::glm::HierarchicalRegressionEstimation::*method_pointer_ccf4607f700f542f94f0bf558a260c25)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::glm::HierarchicalRegressionEstimation::get_estimation;

namespace autowig {
}

void wrapper_1d25f6ee4559523788124b32884a17e2(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::HierarchicalRegressionEstimation, autowig::HolderType< class ::statiskit::glm::HierarchicalRegressionEstimation >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_1d25f6ee4559523788124b32884a17e2(module, "HierarchicalRegressionEstimation", "");
    class_1d25f6ee4559523788124b32884a17e2.def(pybind11::init<  >());
    class_1d25f6ee4559523788124b32884a17e2.def(pybind11::init< class ::statiskit::glm::HierarchicalRegression const *, ::statiskit::UnivariateConditionalDistributionEstimation::data_type const * >());
    class_1d25f6ee4559523788124b32884a17e2.def(pybind11::init< class ::statiskit::glm::HierarchicalRegressionEstimation const & >());
    class_1d25f6ee4559523788124b32884a17e2.def("get_estimation", method_pointer_ccf4607f700f542f94f0bf558a260c25, pybind11::return_value_policy::reference_internal, "");

}