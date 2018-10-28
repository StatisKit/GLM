#include "_glm.h"



namespace autowig
{
    class Wrap_8f19658a39a253a2b76a0477182d7754 : public ::statiskit::glm::VectorLink, public boost::python::wrapper< struct ::statiskit::glm::VectorLink >
    {
        public:
            
            virtual class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  inverse_derivative(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  inverse(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse")(param_0); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  evaluate(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("evaluate")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_8f19658a39a253a2b76a0477182d7754 const volatile * get_pointer<autowig::Wrap_8f19658a39a253a2b76a0477182d7754 const volatile >(autowig::Wrap_8f19658a39a253a2b76a0477182d7754 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::VectorLink const volatile * get_pointer<struct ::statiskit::glm::VectorLink const volatile >(struct ::statiskit::glm::VectorLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8f19658a39a253a2b76a0477182d7754()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::VectorLink::*method_pointer_4d2059b15a575948ab0d799bda8dfbaf)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::glm::VectorLink::evaluate;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::VectorLink::*method_pointer_65b070b2b6155aa0a064200d19762fb8)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::glm::VectorLink::inverse;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::glm::VectorLink::*method_pointer_c10ed2d0c14d51018e3cf802f5175b9b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::glm::VectorLink::inverse_derivative;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::VectorLink::*method_pointer_2bb06310488e5cd9b983086e8db2cdca)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::glm::VectorLink::in_open_corner;
    boost::python::class_< autowig::Wrap_8f19658a39a253a2b76a0477182d7754, autowig::Held< autowig::Wrap_8f19658a39a253a2b76a0477182d7754 >::Type, boost::noncopyable > class_8f19658a39a253a2b76a0477182d7754("VectorLink", "", boost::python::no_init);
    class_8f19658a39a253a2b76a0477182d7754.def("evaluate", boost::python::pure_virtual(method_pointer_4d2059b15a575948ab0d799bda8dfbaf), "");
    class_8f19658a39a253a2b76a0477182d7754.def("inverse", boost::python::pure_virtual(method_pointer_65b070b2b6155aa0a064200d19762fb8), "");
    class_8f19658a39a253a2b76a0477182d7754.def("inverse_derivative", boost::python::pure_virtual(method_pointer_c10ed2d0c14d51018e3cf802f5175b9b), "");
    class_8f19658a39a253a2b76a0477182d7754.def("in_open_corner", method_pointer_2bb06310488e5cd9b983086e8db2cdca, "");
    class_8f19658a39a253a2b76a0477182d7754.def_readwrite("epsilon_0", &::statiskit::glm::VectorLink::_epsilon_0, "");
    class_8f19658a39a253a2b76a0477182d7754.def_readwrite("epsilon_1", &::statiskit::glm::VectorLink::_epsilon_1, "");
    if(autowig::Held< struct ::statiskit::glm::VectorLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_8f19658a39a253a2b76a0477182d7754 >::Type, autowig::Held< struct ::statiskit::glm::VectorLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::VectorLink >::Type >();
    }    

}