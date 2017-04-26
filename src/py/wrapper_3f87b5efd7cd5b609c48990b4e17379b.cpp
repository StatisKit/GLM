#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::BinomialLink const volatile * get_pointer<struct ::statiskit::BinomialLink const volatile >(struct ::statiskit::BinomialLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3f87b5efd7cd5b609c48990b4e17379b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::BinomialLink::*method_pointer_cc0469c4e3615f7ca105cac126c76d9c)(double const &) const = &::statiskit::BinomialLink::inverse;
    double  (::statiskit::BinomialLink::*method_pointer_c6477af9e6a15782b68068a91845bc92)(double const &) const = &::statiskit::BinomialLink::inverse_derivative;
    class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > >  (::statiskit::BinomialLink::*method_pointer_51aae4fd10095cb2bf118590727937c2)() const = &::statiskit::BinomialLink::copy;
    boost::python::class_< struct ::statiskit::BinomialLink, autowig::Held< struct ::statiskit::BinomialLink >::Type, boost::python::bases< struct ::statiskit::ScalarLink > > class_3f87b5efd7cd5b609c48990b4e17379b("BinomialLink", "", boost::python::no_init);
    class_3f87b5efd7cd5b609c48990b4e17379b.def("inverse", method_pointer_cc0469c4e3615f7ca105cac126c76d9c, "");
    class_3f87b5efd7cd5b609c48990b4e17379b.def("inverse_derivative", method_pointer_c6477af9e6a15782b68068a91845bc92, "");
    class_3f87b5efd7cd5b609c48990b4e17379b.def("copy", method_pointer_51aae4fd10095cb2bf118590727937c2, "");

    if(autowig::Held< struct ::statiskit::BinomialLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialLink >::Type, autowig::Held< struct ::statiskit::ScalarLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::BinomialLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::BinomialLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::BinomialLink >::Type, struct ::statiskit::BinomialLink > > >();
    }

}