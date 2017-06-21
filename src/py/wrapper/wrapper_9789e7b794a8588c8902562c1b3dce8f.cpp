#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NegativeBinomialVLink const volatile * get_pointer<struct ::statiskit::NegativeBinomialVLink const volatile >(struct ::statiskit::NegativeBinomialVLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9789e7b794a8588c8902562c1b3dce8f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::NegativeBinomialVLink, autowig::Held< struct ::statiskit::NegativeBinomialVLink >::Type, boost::python::bases< struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > > > class_9789e7b794a8588c8902562c1b3dce8f("NegativeBinomialVLink", "", boost::python::no_init);
    class_9789e7b794a8588c8902562c1b3dce8f.def(boost::python::init<  >(""));
    class_9789e7b794a8588c8902562c1b3dce8f.def(boost::python::init< struct ::statiskit::NegativeBinomialVLink const & >(""));

    if(autowig::Held< struct ::statiskit::NegativeBinomialVLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialVLink >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::NegativeBinomialVLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::NegativeBinomialVLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::NegativeBinomialVLink >::Type, struct ::statiskit::NegativeBinomialVLink > > >();
    }

}