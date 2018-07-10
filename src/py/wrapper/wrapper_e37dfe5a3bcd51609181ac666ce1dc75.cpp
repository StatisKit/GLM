#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile >(class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e37dfe5a3bcd51609181ac666ce1dc75()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_32ca2b696d6e515c9a68038164b60ae4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__cumulative_regression_fisher_estimation_32ca2b696d6e515c9a68038164b60ae4");
    boost::python::object module_32ca2b696d6e515c9a68038164b60ae4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_32ca2b696d6e515c9a68038164b60ae4.c_str()))));
    boost::python::scope().attr("__cumulative_regression_fisher_estimation_32ca2b696d6e515c9a68038164b60ae4") = module_32ca2b696d6e515c9a68038164b60ae4;
    boost::python::scope scope_32ca2b696d6e515c9a68038164b60ae4 = module_32ca2b696d6e515c9a68038164b60ae4;
    boost::python::class_< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > > class_e37dfe5a3bcd51609181ac666ce1dc75("Estimator", "", boost::python::no_init);
    class_e37dfe5a3bcd51609181ac666ce1dc75.def(boost::python::init<  >(""));
    class_e37dfe5a3bcd51609181ac666ce1dc75.def(boost::python::init< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > >::Type >();
    }

}