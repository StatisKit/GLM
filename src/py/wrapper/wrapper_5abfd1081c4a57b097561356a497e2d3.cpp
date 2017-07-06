#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile >(class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5abfd1081c4a57b097561356a497e2d3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_00a9d045f80c53d9980075eba475494d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__ordinal_regression_fisher_estimation_00a9d045f80c53d9980075eba475494d");
    boost::python::object module_00a9d045f80c53d9980075eba475494d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_00a9d045f80c53d9980075eba475494d.c_str()))));
    boost::python::scope().attr("__ordinal_regression_fisher_estimation_00a9d045f80c53d9980075eba475494d") = module_00a9d045f80c53d9980075eba475494d;
    boost::python::scope scope_00a9d045f80c53d9980075eba475494d = module_00a9d045f80c53d9980075eba475494d;
    boost::python::class_< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > > > class_5abfd1081c4a57b097561356a497e2d3("Estimator", "", boost::python::no_init);
    class_5abfd1081c4a57b097561356a497e2d3.def(boost::python::init<  >(""));
    class_5abfd1081c4a57b097561356a497e2d3.def(boost::python::init< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > >::Type >();
    }

}