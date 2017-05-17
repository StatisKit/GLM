#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::BinomialFLink const volatile * get_pointer<struct ::statiskit::BinomialFLink const volatile >(struct ::statiskit::BinomialFLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_774f8dcebb9f5476b9682f2faff34d6a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::BinomialFLink, autowig::Held< struct ::statiskit::BinomialFLink >::Type, boost::python::bases< struct ::statiskit::FLink< struct ::statiskit::BinomialLink > > > class_774f8dcebb9f5476b9682f2faff34d6a("BinomialFLink", "", boost::python::no_init);
    class_774f8dcebb9f5476b9682f2faff34d6a.def(boost::python::init<  >(""));
    class_774f8dcebb9f5476b9682f2faff34d6a.def(boost::python::init< struct ::statiskit::BinomialFLink const & >(""));

    if(autowig::Held< struct ::statiskit::BinomialFLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialFLink >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::BinomialLink > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::BinomialFLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::BinomialFLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::BinomialFLink >::Type, struct ::statiskit::BinomialFLink > > >();
    }

}