#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::BinaryRegression const volatile * get_pointer<class ::statiskit::glm::BinaryRegression const volatile >(class ::statiskit::glm::BinaryRegression const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_33ccb0f30ed85e0797a26d234fe76157()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< class ::statiskit::glm::BinaryRegression, autowig::Held< class ::statiskit::glm::BinaryRegression >::Type, boost::python::bases< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::BinaryLink > > > class_33ccb0f30ed85e0797a26d234fe76157("BinaryRegression", "", boost::python::no_init);
    class_33ccb0f30ed85e0797a26d234fe76157.def(boost::python::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const, class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::BinaryLink const & >(""));

    if(autowig::Held< class ::statiskit::glm::BinaryRegression >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::BinaryRegression >::Type, autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::BinaryLink > >::Type >();
    }

}