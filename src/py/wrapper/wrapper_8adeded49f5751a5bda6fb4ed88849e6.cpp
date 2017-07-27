#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > const volatile * get_pointer<class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > const volatile >(class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8adeded49f5751a5bda6fb4ed88849e6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    double const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::*method_pointer_d8e7cc51298455d598ecb20ad7be582b)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::get_loglikelihood;
    class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::*method_pointer_ad16153accb15d779aa4229bc2cd9810)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::get_loglikelihood_sequence;
    boost::python::class_< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >, autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > > class_8adeded49f5751a5bda6fb4ed88849e6("_CategoricalRegressionFisherEstimation_8adeded49f5751a5bda6fb4ed88849e6", "", boost::python::no_init);
    class_8adeded49f5751a5bda6fb4ed88849e6.def(boost::python::init<  >(""));
    class_8adeded49f5751a5bda6fb4ed88849e6.def(boost::python::init< class ::statiskit::glm::NominalRegression const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_8adeded49f5751a5bda6fb4ed88849e6.def(boost::python::init< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > const & >(""));
    class_8adeded49f5751a5bda6fb4ed88849e6.def("get_loglikelihood", method_pointer_d8e7cc51298455d598ecb20ad7be582b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8adeded49f5751a5bda6fb4ed88849e6.def("get_loglikelihood_sequence", method_pointer_ad16153accb15d779aa4229bc2cd9810, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type >();
    }

}