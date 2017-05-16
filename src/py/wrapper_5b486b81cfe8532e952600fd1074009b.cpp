#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::NominalRegression const volatile * get_pointer<class ::statiskit::glm::NominalRegression const volatile >(class ::statiskit::glm::NominalRegression const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5b486b81cfe8532e952600fd1074009b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  (::statiskit::glm::NominalRegression::*method_pointer_2ba06805a91951849c9e917a494c9b0d)() const = &::statiskit::glm::NominalRegression::copy;
    boost::python::class_< class ::statiskit::glm::NominalRegression, autowig::Held< class ::statiskit::glm::NominalRegression >::Type, boost::python::bases< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > > > class_5b486b81cfe8532e952600fd1074009b("NominalRegression", "", boost::python::no_init);
    class_5b486b81cfe8532e952600fd1074009b.def(boost::python::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &, class ::statiskit::VectorPredictor const &, struct ::statiskit::NominalLink const & >(""));
    class_5b486b81cfe8532e952600fd1074009b.def("copy", method_pointer_2ba06805a91951849c9e917a494c9b0d, "");

    if(autowig::Held< class ::statiskit::glm::NominalRegression >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::NominalRegression >::Type, autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::NominalRegression >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::NominalRegression, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::NominalRegression >::Type, class ::statiskit::glm::NominalRegression > > >();
    }

}