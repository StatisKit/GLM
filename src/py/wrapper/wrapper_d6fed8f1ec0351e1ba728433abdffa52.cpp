#include "_glm.h"



namespace autowig
{

    void method_decorator_00f8549a427757b9b472d460cb638d3c(class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > > const & instance, const class ::statiskit::glm::VectorPredictor & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > > const volatile >(class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d6fed8f1ec0351e1ba728433abdffa52()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_d6fed8f1ec0351e1ba728433abdffa52_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > > const & unique_ptr_d6fed8f1ec0351e1ba728433abdffa52)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > > & >(unique_ptr_d6fed8f1ec0351e1ba728433abdffa52).release()).ptr());
            std::shared_ptr< class ::statiskit::glm::VectorPredictor  > shared_ptr_d6fed8f1ec0351e1ba728433abdffa52(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > > & >(unique_ptr_d6fed8f1ec0351e1ba728433abdffa52)));
            return boost::python::incref(boost::python::object(shared_ptr_d6fed8f1ec0351e1ba728433abdffa52).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > >, unique_ptr_d6fed8f1ec0351e1ba728433abdffa52_to_python >();
}