#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::OrdinalFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::OrdinalFisherEstimation::Estimator const volatile >(class ::statiskit::glm::OrdinalFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f9ed806194cd59bc865801b0dc314c2f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_139f5ca7eee05cad8f4f86d2ffc9dc54 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._ordinal_fisher_estimation");
    boost::python::object module_139f5ca7eee05cad8f4f86d2ffc9dc54(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_139f5ca7eee05cad8f4f86d2ffc9dc54.c_str()))));
    boost::python::scope().attr("_ordinal_fisher_estimation") = module_139f5ca7eee05cad8f4f86d2ffc9dc54;
    boost::python::scope scope_139f5ca7eee05cad8f4f86d2ffc9dc54 = module_139f5ca7eee05cad8f4f86d2ffc9dc54;
    boost::python::class_< class ::statiskit::glm::OrdinalFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_f9ed806194cd59bc865801b0dc314c2f("Estimator", "", boost::python::no_init);
    class_f9ed806194cd59bc865801b0dc314c2f.def(boost::python::init<  >(""));
    class_f9ed806194cd59bc865801b0dc314c2f.def(boost::python::init< class ::statiskit::glm::OrdinalFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::OrdinalFisherEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation::Estimator >::Type, class ::statiskit::glm::OrdinalFisherEstimation::Estimator > > >();
    }

}