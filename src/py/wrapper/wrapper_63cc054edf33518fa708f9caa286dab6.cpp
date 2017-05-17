#include "_glm.h"



namespace autowig
{

    void method_decorator_7cb30d6e3c1b5f23851bbd588e0e219c(class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > const & instance, const struct ::statiskit::UnivariateConditionalDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_63cc054edf33518fa708f9caa286dab6()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_63cc054edf33518fa708f9caa286dab6_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > const & unique_ptr_63cc054edf33518fa708f9caa286dab6)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > & >(unique_ptr_63cc054edf33518fa708f9caa286dab6).release()).ptr());
            std::shared_ptr< struct ::statiskit::UnivariateConditionalDistribution  > shared_ptr_63cc054edf33518fa708f9caa286dab6(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > & >(unique_ptr_63cc054edf33518fa708f9caa286dab6)));
            return boost::python::incref(boost::python::object(shared_ptr_63cc054edf33518fa708f9caa286dab6).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >, unique_ptr_63cc054edf33518fa708f9caa286dab6_to_python >();
}