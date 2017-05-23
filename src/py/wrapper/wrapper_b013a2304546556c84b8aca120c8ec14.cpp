#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NegativeBinomialULink const volatile * get_pointer<struct ::statiskit::NegativeBinomialULink const volatile >(struct ::statiskit::NegativeBinomialULink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b013a2304546556c84b8aca120c8ec14()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::NegativeBinomialULink, autowig::Held< struct ::statiskit::NegativeBinomialULink >::Type, boost::python::bases< struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > > > class_b013a2304546556c84b8aca120c8ec14("NegativeBinomialULink", "", boost::python::no_init);
    class_b013a2304546556c84b8aca120c8ec14.def(boost::python::init<  >(""));
    class_b013a2304546556c84b8aca120c8ec14.def(boost::python::init< struct ::statiskit::NegativeBinomialULink const & >(""));

    if(autowig::Held< struct ::statiskit::NegativeBinomialULink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialULink >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > >::Type >();
    }

}