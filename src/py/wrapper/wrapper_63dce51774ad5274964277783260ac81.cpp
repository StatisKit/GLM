#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const volatile * get_pointer<class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const volatile >(class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_63dce51774ad5274964277783260ac81()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned long int const (::statiskit::ConditionalActiveEstimation< ::statiskit::glm::OrdinalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::*method_pointer_b95d3ddfb7655eb9879a35806c897264)() const = &::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::get_response;
    ::statiskit::Indices const & (::statiskit::ConditionalActiveEstimation< ::statiskit::glm::OrdinalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::*method_pointer_2fc4e628066e5461acb9b8154ff38ab9)() const = &::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >::get_explanatories;
    boost::python::class_< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int >, autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_63dce51774ad5274964277783260ac81("_ConditionalActiveEstimation_63dce51774ad5274964277783260ac81", "", boost::python::no_init);
    class_63dce51774ad5274964277783260ac81.def(boost::python::init<  >(""));
    class_63dce51774ad5274964277783260ac81.def(boost::python::init< class ::statiskit::glm::OrdinalRegression const *, struct ::statiskit::MultivariateData const *, unsigned long int const &, ::statiskit::Indices const & >(""));
    class_63dce51774ad5274964277783260ac81.def(boost::python::init< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > const & >(""));
    class_63dce51774ad5274964277783260ac81.def("get_response", method_pointer_b95d3ddfb7655eb9879a35806c897264, "");
    class_63dce51774ad5274964277783260ac81.def("get_explanatories", method_pointer_2fc4e628066e5461acb9b8154ff38ab9, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, unsigned long int > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}