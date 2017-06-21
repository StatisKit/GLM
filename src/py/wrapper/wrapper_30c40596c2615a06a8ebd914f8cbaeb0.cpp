#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator const volatile >(class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_30c40596c2615a06a8ebd914f8cbaeb0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_9ecd3a4e917551a196fd2b5d3ba51a9e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._negative_binomial_fisher_estimation");
    boost::python::object module_9ecd3a4e917551a196fd2b5d3ba51a9e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_9ecd3a4e917551a196fd2b5d3ba51a9e.c_str()))));
    boost::python::scope().attr("_negative_binomial_fisher_estimation") = module_9ecd3a4e917551a196fd2b5d3ba51a9e;
    boost::python::scope scope_9ecd3a4e917551a196fd2b5d3ba51a9e = module_9ecd3a4e917551a196fd2b5d3ba51a9e;
    boost::python::class_< class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_30c40596c2615a06a8ebd914f8cbaeb0("Estimator", "", boost::python::no_init);
    class_30c40596c2615a06a8ebd914f8cbaeb0.def(boost::python::init< double const & >(""));
    class_30c40596c2615a06a8ebd914f8cbaeb0.def(boost::python::init< class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator >::Type, class ::statiskit::glm::NegativeBinomialFisherEstimation::Estimator > > >();
    }

}