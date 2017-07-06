#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation const volatile * get_pointer<struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation const volatile >(struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_42c4b95e3c2959d78ff2080715b8c2eb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation, autowig::Held< struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_42c4b95e3c2959d78ff2080715b8c2eb("NegativeBinomialRegressionX2Estimation", "", boost::python::no_init);
    class_42c4b95e3c2959d78ff2080715b8c2eb.def(boost::python::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_42c4b95e3c2959d78ff2080715b8c2eb.def(boost::python::init< struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation const & >(""));

    if(autowig::Held< struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::NegativeBinomialRegressionX2Estimation >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}