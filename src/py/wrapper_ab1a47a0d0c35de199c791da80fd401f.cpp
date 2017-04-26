#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NominalLink const volatile * get_pointer<struct ::statiskit::NominalLink const volatile >(struct ::statiskit::NominalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ab1a47a0d0c35de199c791da80fd401f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::NominalLink::*method_pointer_8f7d0555776d58e8a5d472931da827b8)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::NominalLink::inverse;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::NominalLink::*method_pointer_c8ded15ec50c5715a8f04747b67a010a)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::NominalLink::inverse_derivative;
    class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > >  (::statiskit::NominalLink::*method_pointer_2abcf4dab04552b69cfa1a28e330edcd)() const = &::statiskit::NominalLink::copy;
    boost::python::class_< struct ::statiskit::NominalLink, autowig::Held< struct ::statiskit::NominalLink >::Type, boost::python::bases< struct ::statiskit::VectorLink > > class_ab1a47a0d0c35de199c791da80fd401f("NominalLink", "", boost::python::no_init);
    class_ab1a47a0d0c35de199c791da80fd401f.def("inverse", method_pointer_8f7d0555776d58e8a5d472931da827b8, "");
    class_ab1a47a0d0c35de199c791da80fd401f.def("inverse_derivative", method_pointer_c8ded15ec50c5715a8f04747b67a010a, "");
    class_ab1a47a0d0c35de199c791da80fd401f.def("copy", method_pointer_2abcf4dab04552b69cfa1a28e330edcd, "");

    if(autowig::Held< struct ::statiskit::NominalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NominalLink >::Type, autowig::Held< struct ::statiskit::VectorLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::NominalLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::NominalLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::NominalLink >::Type, struct ::statiskit::NominalLink > > >();
    }

}