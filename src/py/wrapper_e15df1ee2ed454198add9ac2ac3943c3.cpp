#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NegativeBinomialLink const volatile * get_pointer<struct ::statiskit::NegativeBinomialLink const volatile >(struct ::statiskit::NegativeBinomialLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e15df1ee2ed454198add9ac2ac3943c3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::NegativeBinomialLink::*method_pointer_3fba5ffa698751e485458adef628b6a9)(double const &) const = &::statiskit::NegativeBinomialLink::inverse;
    double  (::statiskit::NegativeBinomialLink::*method_pointer_429b84f328b45c928ebcd26a75ebe807)(double const &) const = &::statiskit::NegativeBinomialLink::inverse_derivative;
    class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > >  (::statiskit::NegativeBinomialLink::*method_pointer_cad56b07223356b3ba8db23ca65f233f)() const = &::statiskit::NegativeBinomialLink::copy;
    boost::python::class_< struct ::statiskit::NegativeBinomialLink, autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type, boost::python::bases< struct ::statiskit::ScalarLink > > class_e15df1ee2ed454198add9ac2ac3943c3("NegativeBinomialLink", "", boost::python::no_init);
    class_e15df1ee2ed454198add9ac2ac3943c3.def("inverse", method_pointer_3fba5ffa698751e485458adef628b6a9, "");
    class_e15df1ee2ed454198add9ac2ac3943c3.def("inverse_derivative", method_pointer_429b84f328b45c928ebcd26a75ebe807, "");
    class_e15df1ee2ed454198add9ac2ac3943c3.def("copy", method_pointer_cad56b07223356b3ba8db23ca65f233f, "");

    if(autowig::Held< struct ::statiskit::NegativeBinomialLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type, autowig::Held< struct ::statiskit::ScalarLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::NegativeBinomialLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type, struct ::statiskit::NegativeBinomialLink > > >();
    }

}