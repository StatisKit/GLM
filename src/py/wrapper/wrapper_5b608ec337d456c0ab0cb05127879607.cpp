#include "_glm.h"



namespace autowig
{

    void method_decorator_ee31c8240a5f51e88da6d969083db4e4(class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > const & instance, const struct ::statiskit::OrdinalLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5b608ec337d456c0ab0cb05127879607()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_5b608ec337d456c0ab0cb05127879607_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > const & unique_ptr_5b608ec337d456c0ab0cb05127879607)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > & >(unique_ptr_5b608ec337d456c0ab0cb05127879607).release()).ptr());
            std::shared_ptr< struct ::statiskit::OrdinalLink  > shared_ptr_5b608ec337d456c0ab0cb05127879607(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > & >(unique_ptr_5b608ec337d456c0ab0cb05127879607)));
            return boost::python::incref(boost::python::object(shared_ptr_5b608ec337d456c0ab0cb05127879607).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > >, unique_ptr_5b608ec337d456c0ab0cb05127879607_to_python >();
}