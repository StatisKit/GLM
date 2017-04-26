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
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::ProportionalVectorPredictor::*method_pointer_05669f667bcd58f5a6d4faf963ae72ab)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::ProportionalVectorPredictor::operator();
    ::std::size_t  (::statiskit::ProportionalVectorPredictor::*method_pointer_b21a5ecead905b51a51dafce62afb6fd)() const = &::statiskit::ProportionalVectorPredictor::size;
    void  (::statiskit::ProportionalVectorPredictor::*method_pointer_6dc7680a064251fa89a9c2e14eef82dc)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::ProportionalVectorPredictor::set_beta;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::ProportionalVectorPredictor::*method_pointer_f3216763d991584aa8efb94330c54f39)() const = &::statiskit::ProportionalVectorPredictor::get_alpha;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::ProportionalVectorPredictor::*method_pointer_e2688321797a52938bbf0bdae2af0972)() const = &::statiskit::ProportionalVectorPredictor::get_delta;
    class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > >  (::statiskit::ProportionalVectorPredictor::*method_pointer_8012dd6942fc5f1fa961ad7574a63fb9)() const = &::statiskit::ProportionalVectorPredictor::copy;
    boost::python::class_< class ::statiskit::ProportionalVectorPredictor, autowig::Held< class ::statiskit::ProportionalVectorPredictor >::Type, boost::python::bases< class ::statiskit::VectorPredictor > > class_f5013712c3275762ac02f7d4f1014789("ProportionalVectorPredictor", "", boost::python::no_init);
    class_f5013712c3275762ac02f7d4f1014789.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const & >(""));
    class_f5013712c3275762ac02f7d4f1014789.def(boost::python::init< class ::statiskit::ProportionalVectorPredictor const & >(""));
    class_f5013712c3275762ac02f7d4f1014789.def("__call__", method_pointer_05669f667bcd58f5a6d4faf963ae72ab, "");
    class_f5013712c3275762ac02f7d4f1014789.def("__len__", method_pointer_b21a5ecead905b51a51dafce62afb6fd, "");
    class_f5013712c3275762ac02f7d4f1014789.def("set_beta", method_pointer_6dc7680a064251fa89a9c2e14eef82dc, "");
    class_f5013712c3275762ac02f7d4f1014789.def("get_alpha", method_pointer_f3216763d991584aa8efb94330c54f39, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5013712c3275762ac02f7d4f1014789.def("get_delta", method_pointer_e2688321797a52938bbf0bdae2af0972, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5013712c3275762ac02f7d4f1014789.def("copy", method_pointer_8012dd6942fc5f1fa961ad7574a63fb9, "");

    if(autowig::Held< class ::statiskit::ProportionalVectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ProportionalVectorPredictor >::Type, autowig::Held< class ::statiskit::VectorPredictor >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ProportionalVectorPredictor >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ProportionalVectorPredictor, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ProportionalVectorPredictor >::Type, class ::statiskit::ProportionalVectorPredictor > > >();
    }

}