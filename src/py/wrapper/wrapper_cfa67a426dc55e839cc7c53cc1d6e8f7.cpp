#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > const volatile * get_pointer<class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > const volatile >(class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cfa67a426dc55e839cc7c53cc1d6e8f7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >, autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > >::Type, boost::python::bases< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > > class_cfa67a426dc55e839cc7c53cc1d6e8f7("_OrdinalFisherEstimation_cfa67a426dc55e839cc7c53cc1d6e8f7", "", boost::python::no_init);
    class_cfa67a426dc55e839cc7c53cc1d6e8f7.def(boost::python::init<  >(""));
    class_cfa67a426dc55e839cc7c53cc1d6e8f7.def(boost::python::init< class ::statiskit::glm::OrdinalRegression const *, struct ::statiskit::MultivariateData const *, ::statiskit::Index const &, ::statiskit::Indices const & >(""));
    class_cfa67a426dc55e839cc7c53cc1d6e8f7.def(boost::python::init< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > const & >(""));

    if(autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > >::Type, autowig::Held< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > >::Type, class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > > > >();
    }

}