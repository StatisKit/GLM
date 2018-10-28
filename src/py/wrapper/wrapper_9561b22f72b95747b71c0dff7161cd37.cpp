#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::OrdinalCanonicalLink const volatile * get_pointer<struct ::statiskit::glm::OrdinalCanonicalLink const volatile >(struct ::statiskit::glm::OrdinalCanonicalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9561b22f72b95747b71c0dff7161cd37()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::OrdinalCanonicalLink, autowig::Held< struct ::statiskit::glm::OrdinalCanonicalLink >::Type, boost::python::bases< struct ::statiskit::glm::OrdinalLink > > class_9561b22f72b95747b71c0dff7161cd37("OrdinalCanonicalLink", "", boost::python::no_init);
    class_9561b22f72b95747b71c0dff7161cd37.def(boost::python::init<  >(""));

    if(autowig::Held< struct ::statiskit::glm::OrdinalCanonicalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::OrdinalCanonicalLink >::Type, autowig::Held< struct ::statiskit::glm::OrdinalLink >::Type >();
    }

}