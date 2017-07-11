#include "_glm.h"



namespace autowig
{

    void method_decorator_e89f5f49e2085f1fb42554ba7c8d30a1(class ::std::unique_ptr< struct ::statiskit::glm::MultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::MultinomialSplittingLink > > const & instance, const struct ::statiskit::glm::MultinomialSplittingLink & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::glm::MultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::MultinomialSplittingLink > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::glm::MultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::MultinomialSplittingLink > > const volatile >(class ::std::unique_ptr< struct ::statiskit::glm::MultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::MultinomialSplittingLink > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_79baa138c28f5ad292b3ece9219ffebf()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_79baa138c28f5ad292b3ece9219ffebf_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::glm::MultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::MultinomialSplittingLink > > const & unique_ptr_79baa138c28f5ad292b3ece9219ffebf)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::MultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::MultinomialSplittingLink > > & >(unique_ptr_79baa138c28f5ad292b3ece9219ffebf).release()).ptr());
            std::shared_ptr< struct ::statiskit::glm::MultinomialSplittingLink  > shared_ptr_79baa138c28f5ad292b3ece9219ffebf(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::glm::MultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::MultinomialSplittingLink > > & >(unique_ptr_79baa138c28f5ad292b3ece9219ffebf)));
            return boost::python::incref(boost::python::object(shared_ptr_79baa138c28f5ad292b3ece9219ffebf).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::glm::MultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::MultinomialSplittingLink > >, unique_ptr_79baa138c28f5ad292b3ece9219ffebf_to_python >();
}