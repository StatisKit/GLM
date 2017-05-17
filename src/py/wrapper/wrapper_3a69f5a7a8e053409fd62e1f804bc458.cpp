#include "_glm.h"



namespace autowig
{

    void method_decorator_c2ea8e244fde55dc84b0d90c2a288a3d(class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > const & instance, const struct ::statiskit::NominalLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3a69f5a7a8e053409fd62e1f804bc458()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_3a69f5a7a8e053409fd62e1f804bc458_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > const & unique_ptr_3a69f5a7a8e053409fd62e1f804bc458)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > & >(unique_ptr_3a69f5a7a8e053409fd62e1f804bc458).release()).ptr());
            std::shared_ptr< struct ::statiskit::NominalLink  > shared_ptr_3a69f5a7a8e053409fd62e1f804bc458(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > & >(unique_ptr_3a69f5a7a8e053409fd62e1f804bc458)));
            return boost::python::incref(boost::python::object(shared_ptr_3a69f5a7a8e053409fd62e1f804bc458).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > >, unique_ptr_3a69f5a7a8e053409fd62e1f804bc458_to_python >();
}