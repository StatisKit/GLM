#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation const volatile * get_pointer<struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation const volatile >(struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_24e0883e92ab577e9f3795eb169f1b08()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation, autowig::Held< struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation >::Type, boost::python::bases< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_24e0883e92ab577e9f3795eb169f1b08("NegativeBinomialRegressionFisherEstimation", "", boost::python::no_init);
    class_24e0883e92ab577e9f3795eb169f1b08.def(boost::python::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_24e0883e92ab577e9f3795eb169f1b08.def(boost::python::init< struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::NegativeBinomialRegressionFisherEstimation >::Type, autowig::Held< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}