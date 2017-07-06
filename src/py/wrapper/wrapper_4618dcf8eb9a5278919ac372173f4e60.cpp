#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator const volatile >(class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4618dcf8eb9a5278919ac372173f4e60()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_cddd11990be752b68abb161f93e30a49 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._binomial_regression_fisher_estimation");
    boost::python::object module_cddd11990be752b68abb161f93e30a49(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_cddd11990be752b68abb161f93e30a49.c_str()))));
    boost::python::scope().attr("_binomial_regression_fisher_estimation") = module_cddd11990be752b68abb161f93e30a49;
    boost::python::scope scope_cddd11990be752b68abb161f93e30a49 = module_cddd11990be752b68abb161f93e30a49;
    unsigned int  (::statiskit::glm::BinomialRegressionFisherEstimation::Estimator::*method_pointer_a6635b1d44d657a18288036e306e7b45)() const = &::statiskit::glm::BinomialRegressionFisherEstimation::Estimator::get_kappa;
    void  (::statiskit::glm::BinomialRegressionFisherEstimation::Estimator::*method_pointer_870d85387fea50029e3b7dd3886d87f8)(unsigned int const &) = &::statiskit::glm::BinomialRegressionFisherEstimation::Estimator::set_kappa;
    boost::python::class_< class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_4618dcf8eb9a5278919ac372173f4e60("Estimator", "", boost::python::no_init);
    class_4618dcf8eb9a5278919ac372173f4e60.def(boost::python::init<  >(""));
    class_4618dcf8eb9a5278919ac372173f4e60.def(boost::python::init< class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator const & >(""));
    class_4618dcf8eb9a5278919ac372173f4e60.def("get_kappa", method_pointer_a6635b1d44d657a18288036e306e7b45, "");
    class_4618dcf8eb9a5278919ac372173f4e60.def("set_kappa", method_pointer_870d85387fea50029e3b7dd3886d87f8, "");

    if(autowig::Held< class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}