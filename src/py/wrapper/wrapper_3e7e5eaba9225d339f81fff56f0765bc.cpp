#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::PoissonRegression const volatile * get_pointer<class ::statiskit::glm::PoissonRegression const volatile >(class ::statiskit::glm::PoissonRegression const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3e7e5eaba9225d339f81fff56f0765bc()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  (::statiskit::glm::PoissonRegression::*method_pointer_f92365dfbeac5f2da1aee45df3078f5f)() const = &::statiskit::glm::PoissonRegression::copy;
    boost::python::class_< class ::statiskit::glm::PoissonRegression, autowig::Held< class ::statiskit::glm::PoissonRegression >::Type, boost::python::bases< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > > > class_3e7e5eaba9225d339f81fff56f0765bc("PoissonRegression", "", boost::python::no_init);
    class_3e7e5eaba9225d339f81fff56f0765bc.def(boost::python::init< class ::statiskit::ScalarPredictor const &, struct ::statiskit::PoissonLink const & >(""));
    class_3e7e5eaba9225d339f81fff56f0765bc.def("copy", method_pointer_f92365dfbeac5f2da1aee45df3078f5f, "");

    if(autowig::Held< class ::statiskit::glm::PoissonRegression >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::PoissonRegression >::Type, autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > >::Type >();
    }

}