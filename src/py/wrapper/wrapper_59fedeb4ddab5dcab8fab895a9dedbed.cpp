#include "_glm.h"



namespace autowig
{

    void method_decorator_204e1d37972c5c618495f94bc54a0771(class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > const & instance, const struct ::statiskit::glm::BinaryLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_59fedeb4ddab5dcab8fab895a9dedbed()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_59fedeb4ddab5dcab8fab895a9dedbed_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > const & unique_ptr_59fedeb4ddab5dcab8fab895a9dedbed)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > & >(unique_ptr_59fedeb4ddab5dcab8fab895a9dedbed).release()).ptr());
            std::shared_ptr< struct ::statiskit::glm::BinaryLink  > shared_ptr_59fedeb4ddab5dcab8fab895a9dedbed(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > & >(unique_ptr_59fedeb4ddab5dcab8fab895a9dedbed)));
            return boost::python::incref(boost::python::object(shared_ptr_59fedeb4ddab5dcab8fab895a9dedbed).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > >, unique_ptr_59fedeb4ddab5dcab8fab895a9dedbed_to_python >();
}