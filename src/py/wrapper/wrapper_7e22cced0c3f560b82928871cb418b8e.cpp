#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > const volatile * get_pointer<class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > const volatile >(class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7e22cced0c3f560b82928871cb418b8e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >, autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > >::Type, boost::python::bases< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > > > class_7e22cced0c3f560b82928871cb418b8e("_CumulativeRegressionFisherEstimation_7e22cced0c3f560b82928871cb418b8e", "", boost::python::no_init);
    class_7e22cced0c3f560b82928871cb418b8e.def(boost::python::init<  >(""));
    class_7e22cced0c3f560b82928871cb418b8e.def(boost::python::init< class ::statiskit::glm::OrdinalRegression const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_7e22cced0c3f560b82928871cb418b8e.def(boost::python::init< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > const & >(""));

    if(autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > >::Type, autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > > >::Type >();
    }

}