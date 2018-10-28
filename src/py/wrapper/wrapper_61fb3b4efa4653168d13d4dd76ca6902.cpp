#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator const volatile >(class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_61fb3b4efa4653168d13d4dd76ca6902()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_dd7036683c1958718a0654c6090ee93e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._binary_regression_fisher_estimation");
    boost::python::object module_dd7036683c1958718a0654c6090ee93e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dd7036683c1958718a0654c6090ee93e.c_str()))));
    boost::python::scope().attr("_binary_regression_fisher_estimation") = module_dd7036683c1958718a0654c6090ee93e;
    boost::python::scope scope_dd7036683c1958718a0654c6090ee93e = module_dd7036683c1958718a0654c6090ee93e;
    boost::python::class_< class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > > > class_61fb3b4efa4653168d13d4dd76ca6902("Estimator", "", boost::python::no_init);
    class_61fb3b4efa4653168d13d4dd76ca6902.def(boost::python::init<  >(""));
    class_61fb3b4efa4653168d13d4dd76ca6902.def(boost::python::init< class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > >::Type >();
    }

}