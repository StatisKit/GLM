#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const volatile * get_pointer<class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const volatile >(class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7dfb7e4f638653838432f9ba70f71698()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned long int const (::statiskit::ConditionalActiveEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::*method_pointer_32d2efdd6a0e5672a24b065a463399ba)() const = &::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::get_response;
    ::statiskit::Indices const & (::statiskit::ConditionalActiveEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::*method_pointer_a1aba7ab8c7753fabc67da1cf782fce0)() const = &::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::get_explanatories;
    boost::python::class_< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >, autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_7dfb7e4f638653838432f9ba70f71698("_ConditionalActiveEstimation_7dfb7e4f638653838432f9ba70f71698", "", boost::python::no_init);
    class_7dfb7e4f638653838432f9ba70f71698.def(boost::python::init<  >(""));
    class_7dfb7e4f638653838432f9ba70f71698.def(boost::python::init< class ::statiskit::glm::PoissonRegression const *, struct ::statiskit::MultivariateData const *, unsigned long int const &, ::statiskit::Indices const & >(""));
    class_7dfb7e4f638653838432f9ba70f71698.def(boost::python::init< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const & >(""));
    class_7dfb7e4f638653838432f9ba70f71698.def("get_response", method_pointer_32d2efdd6a0e5672a24b065a463399ba, "");
    class_7dfb7e4f638653838432f9ba70f71698.def("get_explanatories", method_pointer_a1aba7ab8c7753fabc67da1cf782fce0, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::Type, class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > > > >();
    }

}