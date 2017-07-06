#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator const volatile >(class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d774945872b75993aa2e7ebb0b2c5638()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_24e0883e92ab577e9f3795eb169f1b08 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._negative_binomial_regression_fisher_estimation");
    boost::python::object module_24e0883e92ab577e9f3795eb169f1b08(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_24e0883e92ab577e9f3795eb169f1b08.c_str()))));
    boost::python::scope().attr("_negative_binomial_regression_fisher_estimation") = module_24e0883e92ab577e9f3795eb169f1b08;
    boost::python::scope scope_24e0883e92ab577e9f3795eb169f1b08 = module_24e0883e92ab577e9f3795eb169f1b08;
    double  (::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator::*method_pointer_2f46226117565a1293b219f00223cd92)() const = &::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator::get_kappa;
    void  (::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator::*method_pointer_ea911849e0d85f6b803b1c67ce8bc13a)(double const &) = &::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator::set_kappa;
    boost::python::class_< class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > > class_d774945872b75993aa2e7ebb0b2c5638("Estimator", "", boost::python::no_init);
    class_d774945872b75993aa2e7ebb0b2c5638.def(boost::python::init<  >(""));
    class_d774945872b75993aa2e7ebb0b2c5638.def(boost::python::init< class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator const & >(""));
    class_d774945872b75993aa2e7ebb0b2c5638.def("get_kappa", method_pointer_2f46226117565a1293b219f00223cd92, "");
    class_d774945872b75993aa2e7ebb0b2c5638.def("set_kappa", method_pointer_ea911849e0d85f6b803b1c67ce8bc13a, "");

    if(autowig::Held< class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NegativeBinomialRegressionFisherEstimation::Estimator, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > >::Type >();
    }

}