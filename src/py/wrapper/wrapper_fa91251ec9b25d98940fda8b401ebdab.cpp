#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fa91251ec9b25d98940fda8b401ebdab()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_fa91251ec9b25d98940fda8b401ebdab("_LazyEstimation_fa91251ec9b25d98940fda8b401ebdab", "", boost::python::no_init);
    class_fa91251ec9b25d98940fda8b401ebdab.def(boost::python::init<  >(""));
    class_fa91251ec9b25d98940fda8b401ebdab.def(boost::python::init< class ::statiskit::glm::OrdinalRegression const * >(""));
    class_fa91251ec9b25d98940fda8b401ebdab.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > >();
    }

}