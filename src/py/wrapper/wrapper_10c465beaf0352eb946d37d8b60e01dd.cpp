#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::ProportionalNominalFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::ProportionalNominalFisherEstimation::Estimator const volatile >(class ::statiskit::glm::ProportionalNominalFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_10c465beaf0352eb946d37d8b60e01dd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_e3f931e4b34f58329130a51d0f0212e8 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._proportional_nominal_fisher_estimation");
    boost::python::object module_e3f931e4b34f58329130a51d0f0212e8(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e3f931e4b34f58329130a51d0f0212e8.c_str()))));
    boost::python::scope().attr("_proportional_nominal_fisher_estimation") = module_e3f931e4b34f58329130a51d0f0212e8;
    boost::python::scope scope_e3f931e4b34f58329130a51d0f0212e8 = module_e3f931e4b34f58329130a51d0f0212e8;
    boost::python::class_< class ::statiskit::glm::ProportionalNominalFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::ProportionalNominalFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::NominalFisherEstimation::Estimator > > class_10c465beaf0352eb946d37d8b60e01dd("Estimator", "", boost::python::no_init);
    class_10c465beaf0352eb946d37d8b60e01dd.def(boost::python::init<  >(""));
    class_10c465beaf0352eb946d37d8b60e01dd.def(boost::python::init< class ::statiskit::glm::ProportionalNominalFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::ProportionalNominalFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ProportionalNominalFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::NominalFisherEstimation::Estimator >::Type >();
    }

}