#include "_glm.h"



namespace autowig
{

    void method_decorator_5f48b92827795a319b60334e5683e78a(class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > > const & instance, const struct ::statiskit::glm::CategoricalFisherInitialization & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > > const volatile >(class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4accdc07705d57999366c93a8d2e13b8()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_4accdc07705d57999366c93a8d2e13b8_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > > const & unique_ptr_4accdc07705d57999366c93a8d2e13b8)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > > & >(unique_ptr_4accdc07705d57999366c93a8d2e13b8).release()).ptr());
            std::shared_ptr< struct ::statiskit::glm::CategoricalFisherInitialization  > shared_ptr_4accdc07705d57999366c93a8d2e13b8(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > > & >(unique_ptr_4accdc07705d57999366c93a8d2e13b8)));
            return boost::python::incref(boost::python::object(shared_ptr_4accdc07705d57999366c93a8d2e13b8).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > >, unique_ptr_4accdc07705d57999366c93a8d2e13b8_to_python >();
}