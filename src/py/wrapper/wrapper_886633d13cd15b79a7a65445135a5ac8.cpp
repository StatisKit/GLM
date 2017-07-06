#include "_glm.h"



namespace autowig
{
    class Wrap_886633d13cd15b79a7a65445135a5ac8 : public ::statiskit::VectorLink, public boost::python::wrapper< struct ::statiskit::VectorLink >
    {
        public:
            
            virtual class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  inverse_derivative(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  inverse(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_886633d13cd15b79a7a65445135a5ac8 const volatile * get_pointer<autowig::Wrap_886633d13cd15b79a7a65445135a5ac8 const volatile >(autowig::Wrap_886633d13cd15b79a7a65445135a5ac8 const volatile *c) { return c; }
    template <> struct ::statiskit::VectorLink const volatile * get_pointer<struct ::statiskit::VectorLink const volatile >(struct ::statiskit::VectorLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_886633d13cd15b79a7a65445135a5ac8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::VectorLink::*method_pointer_8cabc84c86f05b24b8435958e900fd14)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::VectorLink::inverse;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::VectorLink::*method_pointer_e9a9d46c743f5ab897fffe19c6ebe062)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::VectorLink::inverse_derivative;
    boost::python::class_< autowig::Wrap_886633d13cd15b79a7a65445135a5ac8, autowig::Held< autowig::Wrap_886633d13cd15b79a7a65445135a5ac8 >::Type, boost::noncopyable > class_886633d13cd15b79a7a65445135a5ac8("VectorLink", "", boost::python::no_init);
    class_886633d13cd15b79a7a65445135a5ac8.def("inverse", boost::python::pure_virtual(method_pointer_8cabc84c86f05b24b8435958e900fd14), "");
    class_886633d13cd15b79a7a65445135a5ac8.def("inverse_derivative", boost::python::pure_virtual(method_pointer_e9a9d46c743f5ab897fffe19c6ebe062), "");
    if(autowig::Held< struct ::statiskit::VectorLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_886633d13cd15b79a7a65445135a5ac8 >::Type, autowig::Held< struct ::statiskit::VectorLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::VectorLink >::Type >();
    }    

}