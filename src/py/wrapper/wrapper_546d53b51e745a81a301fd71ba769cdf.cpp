#include "_glm.h"



namespace autowig
{

    void method_decorator_19aff2070061555a850ab4aa967bfdda(class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > const & instance, const struct ::statiskit::PoissonLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_546d53b51e745a81a301fd71ba769cdf()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_546d53b51e745a81a301fd71ba769cdf_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > const & unique_ptr_546d53b51e745a81a301fd71ba769cdf)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > & >(unique_ptr_546d53b51e745a81a301fd71ba769cdf).release()).ptr());
            std::shared_ptr< struct ::statiskit::PoissonLink  > shared_ptr_546d53b51e745a81a301fd71ba769cdf(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > & >(unique_ptr_546d53b51e745a81a301fd71ba769cdf)));
            return boost::python::incref(boost::python::object(shared_ptr_546d53b51e745a81a301fd71ba769cdf).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > >, unique_ptr_546d53b51e745a81a301fd71ba769cdf_to_python >();
}