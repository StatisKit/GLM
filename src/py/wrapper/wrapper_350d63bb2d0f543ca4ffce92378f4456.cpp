#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > const volatile * get_pointer<class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > const volatile >(class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_350d63bb2d0f543ca4ffce92378f4456()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    double const & (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::OrdinalRegression >::*method_pointer_92317a2c98a8540087204586e5f66768)() const = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::get_loglikelihood;
    class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::OrdinalRegression >::*method_pointer_10dd83766be25014b5caea628e30c007)() const = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::get_loglikelihood_sequence;
    boost::python::class_< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Type, boost::python::bases< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation, unsigned long int > > > class_350d63bb2d0f543ca4ffce92378f4456("_CategoricalFisherEstimation_350d63bb2d0f543ca4ffce92378f4456", "", boost::python::no_init);
    class_350d63bb2d0f543ca4ffce92378f4456.def(boost::python::init<  >(""));
    class_350d63bb2d0f543ca4ffce92378f4456.def(boost::python::init< class ::statiskit::glm::OrdinalRegression const *, struct ::statiskit::MultivariateData const *, ::statiskit::Index const &, ::statiskit::Indices const & >(""));
    class_350d63bb2d0f543ca4ffce92378f4456.def(boost::python::init< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > const & >(""));
    class_350d63bb2d0f543ca4ffce92378f4456.def("get_loglikelihood", method_pointer_92317a2c98a8540087204586e5f66768, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_350d63bb2d0f543ca4ffce92378f4456.def("get_loglikelihood_sequence", method_pointer_10dd83766be25014b5caea628e30c007, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Type, autowig::Held< class ::statiskit::ConditionalActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation, unsigned long int > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Type, class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression > > > >();
    }

}