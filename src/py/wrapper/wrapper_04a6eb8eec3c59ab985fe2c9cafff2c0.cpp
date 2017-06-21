#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::BinomialFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::BinomialFisherEstimation::Estimator const volatile >(class ::statiskit::glm::BinomialFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_04a6eb8eec3c59ab985fe2c9cafff2c0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_1b6b8ebb4a2d5b0ab97373123f39fe3c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._binomial_fisher_estimation");
    boost::python::object module_1b6b8ebb4a2d5b0ab97373123f39fe3c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_1b6b8ebb4a2d5b0ab97373123f39fe3c.c_str()))));
    boost::python::scope().attr("_binomial_fisher_estimation") = module_1b6b8ebb4a2d5b0ab97373123f39fe3c;
    boost::python::scope scope_1b6b8ebb4a2d5b0ab97373123f39fe3c = module_1b6b8ebb4a2d5b0ab97373123f39fe3c;
    boost::python::class_< class ::statiskit::glm::BinomialFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::BinomialFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_04a6eb8eec3c59ab985fe2c9cafff2c0("Estimator", "", boost::python::no_init);
    class_04a6eb8eec3c59ab985fe2c9cafff2c0.def(boost::python::init< unsigned int const & >(""));
    class_04a6eb8eec3c59ab985fe2c9cafff2c0.def(boost::python::init< class ::statiskit::glm::BinomialFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::BinomialFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::BinomialFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::BinomialFisherEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::BinomialFisherEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::BinomialFisherEstimation::Estimator >::Type, class ::statiskit::glm::BinomialFisherEstimation::Estimator > > >();
    }

}