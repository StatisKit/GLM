#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::ProportionalOrdinalFisherEstimation const volatile * get_pointer<struct ::statiskit::glm::ProportionalOrdinalFisherEstimation const volatile >(struct ::statiskit::glm::ProportionalOrdinalFisherEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0af49efb7df4586d857d46ea09ecd1c3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::ProportionalOrdinalFisherEstimation, autowig::Held< struct ::statiskit::glm::ProportionalOrdinalFisherEstimation >::Type, boost::python::bases< struct ::statiskit::glm::OrdinalFisherEstimation > > class_0af49efb7df4586d857d46ea09ecd1c3("ProportionalOrdinalFisherEstimation", "", boost::python::no_init);
    class_0af49efb7df4586d857d46ea09ecd1c3.def(boost::python::init< class ::statiskit::glm::OrdinalRegression const *, struct ::statiskit::MultivariateData const *, ::statiskit::Index const &, ::statiskit::Indices const & >(""));
    class_0af49efb7df4586d857d46ea09ecd1c3.def(boost::python::init< struct ::statiskit::glm::ProportionalOrdinalFisherEstimation const & >(""));

    if(autowig::Held< struct ::statiskit::glm::ProportionalOrdinalFisherEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::ProportionalOrdinalFisherEstimation >::Type, autowig::Held< struct ::statiskit::glm::OrdinalFisherEstimation >::Type >();
    }

}