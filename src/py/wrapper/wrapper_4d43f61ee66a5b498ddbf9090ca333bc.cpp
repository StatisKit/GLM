#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OrdinalCanonicalLink const volatile * get_pointer<struct ::statiskit::OrdinalCanonicalLink const volatile >(struct ::statiskit::OrdinalCanonicalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4d43f61ee66a5b498ddbf9090ca333bc()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::OrdinalCanonicalLink, autowig::Held< struct ::statiskit::OrdinalCanonicalLink >::Type, boost::python::bases< struct ::statiskit::OrdinalLink > > class_4d43f61ee66a5b498ddbf9090ca333bc("OrdinalCanonicalLink", "", boost::python::no_init);
    class_4d43f61ee66a5b498ddbf9090ca333bc.def(boost::python::init<  >(""));
    class_4d43f61ee66a5b498ddbf9090ca333bc.def(boost::python::init< struct ::statiskit::OrdinalCanonicalLink const & >(""));

    if(autowig::Held< struct ::statiskit::OrdinalCanonicalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OrdinalCanonicalLink >::Type, autowig::Held< struct ::statiskit::OrdinalLink >::Type >();
    }

}