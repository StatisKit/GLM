#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ae2403114fe955f2b200dcd43a431976()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_ae2403114fe955f2b200dcd43a431976("_LazyEstimation_ae2403114fe955f2b200dcd43a431976", "", boost::python::no_init);
    class_ae2403114fe955f2b200dcd43a431976.def(boost::python::init<  >(""));
    class_ae2403114fe955f2b200dcd43a431976.def(boost::python::init< class ::statiskit::glm::HierarchicalRegression const * >(""));
    class_ae2403114fe955f2b200dcd43a431976.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Type >();
    }

}