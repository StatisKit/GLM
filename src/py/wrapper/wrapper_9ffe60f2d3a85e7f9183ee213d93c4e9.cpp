#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile >(class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9ffe60f2d3a85e7f9183ee213d93c4e9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_cfa67a426dc55e839cc7c53cc1d6e8f7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__ordinal_fisher_estimation_cfa67a426dc55e839cc7c53cc1d6e8f7");
    boost::python::object module_cfa67a426dc55e839cc7c53cc1d6e8f7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_cfa67a426dc55e839cc7c53cc1d6e8f7.c_str()))));
    boost::python::scope().attr("__ordinal_fisher_estimation_cfa67a426dc55e839cc7c53cc1d6e8f7") = module_cfa67a426dc55e839cc7c53cc1d6e8f7;
    boost::python::scope scope_cfa67a426dc55e839cc7c53cc1d6e8f7 = module_cfa67a426dc55e839cc7c53cc1d6e8f7;
    boost::python::class_< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::bases< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > > class_9ffe60f2d3a85e7f9183ee213d93c4e9("Estimator", "", boost::python::no_init);
    class_9ffe60f2d3a85e7f9183ee213d93c4e9.def(boost::python::init<  >(""));
    class_9ffe60f2d3a85e7f9183ee213d93c4e9.def(boost::python::init< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, autowig::Held< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > >();
    }

}