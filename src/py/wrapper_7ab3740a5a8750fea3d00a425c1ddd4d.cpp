#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ConstrainedVectorPredictor const volatile * get_pointer<class ::statiskit::ConstrainedVectorPredictor const volatile >(class ::statiskit::ConstrainedVectorPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7ab3740a5a8750fea3d00a425c1ddd4d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::ConstrainedVectorPredictor::*method_pointer_febd9c17b10f5b3b9f4656791d666b74)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::ConstrainedVectorPredictor::operator();
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::ConstrainedVectorPredictor::*method_pointer_57208aff8e645b34babc903c0900220e)() const = &::statiskit::ConstrainedVectorPredictor::get_constraint;
    void  (::statiskit::ConstrainedVectorPredictor::*method_pointer_b78a3d7748805a3c9d37a75b724c4f15)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::ConstrainedVectorPredictor::set_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::ConstrainedVectorPredictor::*method_pointer_764175e8836a5149b0c3985395b6f713)() const = &::statiskit::ConstrainedVectorPredictor::get_intercept_constraint;
    void  (::statiskit::ConstrainedVectorPredictor::*method_pointer_6ad6664d698e5dc6a30bef820e1e284f)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::ConstrainedVectorPredictor::set_intercept_constraint;
    class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > >  (::statiskit::ConstrainedVectorPredictor::*method_pointer_7fd16bf22f905e9d8d287ff431a7fa8d)() const = &::statiskit::ConstrainedVectorPredictor::copy;
    boost::python::class_< class ::statiskit::ConstrainedVectorPredictor, autowig::Held< class ::statiskit::ConstrainedVectorPredictor >::Type, boost::python::bases< class ::statiskit::ProportionalVectorPredictor > > class_7ab3740a5a8750fea3d00a425c1ddd4d("ConstrainedVectorPredictor", "", boost::python::no_init);
    class_7ab3740a5a8750fea3d00a425c1ddd4d.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_7ab3740a5a8750fea3d00a425c1ddd4d.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_7ab3740a5a8750fea3d00a425c1ddd4d.def(boost::python::init< class ::statiskit::ConstrainedVectorPredictor const & >(""));
    class_7ab3740a5a8750fea3d00a425c1ddd4d.def("__call__", method_pointer_febd9c17b10f5b3b9f4656791d666b74, "");
    class_7ab3740a5a8750fea3d00a425c1ddd4d.def("get_constraint", method_pointer_57208aff8e645b34babc903c0900220e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7ab3740a5a8750fea3d00a425c1ddd4d.def("set_constraint", method_pointer_b78a3d7748805a3c9d37a75b724c4f15, "");
    class_7ab3740a5a8750fea3d00a425c1ddd4d.def("get_intercept_constraint", method_pointer_764175e8836a5149b0c3985395b6f713, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_7ab3740a5a8750fea3d00a425c1ddd4d.def("set_intercept_constraint", method_pointer_6ad6664d698e5dc6a30bef820e1e284f, "");
    class_7ab3740a5a8750fea3d00a425c1ddd4d.def("copy", method_pointer_7fd16bf22f905e9d8d287ff431a7fa8d, "");

    if(autowig::Held< class ::statiskit::ConstrainedVectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ConstrainedVectorPredictor >::Type, autowig::Held< class ::statiskit::ProportionalVectorPredictor >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ConstrainedVectorPredictor >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ConstrainedVectorPredictor, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ConstrainedVectorPredictor >::Type, class ::statiskit::ConstrainedVectorPredictor > > >();
    }

}