#include "_glm.h"



namespace autowig
{

    void method_decorator_6d762bbec20e584bbe841ac676350359(class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > const & instance, const struct ::statiskit::glm::BinomialLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_92ad564706435f71b79cfc3c993fae2c()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_92ad564706435f71b79cfc3c993fae2c_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > const & unique_ptr_92ad564706435f71b79cfc3c993fae2c)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > & >(unique_ptr_92ad564706435f71b79cfc3c993fae2c).release()).ptr());
            std::shared_ptr< struct ::statiskit::glm::BinomialLink  > shared_ptr_92ad564706435f71b79cfc3c993fae2c(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > & >(unique_ptr_92ad564706435f71b79cfc3c993fae2c)));
            return boost::python::incref(boost::python::object(shared_ptr_92ad564706435f71b79cfc3c993fae2c).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > >, unique_ptr_92ad564706435f71b79cfc3c993fae2c_to_python >();
}