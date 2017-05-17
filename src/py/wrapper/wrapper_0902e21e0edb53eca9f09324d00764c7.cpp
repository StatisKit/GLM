#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::NominalFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::NominalFisherEstimation::Estimator const volatile >(class ::statiskit::glm::NominalFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0902e21e0edb53eca9f09324d00764c7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_27af499a4eff57a78b41a7e9282ed3ec = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._nominal_fisher_estimation");
    boost::python::object module_27af499a4eff57a78b41a7e9282ed3ec(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_27af499a4eff57a78b41a7e9282ed3ec.c_str()))));
    boost::python::scope().attr("_nominal_fisher_estimation") = module_27af499a4eff57a78b41a7e9282ed3ec;
    boost::python::scope scope_27af499a4eff57a78b41a7e9282ed3ec = module_27af499a4eff57a78b41a7e9282ed3ec;
    boost::python::class_< class ::statiskit::glm::NominalFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::NominalFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_0902e21e0edb53eca9f09324d00764c7("Estimator", "", boost::python::no_init);
    class_0902e21e0edb53eca9f09324d00764c7.def(boost::python::init<  >(""));
    class_0902e21e0edb53eca9f09324d00764c7.def(boost::python::init< class ::statiskit::glm::NominalFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::NominalFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::NominalFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::NominalFisherEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::NominalFisherEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::NominalFisherEstimation::Estimator >::Type, class ::statiskit::glm::NominalFisherEstimation::Estimator > > >();
    }

}