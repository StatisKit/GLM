#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::BinomialRegression const volatile * get_pointer<class ::statiskit::glm::BinomialRegression const volatile >(class ::statiskit::glm::BinomialRegression const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_12cba5f08bca53ebb5d5e4782aeedbee()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    unsigned int  (::statiskit::glm::BinomialRegression::*method_pointer_074ce71787b252eca25a84eac895fbc0)() const = &::statiskit::glm::BinomialRegression::get_kappa;
    void  (::statiskit::glm::BinomialRegression::*method_pointer_ed9f1891e03f5f4e8bab58c69215323f)(unsigned int const &) = &::statiskit::glm::BinomialRegression::set_kappa;
    boost::python::class_< class ::statiskit::glm::BinomialRegression, autowig::Held< class ::statiskit::glm::BinomialRegression >::Type, boost::python::bases< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > > > class_12cba5f08bca53ebb5d5e4782aeedbee("BinomialRegression", "", boost::python::no_init);
    class_12cba5f08bca53ebb5d5e4782aeedbee.def(boost::python::init< unsigned int const &, class ::statiskit::ScalarPredictor const &, struct ::statiskit::BinomialLink const & >(""));
    class_12cba5f08bca53ebb5d5e4782aeedbee.def("get_kappa", method_pointer_074ce71787b252eca25a84eac895fbc0, "");
    class_12cba5f08bca53ebb5d5e4782aeedbee.def("set_kappa", method_pointer_ed9f1891e03f5f4e8bab58c69215323f, "");

    if(autowig::Held< class ::statiskit::glm::BinomialRegression >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::BinomialRegression >::Type, autowig::Held< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > >::Type >();
    }

}