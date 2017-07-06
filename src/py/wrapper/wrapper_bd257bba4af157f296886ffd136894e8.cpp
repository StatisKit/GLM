#include "_glm.h"



namespace autowig
{

    void method_decorator_c9b64f0c08d95d67a13bcea53f932545(class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > const & instance, const struct ::statiskit::BinomialLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bd257bba4af157f296886ffd136894e8()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_bd257bba4af157f296886ffd136894e8_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > const & unique_ptr_bd257bba4af157f296886ffd136894e8)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > & >(unique_ptr_bd257bba4af157f296886ffd136894e8).release()).ptr());
            std::shared_ptr< struct ::statiskit::BinomialLink  > shared_ptr_bd257bba4af157f296886ffd136894e8(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > & >(unique_ptr_bd257bba4af157f296886ffd136894e8)));
            return boost::python::incref(boost::python::object(shared_ptr_bd257bba4af157f296886ffd136894e8).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > >, unique_ptr_bd257bba4af157f296886ffd136894e8_to_python >();
}