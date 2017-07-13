#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::MultinomialSplittingRegressionIII const volatile * get_pointer<class ::statiskit::glm::MultinomialSplittingRegressionIII const volatile >(class ::statiskit::glm::MultinomialSplittingRegressionIII const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b85eda02403c534d95fefafb71c86fd6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::MultinomialSplittingRegressionIII::*method_pointer_acc9b4d74d665e519e71d594070c5c2f)() const = &::statiskit::glm::MultinomialSplittingRegressionIII::get_pi;
    void  (::statiskit::glm::MultinomialSplittingRegressionIII::*method_pointer_03dcf8de021e55a09be89a931fd28eae)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::MultinomialSplittingRegressionIII::set_pi;
    boost::python::class_< class ::statiskit::glm::MultinomialSplittingRegressionIII, autowig::Held< class ::statiskit::glm::MultinomialSplittingRegressionIII >::Type, boost::python::bases< class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > > > class_b85eda02403c534d95fefafb71c86fd6("MultinomialSplittingRegressionIII", "", boost::python::no_init);
    class_b85eda02403c534d95fefafb71c86fd6.def(boost::python::init< struct ::statiskit::DiscreteUnivariateConditionalDistribution const &, class ::statiskit::MultinomialSplittingDistribution const & >(""));
    class_b85eda02403c534d95fefafb71c86fd6.def(boost::python::init< class ::statiskit::glm::MultinomialSplittingRegressionIII const & >(""));
    class_b85eda02403c534d95fefafb71c86fd6.def("get_pi", method_pointer_acc9b4d74d665e519e71d594070c5c2f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b85eda02403c534d95fefafb71c86fd6.def("set_pi", method_pointer_03dcf8de021e55a09be89a931fd28eae, "");

    if(autowig::Held< class ::statiskit::glm::MultinomialSplittingRegressionIII >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::MultinomialSplittingRegressionIII >::Type, autowig::Held< class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > >::Type >();
    }

}