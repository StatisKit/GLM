#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::AdjacentLink const volatile * get_pointer<struct ::statiskit::AdjacentLink const volatile >(struct ::statiskit::AdjacentLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e5a7b4df84355daeb31becc214e68eac()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::AdjacentLink, autowig::Held< struct ::statiskit::AdjacentLink >::Type, boost::python::bases< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > > > class_e5a7b4df84355daeb31becc214e68eac("AdjacentLink", "", boost::python::no_init);
    class_e5a7b4df84355daeb31becc214e68eac.def(boost::python::init<  >(""));
    class_e5a7b4df84355daeb31becc214e68eac.def(boost::python::init< struct ::statiskit::AdjacentLink const & >(""));

    if(autowig::Held< struct ::statiskit::AdjacentLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::AdjacentLink >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >::Type >();
    }

}