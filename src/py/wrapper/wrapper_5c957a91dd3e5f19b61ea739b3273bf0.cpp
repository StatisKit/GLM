#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator const volatile >(class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5c957a91dd3e5f19b61ea739b3273bf0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_1d25f6ee4559523788124b32884a17e2 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._hierarchical_regression_estimation");
    boost::python::object module_1d25f6ee4559523788124b32884a17e2(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_1d25f6ee4559523788124b32884a17e2.c_str()))));
    boost::python::scope().attr("_hierarchical_regression_estimation") = module_1d25f6ee4559523788124b32884a17e2;
    boost::python::scope scope_1d25f6ee4559523788124b32884a17e2 = module_1d25f6ee4559523788124b32884a17e2;
    struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const * (::statiskit::glm::HierarchicalRegressionEstimation::Estimator::*method_pointer_d41f6ad578295f63a8be7cfa7443db06)() const = &::statiskit::glm::HierarchicalRegressionEstimation::Estimator::get_default_estimator;
    void  (::statiskit::glm::HierarchicalRegressionEstimation::Estimator::*method_pointer_e9b5e2a0bb8b5212bef5256e7aefa4ff)(struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const *) = &::statiskit::glm::HierarchicalRegressionEstimation::Estimator::set_default_estimator;
    struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const * (::statiskit::glm::HierarchicalRegressionEstimation::Estimator::*method_pointer_853a1d2e53cd576b8aff3013019a4f3a)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::glm::HierarchicalRegressionEstimation::Estimator::get_estimator;
    void  (::statiskit::glm::HierarchicalRegressionEstimation::Estimator::*method_pointer_45933682a72851a4baecc85fd4be63dd)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const *) = &::statiskit::glm::HierarchicalRegressionEstimation::Estimator::set_estimator;
    boost::python::class_< class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, autowig::Held< class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > > class_5c957a91dd3e5f19b61ea739b3273bf0("Estimator", "", boost::python::no_init);
    class_5c957a91dd3e5f19b61ea739b3273bf0.def(boost::python::init<  >(""));
    class_5c957a91dd3e5f19b61ea739b3273bf0.def(boost::python::init< class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator const & >(""));
    class_5c957a91dd3e5f19b61ea739b3273bf0.def("get_default_estimator", method_pointer_d41f6ad578295f63a8be7cfa7443db06, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5c957a91dd3e5f19b61ea739b3273bf0.def("set_default_estimator", method_pointer_e9b5e2a0bb8b5212bef5256e7aefa4ff, "");
    class_5c957a91dd3e5f19b61ea739b3273bf0.def("get_estimator", method_pointer_853a1d2e53cd576b8aff3013019a4f3a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5c957a91dd3e5f19b61ea739b3273bf0.def("set_estimator", method_pointer_45933682a72851a4baecc85fd4be63dd, "");

    if(autowig::Held< class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >::Type >();
    }

}