#include "_glm.h"



namespace autowig
{

    void method_decorator_968e11dc339e5a459f2eee491aa13606(class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > const & instance, const struct ::statiskit::glm::Design & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > const volatile >(class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_460c3506527053a78f54ef6fd5c435ac()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_460c3506527053a78f54ef6fd5c435ac_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > const & unique_ptr_460c3506527053a78f54ef6fd5c435ac)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > & >(unique_ptr_460c3506527053a78f54ef6fd5c435ac).release()).ptr());
            std::shared_ptr< struct ::statiskit::glm::Design  > shared_ptr_460c3506527053a78f54ef6fd5c435ac(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > & >(unique_ptr_460c3506527053a78f54ef6fd5c435ac)));
            return boost::python::incref(boost::python::object(shared_ptr_460c3506527053a78f54ef6fd5c435ac).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >, unique_ptr_460c3506527053a78f54ef6fd5c435ac_to_python >();
}