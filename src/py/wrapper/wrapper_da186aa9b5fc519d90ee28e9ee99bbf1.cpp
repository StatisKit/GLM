#include "_glm.h"



namespace autowig
{

    void method_decorator_6ea0157a073451a0a9075f292ccd2aac(class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > const & instance, const class ::statiskit::VectorPredictor & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > const volatile >(class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_da186aa9b5fc519d90ee28e9ee99bbf1()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_da186aa9b5fc519d90ee28e9ee99bbf1_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > const & unique_ptr_da186aa9b5fc519d90ee28e9ee99bbf1)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > & >(unique_ptr_da186aa9b5fc519d90ee28e9ee99bbf1).release()).ptr());
            std::shared_ptr< class ::statiskit::VectorPredictor  > shared_ptr_da186aa9b5fc519d90ee28e9ee99bbf1(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > & >(unique_ptr_da186aa9b5fc519d90ee28e9ee99bbf1)));
            return boost::python::incref(boost::python::object(shared_ptr_da186aa9b5fc519d90ee28e9ee99bbf1).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > >, unique_ptr_da186aa9b5fc519d90ee28e9ee99bbf1_to_python >();
}