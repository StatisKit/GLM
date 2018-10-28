#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f7aeef9c4cba52dc88b65cef7a2cfc55()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::glm::HierarchicalRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_a4fe2445de3e56f8bade09fd1ad331ee)() const = &::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > > class_f7aeef9c4cba52dc88b65cef7a2cfc55("_ActiveEstimation_f7aeef9c4cba52dc88b65cef7a2cfc55", "", boost::python::no_init);
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def(boost::python::init<  >(""));
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def(boost::python::init< class ::statiskit::UnivariateConditionalData const * >(""));
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def(boost::python::init< class ::statiskit::glm::HierarchicalRegression const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >(""));
    class_f7aeef9c4cba52dc88b65cef7a2cfc55.def("get_data", method_pointer_a4fe2445de3e56f8bade09fd1ad331ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type >();
    }

}