#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::CumulativeLink const volatile * get_pointer<struct ::statiskit::CumulativeLink const volatile >(struct ::statiskit::CumulativeLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_255e003f3bc85e4893e9e612d96d2e9a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::CumulativeLink, autowig::Held< struct ::statiskit::CumulativeLink >::Type, boost::python::bases< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > > > class_255e003f3bc85e4893e9e612d96d2e9a("CumulativeLink", "", boost::python::no_init);
    class_255e003f3bc85e4893e9e612d96d2e9a.def(boost::python::init<  >(""));
    class_255e003f3bc85e4893e9e612d96d2e9a.def(boost::python::init< struct ::statiskit::CumulativeLink const & >(""));

    if(autowig::Held< struct ::statiskit::CumulativeLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CumulativeLink >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CumulativeLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CumulativeLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CumulativeLink >::Type, struct ::statiskit::CumulativeLink > > >();
    }

}