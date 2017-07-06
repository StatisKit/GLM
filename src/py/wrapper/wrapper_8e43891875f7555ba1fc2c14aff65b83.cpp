#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::CompleteVectorPredictor const volatile * get_pointer<class ::statiskit::CompleteVectorPredictor const volatile >(class ::statiskit::CompleteVectorPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8e43891875f7555ba1fc2c14aff65b83()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::CompleteVectorPredictor::*method_pointer_672479e7f6db55bf9714c6c7d1d206ec)() const = &::statiskit::CompleteVectorPredictor::get_alpha;
    void  (::statiskit::CompleteVectorPredictor::*method_pointer_0759cb6f87915378b98ea215a713522b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::CompleteVectorPredictor::set_alpha;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::CompleteVectorPredictor::*method_pointer_d55c1c80491e5c2384fc9eda1662eaff)() const = &::statiskit::CompleteVectorPredictor::get_delta;
    void  (::statiskit::CompleteVectorPredictor::*method_pointer_5e9a02d1aefe58bbbbb0a5b4ab1497bb)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::CompleteVectorPredictor::set_delta;
    boost::python::class_< class ::statiskit::CompleteVectorPredictor, autowig::Held< class ::statiskit::CompleteVectorPredictor >::Type, boost::python::bases< class ::statiskit::VectorPredictor > > class_8e43891875f7555ba1fc2c14aff65b83("CompleteVectorPredictor", "", boost::python::no_init);
    class_8e43891875f7555ba1fc2c14aff65b83.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const & >(""));
    class_8e43891875f7555ba1fc2c14aff65b83.def(boost::python::init< class ::statiskit::CompleteVectorPredictor const & >(""));
    class_8e43891875f7555ba1fc2c14aff65b83.def("get_alpha", method_pointer_672479e7f6db55bf9714c6c7d1d206ec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8e43891875f7555ba1fc2c14aff65b83.def("set_alpha", method_pointer_0759cb6f87915378b98ea215a713522b, "");
    class_8e43891875f7555ba1fc2c14aff65b83.def("get_delta", method_pointer_d55c1c80491e5c2384fc9eda1662eaff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8e43891875f7555ba1fc2c14aff65b83.def("set_delta", method_pointer_5e9a02d1aefe58bbbbb0a5b4ab1497bb, "");

    if(autowig::Held< class ::statiskit::CompleteVectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::CompleteVectorPredictor >::Type, autowig::Held< class ::statiskit::VectorPredictor >::Type >();
    }

}