#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::NegativeBinomialRegression const volatile * get_pointer<class ::statiskit::glm::NegativeBinomialRegression const volatile >(class ::statiskit::glm::NegativeBinomialRegression const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_45b2ac2570a857b5a19c79be5c650b64()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  (::statiskit::glm::NegativeBinomialRegression::*method_pointer_e66a2e762f6f5c2c884c9bf23741cbff)() const = &::statiskit::glm::NegativeBinomialRegression::copy;
    boost::python::class_< class ::statiskit::glm::NegativeBinomialRegression, autowig::Held< class ::statiskit::glm::NegativeBinomialRegression >::Type, boost::python::bases< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > > > class_45b2ac2570a857b5a19c79be5c650b64("NegativeBinomialRegression", "", boost::python::no_init);
    class_45b2ac2570a857b5a19c79be5c650b64.def(boost::python::init< double const &, class ::statiskit::ScalarPredictor const &, struct ::statiskit::NegativeBinomialLink const & >(""));
    class_45b2ac2570a857b5a19c79be5c650b64.def("copy", method_pointer_e66a2e762f6f5c2c884c9bf23741cbff, "");

    if(autowig::Held< class ::statiskit::glm::NegativeBinomialRegression >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::NegativeBinomialRegression >::Type, autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::NegativeBinomialRegression >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::NegativeBinomialRegression, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::NegativeBinomialRegression >::Type, class ::statiskit::glm::NegativeBinomialRegression > > >();
    }

}