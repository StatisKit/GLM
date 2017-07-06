#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator const volatile >(class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0254773f16755121a7fe9d2e331d0a91()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_a4bfff7e28ee596b990e2eb2c1c236b4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._binomial_regression_steepest_ascent_estimation");
    boost::python::object module_a4bfff7e28ee596b990e2eb2c1c236b4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a4bfff7e28ee596b990e2eb2c1c236b4.c_str()))));
    boost::python::scope().attr("_binomial_regression_steepest_ascent_estimation") = module_a4bfff7e28ee596b990e2eb2c1c236b4;
    boost::python::scope scope_a4bfff7e28ee596b990e2eb2c1c236b4 = module_a4bfff7e28ee596b990e2eb2c1c236b4;
    boost::python::class_< class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator, autowig::Held< class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_0254773f16755121a7fe9d2e331d0a91("Estimator", "", boost::python::no_init);
    class_0254773f16755121a7fe9d2e331d0a91.def(boost::python::init<  >(""));
    class_0254773f16755121a7fe9d2e331d0a91.def(boost::python::init< class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::BinomialRegressionSteepestAscentEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}