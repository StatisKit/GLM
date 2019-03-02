#include "_glm.h"

struct ::statiskit::CategoricalUnivariateConditionalDistribution const * (::statiskit::glm::HierarchicalRegression::*method_pointer_3c81bb6a7bf15b4d96b2f1d2096a45cd)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::glm::HierarchicalRegression::get_regression;
void  (::statiskit::glm::HierarchicalRegression::*method_pointer_72d484681e075a74bfae8d285a47bb89)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, struct ::statiskit::CategoricalUnivariateConditionalDistribution const &)= &::statiskit::glm::HierarchicalRegression::set_regression;

namespace autowig {
}

void wrapper_9b21f9defb835016b7408f5a91db9ccb(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::HierarchicalRegression, autowig::HolderType< class ::statiskit::glm::HierarchicalRegression >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistribution > class_9b21f9defb835016b7408f5a91db9ccb(module, "HierarchicalRegression", "");
    class_9b21f9defb835016b7408f5a91db9ccb.def(pybind11::init< class ::statiskit::HierarchicalSampleSpace const &, struct ::statiskit::MultivariateSampleSpace const & >());
    class_9b21f9defb835016b7408f5a91db9ccb.def(pybind11::init< class ::statiskit::glm::HierarchicalRegression const & >());
    class_9b21f9defb835016b7408f5a91db9ccb.def("get_regression", method_pointer_3c81bb6a7bf15b4d96b2f1d2096a45cd, pybind11::return_value_policy::reference_internal, "");
    class_9b21f9defb835016b7408f5a91db9ccb.def("set_regression", method_pointer_72d484681e075a74bfae8d285a47bb89, "");

}