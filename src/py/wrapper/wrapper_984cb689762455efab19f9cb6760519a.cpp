#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::SequentialLink const volatile * get_pointer<struct ::statiskit::SequentialLink const volatile >(struct ::statiskit::SequentialLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_984cb689762455efab19f9cb6760519a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::SequentialLink, autowig::Held< struct ::statiskit::SequentialLink >::Type, boost::python::bases< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > > > class_984cb689762455efab19f9cb6760519a("SequentialLink", "", boost::python::no_init);
    class_984cb689762455efab19f9cb6760519a.def(boost::python::init<  >(""));
    class_984cb689762455efab19f9cb6760519a.def(boost::python::init< struct ::statiskit::SequentialLink const & >(""));

    if(autowig::Held< struct ::statiskit::SequentialLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::SequentialLink >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >::Type >();
    }

}