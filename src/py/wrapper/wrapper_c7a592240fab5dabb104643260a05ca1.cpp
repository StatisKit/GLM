#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::ConstrainedScalarPredictor const volatile * get_pointer<class ::statiskit::glm::ConstrainedScalarPredictor const volatile >(class ::statiskit::glm::ConstrainedScalarPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c7a592240fab5dabb104643260a05ca1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedScalarPredictor::*method_pointer_b7b1f748887a5ba6b7dc1f1417b6b586)() const = &::statiskit::glm::ConstrainedScalarPredictor::get_constraint;
    void  (::statiskit::glm::ConstrainedScalarPredictor::*method_pointer_0597dbb4a13a5b93bb3ad2fe299d3e8e)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedScalarPredictor::set_constraint;
    boost::python::class_< class ::statiskit::glm::ConstrainedScalarPredictor, autowig::Held< class ::statiskit::glm::ConstrainedScalarPredictor >::Type, boost::python::bases< class ::statiskit::glm::CompleteScalarPredictor > > class_c7a592240fab5dabb104643260a05ca1("ConstrainedScalarPredictor", "", boost::python::no_init);
    class_c7a592240fab5dabb104643260a05ca1.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_c7a592240fab5dabb104643260a05ca1.def(boost::python::init< class ::statiskit::glm::ConstrainedScalarPredictor const & >(""));
    class_c7a592240fab5dabb104643260a05ca1.def("get_constraint", method_pointer_b7b1f748887a5ba6b7dc1f1417b6b586, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c7a592240fab5dabb104643260a05ca1.def("set_constraint", method_pointer_0597dbb4a13a5b93bb3ad2fe299d3e8e, "");

    if(autowig::Held< class ::statiskit::glm::ConstrainedScalarPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedScalarPredictor >::Type, autowig::Held< class ::statiskit::glm::CompleteScalarPredictor >::Type >();
    }

}