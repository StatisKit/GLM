#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CompleteScalarPredictor const volatile * get_pointer<class ::statiskit::glm::CompleteScalarPredictor const volatile >(class ::statiskit::glm::CompleteScalarPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6145f198762157b3b1094c9fc4f41e22()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::CompleteScalarPredictor::*method_pointer_baa9cdc566bc52d0883b104e9177326e)() const = &::statiskit::glm::CompleteScalarPredictor::get_delta;
    void  (::statiskit::glm::CompleteScalarPredictor::*method_pointer_0e27cfaf585f5dbbbdc86face6c02147)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::CompleteScalarPredictor::set_delta;
    boost::python::class_< class ::statiskit::glm::CompleteScalarPredictor, autowig::Held< class ::statiskit::glm::CompleteScalarPredictor >::Type, boost::python::bases< class ::statiskit::glm::ScalarPredictor > > class_6145f198762157b3b1094c9fc4f41e22("CompleteScalarPredictor", "", boost::python::no_init);
    class_6145f198762157b3b1094c9fc4f41e22.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const & >(""));
    class_6145f198762157b3b1094c9fc4f41e22.def(boost::python::init< class ::statiskit::glm::CompleteScalarPredictor const & >(""));
    class_6145f198762157b3b1094c9fc4f41e22.def("get_delta", method_pointer_baa9cdc566bc52d0883b104e9177326e, boost::python::return_value_policy< boost::python::return_by_value >(), ":Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, 1, 0, -1, 1 >\n\n");
    class_6145f198762157b3b1094c9fc4f41e22.def("set_delta", method_pointer_0e27cfaf585f5dbbbdc86face6c02147, "");
    class_6145f198762157b3b1094c9fc4f41e22.def_readwrite("alpha", &::statiskit::glm::CompleteScalarPredictor::alpha, "");

    if(autowig::Held< class ::statiskit::glm::CompleteScalarPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CompleteScalarPredictor >::Type, autowig::Held< class ::statiskit::glm::ScalarPredictor >::Type >();
    }

}