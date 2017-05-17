#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::PoissonVLink const volatile * get_pointer<struct ::statiskit::PoissonVLink const volatile >(struct ::statiskit::PoissonVLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_88f6053bd6ff5d64be313606078cb297()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::PoissonVLink, autowig::Held< struct ::statiskit::PoissonVLink >::Type, boost::python::bases< struct ::statiskit::FLink< struct ::statiskit::PoissonLink > > > class_88f6053bd6ff5d64be313606078cb297("PoissonVLink", "", boost::python::no_init);
    class_88f6053bd6ff5d64be313606078cb297.def(boost::python::init<  >(""));
    class_88f6053bd6ff5d64be313606078cb297.def(boost::python::init< struct ::statiskit::PoissonVLink const & >(""));

    if(autowig::Held< struct ::statiskit::PoissonVLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PoissonVLink >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::PoissonLink > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PoissonVLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PoissonVLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PoissonVLink >::Type, struct ::statiskit::PoissonVLink > > >();
    }

}