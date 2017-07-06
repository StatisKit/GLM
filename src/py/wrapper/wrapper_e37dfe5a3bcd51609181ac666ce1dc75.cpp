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
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::CumulativeRegressionFisherEstimation< ::statiskit::glm::ProportionalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_16ea26af236059acaf95a780f004c177)() const = &::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::get_beta_init;
    void  (::statiskit::glm::CumulativeRegressionFisherEstimation< ::statiskit::glm::ProportionalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_c1570e3f0c6658ddab1072bff3db0461)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::set_beta_init;
    boost::python::class_< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::bases< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > class_e37dfe5a3bcd51609181ac666ce1dc75("Estimator", "", boost::python::no_init);
    class_e37dfe5a3bcd51609181ac666ce1dc75.def(boost::python::init<  >(""));
    class_e37dfe5a3bcd51609181ac666ce1dc75.def(boost::python::init< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const & >(""));
    class_e37dfe5a3bcd51609181ac666ce1dc75.def("get_beta_init", method_pointer_16ea26af236059acaf95a780f004c177, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e37dfe5a3bcd51609181ac666ce1dc75.def("set_beta_init", method_pointer_c1570e3f0c6658ddab1072bff3db0461, "");

    if(autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ProportionalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type >();
    }

}