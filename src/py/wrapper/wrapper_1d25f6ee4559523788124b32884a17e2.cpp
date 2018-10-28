#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::HierarchicalRegressionEstimation const volatile * get_pointer<class ::statiskit::glm::HierarchicalRegressionEstimation const volatile >(class ::statiskit::glm::HierarchicalRegressionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1d25f6ee4559523788124b32884a17e2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::UnivariateConditionalDistributionEstimation const * (::statiskit::glm::HierarchicalRegressionEstimation::*method_pointer_ccf4607f700f542f94f0bf558a260c25)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::glm::HierarchicalRegressionEstimation::get_estimation;
    boost::python::class_< class ::statiskit::glm::HierarchicalRegressionEstimation, autowig::Held< class ::statiskit::glm::HierarchicalRegressionEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > > class_1d25f6ee4559523788124b32884a17e2("HierarchicalRegressionEstimation", "", boost::python::no_init);
    class_1d25f6ee4559523788124b32884a17e2.def(boost::python::init<  >(""));
    class_1d25f6ee4559523788124b32884a17e2.def(boost::python::init< class ::statiskit::glm::HierarchicalRegression const *, ::statiskit::UnivariateConditionalDistributionEstimation::data_type const * >(""));
    class_1d25f6ee4559523788124b32884a17e2.def(boost::python::init< class ::statiskit::glm::HierarchicalRegressionEstimation const & >(""));
    class_1d25f6ee4559523788124b32884a17e2.def("get_estimation", method_pointer_ccf4607f700f542f94f0bf558a260c25, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::glm::HierarchicalRegressionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::HierarchicalRegressionEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::HierarchicalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type >();
    }

}