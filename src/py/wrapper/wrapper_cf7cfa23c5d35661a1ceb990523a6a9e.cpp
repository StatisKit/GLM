#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::ConstrainedDesign const volatile * get_pointer<class ::statiskit::glm::ConstrainedDesign const volatile >(class ::statiskit::glm::ConstrainedDesign const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cf7cfa23c5d35661a1ceb990523a6a9e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedDesign::*method_pointer_4a42cd585c675e06b9cce33f4a3fe1cb)() const = &::statiskit::glm::ConstrainedDesign::get_intercept_constraint;
    void  (::statiskit::glm::ConstrainedDesign::*method_pointer_25e6a0e46ec550ffb00c22cb6dec576a)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedDesign::set_intercept_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const (::statiskit::glm::ConstrainedDesign::*method_pointer_99d8803cf542566b90a6c59466007993)() const = &::statiskit::glm::ConstrainedDesign::get_slope_constraint;
    void  (::statiskit::glm::ConstrainedDesign::*method_pointer_2a678374330d556e81a2078561bb05b9)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedDesign::set_slope_constraint;
    boost::python::class_< class ::statiskit::glm::ConstrainedDesign, autowig::Held< class ::statiskit::glm::ConstrainedDesign >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::Design, class ::statiskit::glm::ConstrainedDesign, struct ::statiskit::glm::Design > > > class_cf7cfa23c5d35661a1ceb990523a6a9e("ConstrainedDesign", "", boost::python::no_init);
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def(boost::python::init<  >(""));
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def(boost::python::init< class ::statiskit::glm::ConstrainedDesign const & >(""));
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def("get_intercept_constraint", method_pointer_4a42cd585c675e06b9cce33f4a3fe1cb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def("set_intercept_constraint", method_pointer_25e6a0e46ec550ffb00c22cb6dec576a, "");
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def("get_slope_constraint", method_pointer_99d8803cf542566b90a6c59466007993, "");
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def("set_slope_constraint", method_pointer_2a678374330d556e81a2078561bb05b9, "");

    if(autowig::Held< class ::statiskit::glm::ConstrainedDesign >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedDesign >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::Design, class ::statiskit::glm::ConstrainedDesign, struct ::statiskit::glm::Design > >::Type >();
    }

}