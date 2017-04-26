#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::PoissonLink const volatile * get_pointer<struct ::statiskit::PoissonLink const volatile >(struct ::statiskit::PoissonLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1c7c25d5171b5f078e164f41f06ab8b7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::PoissonLink::*method_pointer_5fe75c3205bd56689626b69b20f33e86)(double const &) const = &::statiskit::PoissonLink::inverse;
    double  (::statiskit::PoissonLink::*method_pointer_11aa6adf40e95d7e9cc33bf2f6b7fbd2)(double const &) const = &::statiskit::PoissonLink::inverse_derivative;
    class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > >  (::statiskit::PoissonLink::*method_pointer_d35c3c00a77a514d8a2523b4e9642daf)() const = &::statiskit::PoissonLink::copy;
    boost::python::class_< struct ::statiskit::PoissonLink, autowig::Held< struct ::statiskit::PoissonLink >::Type, boost::python::bases< struct ::statiskit::ScalarLink > > class_1c7c25d5171b5f078e164f41f06ab8b7("PoissonLink", "", boost::python::no_init);
    class_1c7c25d5171b5f078e164f41f06ab8b7.def("inverse", method_pointer_5fe75c3205bd56689626b69b20f33e86, "");
    class_1c7c25d5171b5f078e164f41f06ab8b7.def("inverse_derivative", method_pointer_11aa6adf40e95d7e9cc33bf2f6b7fbd2, "");
    class_1c7c25d5171b5f078e164f41f06ab8b7.def("copy", method_pointer_d35c3c00a77a514d8a2523b4e9642daf, "");

    if(autowig::Held< struct ::statiskit::PoissonLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PoissonLink >::Type, autowig::Held< struct ::statiskit::ScalarLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PoissonLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PoissonLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PoissonLink >::Type, struct ::statiskit::PoissonLink > > >();
    }

}