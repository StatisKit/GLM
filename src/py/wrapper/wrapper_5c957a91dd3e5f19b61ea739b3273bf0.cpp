#include "_glm.h"

struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const * (::statiskit::glm::HierarchicalRegressionEstimation::Estimator::*method_pointer_d41f6ad578295f63a8be7cfa7443db06)()const= &::statiskit::glm::HierarchicalRegressionEstimation::Estimator::get_default_estimator;
void  (::statiskit::glm::HierarchicalRegressionEstimation::Estimator::*method_pointer_e9b5e2a0bb8b5212bef5256e7aefa4ff)(struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const *)= &::statiskit::glm::HierarchicalRegressionEstimation::Estimator::set_default_estimator;
struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const * (::statiskit::glm::HierarchicalRegressionEstimation::Estimator::*method_pointer_853a1d2e53cd576b8aff3013019a4f3a)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::glm::HierarchicalRegressionEstimation::Estimator::get_estimator;
void  (::statiskit::glm::HierarchicalRegressionEstimation::Estimator::*method_pointer_45933682a72851a4baecc85fd4be63dd)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const *)= &::statiskit::glm::HierarchicalRegressionEstimation::Estimator::set_estimator;

namespace autowig {
}

void wrapper_5c957a91dd3e5f19b61ea739b3273bf0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, autowig::HolderType< class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > class_5c957a91dd3e5f19b61ea739b3273bf0(module, "Estimator", "");
    class_5c957a91dd3e5f19b61ea739b3273bf0.def(pybind11::init<  >());
    class_5c957a91dd3e5f19b61ea739b3273bf0.def(pybind11::init< class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator const & >());
    class_5c957a91dd3e5f19b61ea739b3273bf0.def("get_default_estimator", method_pointer_d41f6ad578295f63a8be7cfa7443db06, pybind11::return_value_policy::reference_internal, "");
    class_5c957a91dd3e5f19b61ea739b3273bf0.def("set_default_estimator", method_pointer_e9b5e2a0bb8b5212bef5256e7aefa4ff, "");
    class_5c957a91dd3e5f19b61ea739b3273bf0.def("get_estimator", method_pointer_853a1d2e53cd576b8aff3013019a4f3a, pybind11::return_value_policy::reference_internal, "");
    class_5c957a91dd3e5f19b61ea739b3273bf0.def("set_estimator", method_pointer_45933682a72851a4baecc85fd4be63dd, "");

}