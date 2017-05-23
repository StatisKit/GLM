#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NominalCanonicalLink const volatile * get_pointer<struct ::statiskit::NominalCanonicalLink const volatile >(struct ::statiskit::NominalCanonicalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dd74b7cb9d935a2196feb6ba9f26220b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::NominalCanonicalLink, autowig::Held< struct ::statiskit::NominalCanonicalLink >::Type, boost::python::bases< struct ::statiskit::NominalLink > > class_dd74b7cb9d935a2196feb6ba9f26220b("NominalCanonicalLink", "", boost::python::no_init);
    class_dd74b7cb9d935a2196feb6ba9f26220b.def(boost::python::init<  >(""));

    if(autowig::Held< struct ::statiskit::NominalCanonicalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NominalCanonicalLink >::Type, autowig::Held< struct ::statiskit::NominalLink >::Type >();
    }

}