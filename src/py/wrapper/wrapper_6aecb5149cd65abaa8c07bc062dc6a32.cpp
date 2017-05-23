#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::PoissonFisherEstimation const volatile * get_pointer<struct ::statiskit::glm::PoissonFisherEstimation const volatile >(struct ::statiskit::glm::PoissonFisherEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6aecb5149cd65abaa8c07bc062dc6a32()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::PoissonFisherEstimation, autowig::Held< struct ::statiskit::glm::PoissonFisherEstimation >::Type, boost::python::bases< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_6aecb5149cd65abaa8c07bc062dc6a32("PoissonFisherEstimation", "", boost::python::no_init);
    class_6aecb5149cd65abaa8c07bc062dc6a32.def(boost::python::init< class ::statiskit::glm::PoissonRegression const *, struct ::statiskit::MultivariateData const *, ::statiskit::Index const &, ::statiskit::Indices const & >(""));
    class_6aecb5149cd65abaa8c07bc062dc6a32.def(boost::python::init< struct ::statiskit::glm::PoissonFisherEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::glm::PoissonFisherEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::PoissonFisherEstimation >::Type, autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}