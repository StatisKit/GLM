#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const volatile * get_pointer<class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const volatile >(class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fd75b8075a8d58138467acdcff36234e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned long int const (::statiskit::ConditionalActiveEstimation< ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::*method_pointer_a2e3457d6e965933b69e168f6922a965)() const = &::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::get_response;
    ::statiskit::Indices const & (::statiskit::ConditionalActiveEstimation< ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::*method_pointer_850a1c12d6af58ecbc732831bed24836)() const = &::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::get_explanatories;
    boost::python::class_< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >, autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_fd75b8075a8d58138467acdcff36234e("_ConditionalActiveEstimation_fd75b8075a8d58138467acdcff36234e", "", boost::python::no_init);
    class_fd75b8075a8d58138467acdcff36234e.def(boost::python::init<  >(""));
    class_fd75b8075a8d58138467acdcff36234e.def(boost::python::init< class ::statiskit::glm::NegativeBinomialRegression const *, struct ::statiskit::MultivariateData const *, unsigned long int const &, ::statiskit::Indices const & >(""));
    class_fd75b8075a8d58138467acdcff36234e.def(boost::python::init< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const & >(""));
    class_fd75b8075a8d58138467acdcff36234e.def("get_response", method_pointer_a2e3457d6e965933b69e168f6922a965, "");
    class_fd75b8075a8d58138467acdcff36234e.def("get_explanatories", method_pointer_850a1c12d6af58ecbc732831bed24836, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}