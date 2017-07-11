#include "_glm.h"



namespace autowig
{

    void method_decorator_984e9f2970ef586e981bf932b5b0352d(class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > > const & instance, const class ::statiskit::glm::ScalarPredictor & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > > const volatile >(class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_222a4b6262f9562392edd7690cf3049f()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_222a4b6262f9562392edd7690cf3049f_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > > const & unique_ptr_222a4b6262f9562392edd7690cf3049f)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > > & >(unique_ptr_222a4b6262f9562392edd7690cf3049f).release()).ptr());
            std::shared_ptr< class ::statiskit::glm::ScalarPredictor  > shared_ptr_222a4b6262f9562392edd7690cf3049f(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > > & >(unique_ptr_222a4b6262f9562392edd7690cf3049f)));
            return boost::python::incref(boost::python::object(shared_ptr_222a4b6262f9562392edd7690cf3049f).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > >, unique_ptr_222a4b6262f9562392edd7690cf3049f_to_python >();
}