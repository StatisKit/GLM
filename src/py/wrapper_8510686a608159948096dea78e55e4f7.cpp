#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OrdinalLink const volatile * get_pointer<struct ::statiskit::OrdinalLink const volatile >(struct ::statiskit::OrdinalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8510686a608159948096dea78e55e4f7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::OrdinalLink::*method_pointer_cf35c06aceca586e9ff59594dc35fc4a)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::OrdinalLink::inverse;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::OrdinalLink::*method_pointer_13ab7362318259a69e13513c7f66c9b6)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::OrdinalLink::inverse_derivative;
    class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > >  (::statiskit::OrdinalLink::*method_pointer_6508823fb5bd5d6da411112ddb1569db)() const = &::statiskit::OrdinalLink::copy;
    boost::python::class_< struct ::statiskit::OrdinalLink, autowig::Held< struct ::statiskit::OrdinalLink >::Type, boost::python::bases< struct ::statiskit::VectorLink > > class_8510686a608159948096dea78e55e4f7("OrdinalLink", "", boost::python::no_init);
    class_8510686a608159948096dea78e55e4f7.def("inverse", method_pointer_cf35c06aceca586e9ff59594dc35fc4a, "");
    class_8510686a608159948096dea78e55e4f7.def("inverse_derivative", method_pointer_13ab7362318259a69e13513c7f66c9b6, "");
    class_8510686a608159948096dea78e55e4f7.def("copy", method_pointer_6508823fb5bd5d6da411112ddb1569db, "");

    if(autowig::Held< struct ::statiskit::OrdinalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OrdinalLink >::Type, autowig::Held< struct ::statiskit::VectorLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OrdinalLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OrdinalLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OrdinalLink >::Type, struct ::statiskit::OrdinalLink > > >();
    }

}