#include "_glm.h"



namespace autowig
{

    void method_decorator_1b4b7770604d5a7c9bc89cd9dd8a9748(class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > const & instance, const struct ::statiskit::glm::NominalLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_81839f59949655a6a59021fa65196493()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_81839f59949655a6a59021fa65196493_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > const & unique_ptr_81839f59949655a6a59021fa65196493)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > & >(unique_ptr_81839f59949655a6a59021fa65196493).release()).ptr());
            std::shared_ptr< struct ::statiskit::glm::NominalLink  > shared_ptr_81839f59949655a6a59021fa65196493(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > & >(unique_ptr_81839f59949655a6a59021fa65196493)));
            return boost::python::incref(boost::python::object(shared_ptr_81839f59949655a6a59021fa65196493).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > >, unique_ptr_81839f59949655a6a59021fa65196493_to_python >();
}