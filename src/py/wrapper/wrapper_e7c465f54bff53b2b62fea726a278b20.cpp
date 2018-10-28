#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > const volatile * get_pointer<class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > const volatile >(class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e7c465f54bff53b2b62fea726a278b20()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    double const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::*method_pointer_da82378dff0757e4a358627e937ecd10)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::get_loglikelihood;
    class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::*method_pointer_55c25c4ff1dc5e38b9ff451b945601db)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::get_loglikelihood_sequence;
    bool const & (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::*method_pointer_f73f12afaf185f66883b5d0704da1544)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::get_converged;
    boost::python::class_< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >, autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > > class_e7c465f54bff53b2b62fea726a278b20("_CategoricalRegressionFisherEstimation_e7c465f54bff53b2b62fea726a278b20", "", boost::python::no_init);
    class_e7c465f54bff53b2b62fea726a278b20.def(boost::python::init<  >(""));
    class_e7c465f54bff53b2b62fea726a278b20.def(boost::python::init< class ::statiskit::glm::OrdinalRegression const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_e7c465f54bff53b2b62fea726a278b20.def(boost::python::init< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > const & >(""));
    class_e7c465f54bff53b2b62fea726a278b20.def("get_loglikelihood", method_pointer_da82378dff0757e4a358627e937ecd10, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e7c465f54bff53b2b62fea726a278b20.def("get_loglikelihood_sequence", method_pointer_55c25c4ff1dc5e38b9ff451b945601db, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e7c465f54bff53b2b62fea726a278b20.def("get_converged", method_pointer_f73f12afaf185f66883b5d0704da1544, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type >();
    }

}