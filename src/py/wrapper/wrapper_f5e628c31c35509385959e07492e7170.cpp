#include "_glm.h"



namespace autowig
{
    class Wrap_f5e628c31c35509385959e07492e7170 : public ::statiskit::glm::OrdinalLink, public boost::python::wrapper< struct ::statiskit::glm::OrdinalLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > (result);
            }
                        
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
    template <> autowig::Wrap_f5e628c31c35509385959e07492e7170 const volatile * get_pointer<autowig::Wrap_f5e628c31c35509385959e07492e7170 const volatile >(autowig::Wrap_f5e628c31c35509385959e07492e7170 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::OrdinalLink const volatile * get_pointer<struct ::statiskit::glm::OrdinalLink const volatile >(struct ::statiskit::glm::OrdinalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f5e628c31c35509385959e07492e7170()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > >  (::statiskit::glm::OrdinalLink::*method_pointer_2ac775625ec25147b744f0521e5caba0)() const = &::statiskit::glm::OrdinalLink::copy;
    boost::python::class_< autowig::Wrap_f5e628c31c35509385959e07492e7170, autowig::Held< autowig::Wrap_f5e628c31c35509385959e07492e7170 >::Type, boost::python::bases< struct ::statiskit::glm::VectorLink >, boost::noncopyable > class_f5e628c31c35509385959e07492e7170("OrdinalLink", "", boost::python::no_init);
    class_f5e628c31c35509385959e07492e7170.def("copy", boost::python::pure_virtual(method_pointer_2ac775625ec25147b744f0521e5caba0), "");

    if(autowig::Held< struct ::statiskit::glm::OrdinalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f5e628c31c35509385959e07492e7170 >::Type, autowig::Held< struct ::statiskit::glm::OrdinalLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::OrdinalLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::OrdinalLink >::Type, autowig::Held< struct ::statiskit::glm::VectorLink >::Type >();
    }

}