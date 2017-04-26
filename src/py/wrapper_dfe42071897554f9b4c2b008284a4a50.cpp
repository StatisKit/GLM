#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BinomialFLink const volatile * get_pointer<class ::statiskit::BinomialFLink const volatile >(class ::statiskit::BinomialFLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dfe42071897554f9b4c2b008284a4a50()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::BinomialFLink::*method_pointer_ff51c385cd4b53cabadeef40792b2593)(double const &) const = &::statiskit::BinomialFLink::inverse;
    double  (::statiskit::BinomialFLink::*method_pointer_0cfbc3eb700c5f8eb123af7456fb5e94)(double const &) const = &::statiskit::BinomialFLink::inverse_derivative;
    void  (::statiskit::BinomialFLink::*method_pointer_12455c96cc4557559824af026597b119)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::BinomialFLink::set_distribution;
    class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > >  (::statiskit::BinomialFLink::*method_pointer_8b58170647d8561a9c6eea71c63ada16)() const = &::statiskit::BinomialFLink::copy;
    boost::python::class_< class ::statiskit::BinomialFLink, autowig::Held< class ::statiskit::BinomialFLink >::Type, boost::python::bases< struct ::statiskit::BinomialLink > > class_dfe42071897554f9b4c2b008284a4a50("BinomialFLink", "", boost::python::no_init);
    class_dfe42071897554f9b4c2b008284a4a50.def(boost::python::init<  >(""));
    class_dfe42071897554f9b4c2b008284a4a50.def("inverse", method_pointer_ff51c385cd4b53cabadeef40792b2593, "");
    class_dfe42071897554f9b4c2b008284a4a50.def("inverse_derivative", method_pointer_0cfbc3eb700c5f8eb123af7456fb5e94, "");
    class_dfe42071897554f9b4c2b008284a4a50.def("set_distribution", method_pointer_12455c96cc4557559824af026597b119, "");
    class_dfe42071897554f9b4c2b008284a4a50.def("copy", method_pointer_8b58170647d8561a9c6eea71c63ada16, "");

    if(autowig::Held< class ::statiskit::BinomialFLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BinomialFLink >::Type, autowig::Held< struct ::statiskit::BinomialLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::BinomialFLink >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::BinomialFLink, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::BinomialFLink >::Type, class ::statiskit::BinomialFLink > > >();
    }

}