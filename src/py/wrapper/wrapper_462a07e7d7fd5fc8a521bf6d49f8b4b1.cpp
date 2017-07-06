#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::ReferenceLink const volatile * get_pointer<struct ::statiskit::ReferenceLink const volatile >(struct ::statiskit::ReferenceLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_462a07e7d7fd5fc8a521bf6d49f8b4b1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::ReferenceLink, autowig::Held< struct ::statiskit::ReferenceLink >::Type, boost::python::bases< struct ::statiskit::FLink< struct ::statiskit::NominalLink > > > class_462a07e7d7fd5fc8a521bf6d49f8b4b1("ReferenceLink", "", boost::python::no_init);
    class_462a07e7d7fd5fc8a521bf6d49f8b4b1.def(boost::python::init<  >(""));
    class_462a07e7d7fd5fc8a521bf6d49f8b4b1.def(boost::python::init< struct ::statiskit::ReferenceLink const & >(""));

    if(autowig::Held< struct ::statiskit::ReferenceLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ReferenceLink >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NominalLink > >::Type >();
    }

}