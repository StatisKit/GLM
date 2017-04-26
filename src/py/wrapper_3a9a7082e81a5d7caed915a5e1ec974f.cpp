#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NegativeBinomialFLink const volatile * get_pointer<class ::statiskit::NegativeBinomialFLink const volatile >(class ::statiskit::NegativeBinomialFLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3a9a7082e81a5d7caed915a5e1ec974f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::NegativeBinomialFLink::*method_pointer_46e4017ec33950f0818d4b287a22691f)(double const &) const = &::statiskit::NegativeBinomialFLink::inverse;
    double  (::statiskit::NegativeBinomialFLink::*method_pointer_3b94be5fc315529fb49a65e68ca256ce)(double const &) const = &::statiskit::NegativeBinomialFLink::inverse_derivative;
    void  (::statiskit::NegativeBinomialFLink::*method_pointer_525b05af9e5c57a5a151ba0b2016731c)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::NegativeBinomialFLink::set_distribution;
    class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > >  (::statiskit::NegativeBinomialFLink::*method_pointer_5c40df709e8350e6b437143a1cdd2edd)() const = &::statiskit::NegativeBinomialFLink::copy;
    boost::python::class_< class ::statiskit::NegativeBinomialFLink, autowig::Held< class ::statiskit::NegativeBinomialFLink >::Type, boost::python::bases< struct ::statiskit::NegativeBinomialLink > > class_3a9a7082e81a5d7caed915a5e1ec974f("NegativeBinomialFLink", "", boost::python::no_init);
    class_3a9a7082e81a5d7caed915a5e1ec974f.def(boost::python::init<  >(""));
    class_3a9a7082e81a5d7caed915a5e1ec974f.def("inverse", method_pointer_46e4017ec33950f0818d4b287a22691f, "");
    class_3a9a7082e81a5d7caed915a5e1ec974f.def("inverse_derivative", method_pointer_3b94be5fc315529fb49a65e68ca256ce, "");
    class_3a9a7082e81a5d7caed915a5e1ec974f.def("set_distribution", method_pointer_525b05af9e5c57a5a151ba0b2016731c, "");
    class_3a9a7082e81a5d7caed915a5e1ec974f.def("copy", method_pointer_5c40df709e8350e6b437143a1cdd2edd, "");

    if(autowig::Held< class ::statiskit::NegativeBinomialFLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NegativeBinomialFLink >::Type, autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::NegativeBinomialFLink >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::NegativeBinomialFLink, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::NegativeBinomialFLink >::Type, class ::statiskit::NegativeBinomialFLink > > >();
    }

}