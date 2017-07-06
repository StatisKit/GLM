#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile >(class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7383f6db18d159d5b9851d18ade5bcd4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_7e22cced0c3f560b82928871cb418b8e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__cumulative_regression_fisher_estimation_7e22cced0c3f560b82928871cb418b8e");
    boost::python::object module_7e22cced0c3f560b82928871cb418b8e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7e22cced0c3f560b82928871cb418b8e.c_str()))));
    boost::python::scope().attr("__cumulative_regression_fisher_estimation_7e22cced0c3f560b82928871cb418b8e") = module_7e22cced0c3f560b82928871cb418b8e;
    boost::python::scope scope_7e22cced0c3f560b82928871cb418b8e = module_7e22cced0c3f560b82928871cb418b8e;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::CumulativeRegressionFisherEstimation< ::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_501cbca9a918533d835af14de7bd2a22)() const = &::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::get_beta_init;
    void  (::statiskit::glm::CumulativeRegressionFisherEstimation< ::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_f57d61320b94576cb7f09b47b27edc32)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::set_beta_init;
    boost::python::class_< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::bases< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > class_7383f6db18d159d5b9851d18ade5bcd4("Estimator", "", boost::python::no_init);
    class_7383f6db18d159d5b9851d18ade5bcd4.def(boost::python::init<  >(""));
    class_7383f6db18d159d5b9851d18ade5bcd4.def(boost::python::init< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const & >(""));
    class_7383f6db18d159d5b9851d18ade5bcd4.def("get_beta_init", method_pointer_501cbca9a918533d835af14de7bd2a22, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7383f6db18d159d5b9851d18ade5bcd4.def("set_beta_init", method_pointer_f57d61320b94576cb7f09b47b27edc32, "");

    if(autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type >();
    }

}