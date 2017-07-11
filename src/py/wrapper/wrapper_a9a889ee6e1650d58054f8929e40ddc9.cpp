#include "_glm.h"



namespace autowig
{

    void method_decorator_a5d9431b763d5d2080db8c636b8ac06f(class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > > const & instance, const struct ::statiskit::glm::NegativeBinomialLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a9a889ee6e1650d58054f8929e40ddc9()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_a9a889ee6e1650d58054f8929e40ddc9_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > > const & unique_ptr_a9a889ee6e1650d58054f8929e40ddc9)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > > & >(unique_ptr_a9a889ee6e1650d58054f8929e40ddc9).release()).ptr());
            std::shared_ptr< struct ::statiskit::glm::NegativeBinomialLink  > shared_ptr_a9a889ee6e1650d58054f8929e40ddc9(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > > & >(unique_ptr_a9a889ee6e1650d58054f8929e40ddc9)));
            return boost::python::incref(boost::python::object(shared_ptr_a9a889ee6e1650d58054f8929e40ddc9).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > >, unique_ptr_a9a889ee6e1650d58054f8929e40ddc9_to_python >();
}