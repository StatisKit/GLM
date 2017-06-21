#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > const volatile * get_pointer<class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > const volatile >(class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fa2072e0d0ec5b58bff711c509f5d5e0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >, autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > >::Type, boost::python::bases< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression > > > class_fa2072e0d0ec5b58bff711c509f5d5e0("_ConstrainedFisherEstimation_fa2072e0d0ec5b58bff711c509f5d5e0", "", boost::python::no_init);
    class_fa2072e0d0ec5b58bff711c509f5d5e0.def(boost::python::init<  >(""));
    class_fa2072e0d0ec5b58bff711c509f5d5e0.def(boost::python::init< class ::statiskit::glm::NominalRegression const *, struct ::statiskit::MultivariateData const *, ::statiskit::Index const &, ::statiskit::Indices const & >(""));
    class_fa2072e0d0ec5b58bff711c509f5d5e0.def(boost::python::init< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > const & >(""));

    if(autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > >::Type, class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression > > > >();
    }

}