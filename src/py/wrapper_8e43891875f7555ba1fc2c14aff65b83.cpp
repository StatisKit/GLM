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
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::CompleteVectorPredictor::*method_pointer_dbaa98b8ac2d5105ad9d87ea89002099)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::CompleteVectorPredictor::operator();
    ::std::size_t  (::statiskit::CompleteVectorPredictor::*method_pointer_dcd668d74ff35cbd8961324c2e452347)() const = &::statiskit::CompleteVectorPredictor::size;
    void  (::statiskit::CompleteVectorPredictor::*method_pointer_f8256c9c978c5588b8299a58ab614943)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::CompleteVectorPredictor::set_beta;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::CompleteVectorPredictor::*method_pointer_672479e7f6db55bf9714c6c7d1d206ec)() const = &::statiskit::CompleteVectorPredictor::get_alpha;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::CompleteVectorPredictor::*method_pointer_d55c1c80491e5c2384fc9eda1662eaff)() const = &::statiskit::CompleteVectorPredictor::get_delta;
    class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > >  (::statiskit::CompleteVectorPredictor::*method_pointer_8ebec2fc3a935e8c9dac0972d9b7f44b)() const = &::statiskit::CompleteVectorPredictor::copy;
    boost::python::class_< class ::statiskit::CompleteVectorPredictor, autowig::Held< class ::statiskit::CompleteVectorPredictor >::Type, boost::python::bases< class ::statiskit::VectorPredictor > > class_8e43891875f7555ba1fc2c14aff65b83("CompleteVectorPredictor", "", boost::python::no_init);
    class_8e43891875f7555ba1fc2c14aff65b83.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const & >(""));
    class_8e43891875f7555ba1fc2c14aff65b83.def(boost::python::init< class ::statiskit::CompleteVectorPredictor const & >(""));
    class_8e43891875f7555ba1fc2c14aff65b83.def("__call__", method_pointer_dbaa98b8ac2d5105ad9d87ea89002099, "");
    class_8e43891875f7555ba1fc2c14aff65b83.def("__len__", method_pointer_dcd668d74ff35cbd8961324c2e452347, "");
    class_8e43891875f7555ba1fc2c14aff65b83.def("set_beta", method_pointer_f8256c9c978c5588b8299a58ab614943, "");
    class_8e43891875f7555ba1fc2c14aff65b83.def("get_alpha", method_pointer_672479e7f6db55bf9714c6c7d1d206ec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8e43891875f7555ba1fc2c14aff65b83.def("get_delta", method_pointer_d55c1c80491e5c2384fc9eda1662eaff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8e43891875f7555ba1fc2c14aff65b83.def("copy", method_pointer_8ebec2fc3a935e8c9dac0972d9b7f44b, "");

    if(autowig::Held< class ::statiskit::CompleteVectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::CompleteVectorPredictor >::Type, autowig::Held< class ::statiskit::VectorPredictor >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::CompleteVectorPredictor >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::CompleteVectorPredictor, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::CompleteVectorPredictor >::Type, class ::statiskit::CompleteVectorPredictor > > >();
    }

}