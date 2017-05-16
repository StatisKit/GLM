#include "_glm.h"



namespace autowig
{

    void method_decorator_138f4d032bff5bf5b2af93c7d2ab8c83(class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > const & instance, class ::statiskit::ScalarPredictor & param_out)     { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > const volatile >(class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c5c9c4c3c5635755ba5e96a8382f452a()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_c5c9c4c3c5635755ba5e96a8382f452a_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > const & unique_ptr_c5c9c4c3c5635755ba5e96a8382f452a)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > & >(unique_ptr_c5c9c4c3c5635755ba5e96a8382f452a).release()).ptr());
            std::shared_ptr< class ::statiskit::ScalarPredictor  > shared_ptr_c5c9c4c3c5635755ba5e96a8382f452a(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > & >(unique_ptr_c5c9c4c3c5635755ba5e96a8382f452a)));
            return boost::python::incref(boost::python::object(shared_ptr_c5c9c4c3c5635755ba5e96a8382f452a).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > >, unique_ptr_c5c9c4c3c5635755ba5e96a8382f452a_to_python >();
}