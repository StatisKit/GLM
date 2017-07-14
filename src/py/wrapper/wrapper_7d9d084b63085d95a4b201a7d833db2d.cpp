#include "_glm.h"



namespace autowig
{

    void method_decorator_34dcd361a4bc5120ae8df2b378acc76c(class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > const & instance, const struct ::statiskit::glm::PoissonLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7d9d084b63085d95a4b201a7d833db2d()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_7d9d084b63085d95a4b201a7d833db2d_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > const & unique_ptr_7d9d084b63085d95a4b201a7d833db2d)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > & >(unique_ptr_7d9d084b63085d95a4b201a7d833db2d).release()).ptr());
            std::shared_ptr< struct ::statiskit::glm::PoissonLink  > shared_ptr_7d9d084b63085d95a4b201a7d833db2d(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > & >(unique_ptr_7d9d084b63085d95a4b201a7d833db2d)));
            return boost::python::incref(boost::python::object(shared_ptr_7d9d084b63085d95a4b201a7d833db2d).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > >, unique_ptr_7d9d084b63085d95a4b201a7d833db2d_to_python >();
}