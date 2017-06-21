#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const volatile >(class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_58c77f6664f3529e8db1022b9878185d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_44674f4141db59db9095c98720b63dd0 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__nominal_fisher_estimation_44674f4141db59db9095c98720b63dd0");
    boost::python::object module_44674f4141db59db9095c98720b63dd0(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_44674f4141db59db9095c98720b63dd0.c_str()))));
    boost::python::scope().attr("__nominal_fisher_estimation_44674f4141db59db9095c98720b63dd0") = module_44674f4141db59db9095c98720b63dd0;
    boost::python::scope scope_44674f4141db59db9095c98720b63dd0 = module_44674f4141db59db9095c98720b63dd0;
    boost::python::class_< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, boost::python::bases< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > > class_58c77f6664f3529e8db1022b9878185d("Estimator", "", boost::python::no_init);
    class_58c77f6664f3529e8db1022b9878185d.def(boost::python::init<  >(""));
    class_58c77f6664f3529e8db1022b9878185d.def(boost::python::init< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, autowig::Held< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator > > >();
    }

}