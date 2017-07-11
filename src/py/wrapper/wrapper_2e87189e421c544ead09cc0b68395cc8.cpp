#include "_glm.h"



namespace autowig
{

    void method_decorator_82aabfd7b3a45c97a5d0b4a76233b08b(class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > const & instance, const struct ::statiskit::glm::OrdinalLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2e87189e421c544ead09cc0b68395cc8()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_2e87189e421c544ead09cc0b68395cc8_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > const & unique_ptr_2e87189e421c544ead09cc0b68395cc8)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > & >(unique_ptr_2e87189e421c544ead09cc0b68395cc8).release()).ptr());
            std::shared_ptr< struct ::statiskit::glm::OrdinalLink  > shared_ptr_2e87189e421c544ead09cc0b68395cc8(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > & >(unique_ptr_2e87189e421c544ead09cc0b68395cc8)));
            return boost::python::incref(boost::python::object(shared_ptr_2e87189e421c544ead09cc0b68395cc8).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > >, unique_ptr_2e87189e421c544ead09cc0b68395cc8_to_python >();
}