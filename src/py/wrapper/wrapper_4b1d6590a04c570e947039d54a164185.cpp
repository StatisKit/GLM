#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::PoissonFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::PoissonFisherEstimation::Estimator const volatile >(class ::statiskit::glm::PoissonFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4b1d6590a04c570e947039d54a164185()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_6aecb5149cd65abaa8c07bc062dc6a32 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._poisson_fisher_estimation");
    boost::python::object module_6aecb5149cd65abaa8c07bc062dc6a32(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6aecb5149cd65abaa8c07bc062dc6a32.c_str()))));
    boost::python::scope().attr("_poisson_fisher_estimation") = module_6aecb5149cd65abaa8c07bc062dc6a32;
    boost::python::scope scope_6aecb5149cd65abaa8c07bc062dc6a32 = module_6aecb5149cd65abaa8c07bc062dc6a32;
    boost::python::class_< class ::statiskit::glm::PoissonFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::PoissonFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_4b1d6590a04c570e947039d54a164185("Estimator", "", boost::python::no_init);
    class_4b1d6590a04c570e947039d54a164185.def(boost::python::init<  >(""));
    class_4b1d6590a04c570e947039d54a164185.def(boost::python::init< class ::statiskit::glm::PoissonFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::PoissonFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::PoissonFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}