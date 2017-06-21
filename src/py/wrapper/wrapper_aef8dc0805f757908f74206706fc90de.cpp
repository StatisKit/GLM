#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile >(class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aef8dc0805f757908f74206706fc90de()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_93d7d35bf23c54ada36132f3eee0ed19 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__cumulative_fisher_estimation_93d7d35bf23c54ada36132f3eee0ed19");
    boost::python::object module_93d7d35bf23c54ada36132f3eee0ed19(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_93d7d35bf23c54ada36132f3eee0ed19.c_str()))));
    boost::python::scope().attr("__cumulative_fisher_estimation_93d7d35bf23c54ada36132f3eee0ed19") = module_93d7d35bf23c54ada36132f3eee0ed19;
    boost::python::scope scope_93d7d35bf23c54ada36132f3eee0ed19 = module_93d7d35bf23c54ada36132f3eee0ed19;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::CumulativeFisherEstimation< ::statiskit::glm::ProportionalFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_7cb03ab4a52a5707b0d936f0844ad280)() const = &::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::get_beta_init;
    void  (::statiskit::glm::CumulativeFisherEstimation< ::statiskit::glm::ProportionalFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_15cb10ac88c45242a9112e9a33dc52bb)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::set_beta_init;
    boost::python::class_< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::bases< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > class_aef8dc0805f757908f74206706fc90de("Estimator", "", boost::python::no_init);
    class_aef8dc0805f757908f74206706fc90de.def(boost::python::init<  >(""));
    class_aef8dc0805f757908f74206706fc90de.def(boost::python::init< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const & >(""));
    class_aef8dc0805f757908f74206706fc90de.def("get_beta_init", method_pointer_7cb03ab4a52a5707b0d936f0844ad280, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aef8dc0805f757908f74206706fc90de.def("set_beta_init", method_pointer_15cb10ac88c45242a9112e9a33dc52bb, "");

    if(autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > >();
    }

}