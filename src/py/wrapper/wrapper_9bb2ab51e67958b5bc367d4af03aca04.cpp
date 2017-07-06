#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::OrdinalRegression const volatile * get_pointer<class ::statiskit::glm::OrdinalRegression const volatile >(class ::statiskit::glm::OrdinalRegression const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9bb2ab51e67958b5bc367d4af03aca04()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  (::statiskit::glm::OrdinalRegression::*method_pointer_0c643b92154c582eac5a0726dd1e5e67)() const = &::statiskit::glm::OrdinalRegression::copy;
    boost::python::class_< class ::statiskit::glm::OrdinalRegression, autowig::Held< class ::statiskit::glm::OrdinalRegression >::Type, boost::python::bases< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > > > class_9bb2ab51e67958b5bc367d4af03aca04("OrdinalRegression", "", boost::python::no_init);
    class_9bb2ab51e67958b5bc367d4af03aca04.def(boost::python::init< class ::std::vector< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &, class ::statiskit::VectorPredictor const &, struct ::statiskit::OrdinalLink const & >(""));
    class_9bb2ab51e67958b5bc367d4af03aca04.def("copy", method_pointer_0c643b92154c582eac5a0726dd1e5e67, "");

    if(autowig::Held< class ::statiskit::glm::OrdinalRegression >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::OrdinalRegression >::Type, autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > >::Type >();
    }

}