#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::PoissonCanonicalLink const volatile * get_pointer<struct ::statiskit::PoissonCanonicalLink const volatile >(struct ::statiskit::PoissonCanonicalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2b9768984eb15f1080f0a385f84df14b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::PoissonCanonicalLink, autowig::Held< struct ::statiskit::PoissonCanonicalLink >::Type, boost::python::bases< struct ::statiskit::PoissonLink > > class_2b9768984eb15f1080f0a385f84df14b("PoissonCanonicalLink", "", boost::python::no_init);
    class_2b9768984eb15f1080f0a385f84df14b.def(boost::python::init<  >(""));

    if(autowig::Held< struct ::statiskit::PoissonCanonicalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PoissonCanonicalLink >::Type, autowig::Held< struct ::statiskit::PoissonLink >::Type >();
    }

}