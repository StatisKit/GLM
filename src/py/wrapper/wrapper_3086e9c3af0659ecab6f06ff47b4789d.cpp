#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::NegativeBinomialCanonicalLink const volatile * get_pointer<struct ::statiskit::glm::NegativeBinomialCanonicalLink const volatile >(struct ::statiskit::glm::NegativeBinomialCanonicalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3086e9c3af0659ecab6f06ff47b4789d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::NegativeBinomialCanonicalLink, autowig::Held< struct ::statiskit::glm::NegativeBinomialCanonicalLink >::Type, boost::python::bases< struct ::statiskit::glm::NegativeBinomialLink > > class_3086e9c3af0659ecab6f06ff47b4789d("NegativeBinomialCanonicalLink", "", boost::python::no_init);
    class_3086e9c3af0659ecab6f06ff47b4789d.def(boost::python::init<  >(""));

    if(autowig::Held< struct ::statiskit::glm::NegativeBinomialCanonicalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::NegativeBinomialCanonicalLink >::Type, autowig::Held< struct ::statiskit::glm::NegativeBinomialLink >::Type >();
    }

}