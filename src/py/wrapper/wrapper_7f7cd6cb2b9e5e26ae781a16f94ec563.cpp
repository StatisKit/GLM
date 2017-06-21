#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NegativeBinomialCanonicalLink const volatile * get_pointer<struct ::statiskit::NegativeBinomialCanonicalLink const volatile >(struct ::statiskit::NegativeBinomialCanonicalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7f7cd6cb2b9e5e26ae781a16f94ec563()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::NegativeBinomialCanonicalLink, autowig::Held< struct ::statiskit::NegativeBinomialCanonicalLink >::Type, boost::python::bases< struct ::statiskit::NegativeBinomialLink > > class_7f7cd6cb2b9e5e26ae781a16f94ec563("NegativeBinomialCanonicalLink", "", boost::python::no_init);
    class_7f7cd6cb2b9e5e26ae781a16f94ec563.def(boost::python::init<  >(""));

    if(autowig::Held< struct ::statiskit::NegativeBinomialCanonicalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialCanonicalLink >::Type, autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::NegativeBinomialCanonicalLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::NegativeBinomialCanonicalLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::NegativeBinomialCanonicalLink >::Type, struct ::statiskit::NegativeBinomialCanonicalLink > > >();
    }

}