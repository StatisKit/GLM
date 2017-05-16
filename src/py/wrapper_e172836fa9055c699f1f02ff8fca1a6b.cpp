#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator const volatile >(class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e172836fa9055c699f1f02ff8fca1a6b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_0af49efb7df4586d857d46ea09ecd1c3 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._proportional_ordinal_fisher_estimation");
    boost::python::object module_0af49efb7df4586d857d46ea09ecd1c3(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0af49efb7df4586d857d46ea09ecd1c3.c_str()))));
    boost::python::scope().attr("_proportional_ordinal_fisher_estimation") = module_0af49efb7df4586d857d46ea09ecd1c3;
    boost::python::scope scope_0af49efb7df4586d857d46ea09ecd1c3 = module_0af49efb7df4586d857d46ea09ecd1c3;
    boost::python::class_< class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::OrdinalFisherEstimation::Estimator > > class_e172836fa9055c699f1f02ff8fca1a6b("Estimator", "", boost::python::no_init);
    class_e172836fa9055c699f1f02ff8fca1a6b.def(boost::python::init<  >(""));
    class_e172836fa9055c699f1f02ff8fca1a6b.def(boost::python::init< class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator >::Type, class ::statiskit::glm::ProportionalOrdinalFisherEstimation::Estimator > > >();
    }

}