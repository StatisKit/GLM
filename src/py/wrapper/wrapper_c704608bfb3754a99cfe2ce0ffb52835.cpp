#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator const volatile >(class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c704608bfb3754a99cfe2ce0ffb52835()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_b30f67b27f955f55b90d66675f2ef339 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._ordinal_regression_fisher_estimation");
    boost::python::object module_b30f67b27f955f55b90d66675f2ef339(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b30f67b27f955f55b90d66675f2ef339.c_str()))));
    boost::python::scope().attr("_ordinal_regression_fisher_estimation") = module_b30f67b27f955f55b90d66675f2ef339;
    boost::python::scope scope_b30f67b27f955f55b90d66675f2ef339 = module_b30f67b27f955f55b90d66675f2ef339;
    boost::python::class_< class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > > > class_c704608bfb3754a99cfe2ce0ffb52835("Estimator", "", boost::python::no_init);
    class_c704608bfb3754a99cfe2ce0ffb52835.def(boost::python::init<  >(""));
    class_c704608bfb3754a99cfe2ce0ffb52835.def(boost::python::init< class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::OrdinalRegressionFisherEstimation::Estimator, class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > >::Type >();
    }

}