#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution const volatile * get_pointer<class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution const volatile >(class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_eb2204261e585db28339a149d1570064()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_9b21f9defb835016b7408f5a91db9ccb = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._hierarchical_regression");
    boost::python::object module_9b21f9defb835016b7408f5a91db9ccb(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_9b21f9defb835016b7408f5a91db9ccb.c_str()))));
    boost::python::scope().attr("_hierarchical_regression") = module_9b21f9defb835016b7408f5a91db9ccb;
    boost::python::scope scope_9b21f9defb835016b7408f5a91db9ccb = module_9b21f9defb835016b7408f5a91db9ccb;
    unsigned int  (::statiskit::glm::HierarchicalRegression::HierarchicalDistribution::*method_pointer_cab26779bbd35073ac44a2f7905c30fa)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::glm::HierarchicalRegression::HierarchicalDistribution::index;
    boost::python::class_< class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution, autowig::Held< class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution >::Type, boost::python::bases< class ::statiskit::HierarchicalDistribution > > class_eb2204261e585db28339a149d1570064("HierarchicalDistribution", "", boost::python::no_init);
    class_eb2204261e585db28339a149d1570064.def(boost::python::init< class ::statiskit::HierarchicalSampleSpace const & >(""));
    class_eb2204261e585db28339a149d1570064.def(boost::python::init< class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution const & >(""));
    class_eb2204261e585db28339a149d1570064.def("index", method_pointer_cab26779bbd35073ac44a2f7905c30fa, "");

    if(autowig::Held< class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution >::Type, autowig::Held< class ::statiskit::HierarchicalDistribution >::Type >();
    }

}