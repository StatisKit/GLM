#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator const volatile * get_pointer<class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator const volatile >(class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_957d6c322e915a51a2117bfe24ef629f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_42c4b95e3c2959d78ff2080715b8c2eb = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._negative_binomial_regression_x2_estimation");
    boost::python::object module_42c4b95e3c2959d78ff2080715b8c2eb(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_42c4b95e3c2959d78ff2080715b8c2eb.c_str()))));
    boost::python::scope().attr("_negative_binomial_regression_x2_estimation") = module_42c4b95e3c2959d78ff2080715b8c2eb;
    boost::python::scope scope_42c4b95e3c2959d78ff2080715b8c2eb = module_42c4b95e3c2959d78ff2080715b8c2eb;
    boost::python::class_< class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator, autowig::Held< class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_957d6c322e915a51a2117bfe24ef629f("Estimator", "", boost::python::no_init);
    class_957d6c322e915a51a2117bfe24ef629f.def(boost::python::init<  >(""));
    class_957d6c322e915a51a2117bfe24ef629f.def(boost::python::init< class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::NegativeBinomialRegressionX2Estimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}