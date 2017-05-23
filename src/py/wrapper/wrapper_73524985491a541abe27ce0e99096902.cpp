#include "_glm.h"



namespace autowig
{

    void method_decorator_86160010678c557c948e9d7cc388ce52(class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > const & instance, const struct ::statiskit::NegativeBinomialLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_73524985491a541abe27ce0e99096902()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_73524985491a541abe27ce0e99096902_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > const & unique_ptr_73524985491a541abe27ce0e99096902)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > & >(unique_ptr_73524985491a541abe27ce0e99096902).release()).ptr());
            std::shared_ptr< struct ::statiskit::NegativeBinomialLink  > shared_ptr_73524985491a541abe27ce0e99096902(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > & >(unique_ptr_73524985491a541abe27ce0e99096902)));
            return boost::python::incref(boost::python::object(shared_ptr_73524985491a541abe27ce0e99096902).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > >, unique_ptr_73524985491a541abe27ce0e99096902_to_python >();
}