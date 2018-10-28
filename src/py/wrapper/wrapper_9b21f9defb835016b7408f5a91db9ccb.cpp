#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::HierarchicalRegression const volatile * get_pointer<class ::statiskit::glm::HierarchicalRegression const volatile >(class ::statiskit::glm::HierarchicalRegression const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9b21f9defb835016b7408f5a91db9ccb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::CategoricalUnivariateConditionalDistribution const * (::statiskit::glm::HierarchicalRegression::*method_pointer_3c81bb6a7bf15b4d96b2f1d2096a45cd)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::glm::HierarchicalRegression::get_regression;
    void  (::statiskit::glm::HierarchicalRegression::*method_pointer_72d484681e075a74bfae8d285a47bb89)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, struct ::statiskit::CategoricalUnivariateConditionalDistribution const &) = &::statiskit::glm::HierarchicalRegression::set_regression;
    boost::python::class_< class ::statiskit::glm::HierarchicalRegression, autowig::Held< class ::statiskit::glm::HierarchicalRegression >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistribution > > class_9b21f9defb835016b7408f5a91db9ccb("HierarchicalRegression", "", boost::python::no_init);
    class_9b21f9defb835016b7408f5a91db9ccb.def(boost::python::init< class ::statiskit::HierarchicalSampleSpace const &, struct ::statiskit::MultivariateSampleSpace const & >(""));
    class_9b21f9defb835016b7408f5a91db9ccb.def(boost::python::init< class ::statiskit::glm::HierarchicalRegression const & >(""));
    class_9b21f9defb835016b7408f5a91db9ccb.def("get_regression", method_pointer_3c81bb6a7bf15b4d96b2f1d2096a45cd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9b21f9defb835016b7408f5a91db9ccb.def("set_regression", method_pointer_72d484681e075a74bfae8d285a47bb89, "");

    if(autowig::Held< class ::statiskit::glm::HierarchicalRegression >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::HierarchicalRegression >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type >();
    }

}