#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::OrdinalFisherEstimation const volatile * get_pointer<struct ::statiskit::glm::OrdinalFisherEstimation const volatile >(struct ::statiskit::glm::OrdinalFisherEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_139f5ca7eee05cad8f4f86d2ffc9dc54()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::OrdinalFisherEstimation, autowig::Held< struct ::statiskit::glm::OrdinalFisherEstimation >::Type, boost::python::bases< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_139f5ca7eee05cad8f4f86d2ffc9dc54("OrdinalFisherEstimation", "", boost::python::no_init);
    class_139f5ca7eee05cad8f4f86d2ffc9dc54.def(boost::python::init< class ::statiskit::glm::OrdinalRegression const *, struct ::statiskit::MultivariateData const *, ::statiskit::Index const &, ::statiskit::Indices const & >(""));
    class_139f5ca7eee05cad8f4f86d2ffc9dc54.def(boost::python::init< struct ::statiskit::glm::OrdinalFisherEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::glm::OrdinalFisherEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::OrdinalFisherEstimation >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}