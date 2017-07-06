#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation const volatile * get_pointer<struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation const volatile >(struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a4bfff7e28ee596b990e2eb2c1c236b4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation, autowig::Held< struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_a4bfff7e28ee596b990e2eb2c1c236b4("BinomialRegressionSteepestAscentEstimation", "", boost::python::no_init);
    class_a4bfff7e28ee596b990e2eb2c1c236b4.def(boost::python::init< class ::statiskit::glm::BinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_a4bfff7e28ee596b990e2eb2c1c236b4.def(boost::python::init< struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::BinomialRegressionSteepestAscentEstimation >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}