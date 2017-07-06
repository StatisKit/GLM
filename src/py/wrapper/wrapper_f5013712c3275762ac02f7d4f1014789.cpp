#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ProportionalVectorPredictor const volatile * get_pointer<class ::statiskit::ProportionalVectorPredictor const volatile >(class ::statiskit::ProportionalVectorPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f5013712c3275762ac02f7d4f1014789()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::ProportionalVectorPredictor::*method_pointer_f3216763d991584aa8efb94330c54f39)() const = &::statiskit::ProportionalVectorPredictor::get_alpha;
    void  (::statiskit::ProportionalVectorPredictor::*method_pointer_bbd7dc08badc5a0bb7e5073ff1f3d42e)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::ProportionalVectorPredictor::set_alpha;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::ProportionalVectorPredictor::*method_pointer_e2688321797a52938bbf0bdae2af0972)() const = &::statiskit::ProportionalVectorPredictor::get_delta;
    void  (::statiskit::ProportionalVectorPredictor::*method_pointer_47e5303818a750df879ce6220fabd6f4)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::ProportionalVectorPredictor::set_delta;
    boost::python::class_< class ::statiskit::ProportionalVectorPredictor, autowig::Held< class ::statiskit::ProportionalVectorPredictor >::Type, boost::python::bases< class ::statiskit::VectorPredictor > > class_f5013712c3275762ac02f7d4f1014789("ProportionalVectorPredictor", "", boost::python::no_init);
    class_f5013712c3275762ac02f7d4f1014789.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const & >(""));
    class_f5013712c3275762ac02f7d4f1014789.def(boost::python::init< class ::statiskit::ProportionalVectorPredictor const & >(""));
    class_f5013712c3275762ac02f7d4f1014789.def("get_alpha", method_pointer_f3216763d991584aa8efb94330c54f39, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5013712c3275762ac02f7d4f1014789.def("set_alpha", method_pointer_bbd7dc08badc5a0bb7e5073ff1f3d42e, "");
    class_f5013712c3275762ac02f7d4f1014789.def("get_delta", method_pointer_e2688321797a52938bbf0bdae2af0972, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5013712c3275762ac02f7d4f1014789.def("set_delta", method_pointer_47e5303818a750df879ce6220fabd6f4, "");

    if(autowig::Held< class ::statiskit::ProportionalVectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ProportionalVectorPredictor >::Type, autowig::Held< class ::statiskit::VectorPredictor >::Type >();
    }

}