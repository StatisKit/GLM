#include "_glm.h"



namespace autowig
{
    class Wrap_96ab5a0752a454d3a1f8d2008e30a6eb : public ::statiskit::glm::BinaryLink, public boost::python::wrapper< struct ::statiskit::glm::BinaryLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > (result);
            }
                        
            virtual double  inverse_derivative(double const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
                        
            virtual double  inverse(double const & param_0) const
            { return this->get_override("inverse")(param_0); }
                        
            virtual double  evaluate(double const & param_0) const
            { return this->get_override("evaluate")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_96ab5a0752a454d3a1f8d2008e30a6eb const volatile * get_pointer<autowig::Wrap_96ab5a0752a454d3a1f8d2008e30a6eb const volatile >(autowig::Wrap_96ab5a0752a454d3a1f8d2008e30a6eb const volatile *c) { return c; }
    template <> struct ::statiskit::glm::BinaryLink const volatile * get_pointer<struct ::statiskit::glm::BinaryLink const volatile >(struct ::statiskit::glm::BinaryLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_96ab5a0752a454d3a1f8d2008e30a6eb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > >  (::statiskit::glm::BinaryLink::*method_pointer_da608197d2c35ac98ff3e3ce86296a17)() const = &::statiskit::glm::BinaryLink::copy;
    boost::python::class_< autowig::Wrap_96ab5a0752a454d3a1f8d2008e30a6eb, autowig::Held< autowig::Wrap_96ab5a0752a454d3a1f8d2008e30a6eb >::Type, boost::python::bases< struct ::statiskit::glm::ScalarLink >, boost::noncopyable > class_96ab5a0752a454d3a1f8d2008e30a6eb("BinaryLink", "", boost::python::no_init);
    class_96ab5a0752a454d3a1f8d2008e30a6eb.def("copy", boost::python::pure_virtual(method_pointer_da608197d2c35ac98ff3e3ce86296a17), "");

    if(autowig::Held< struct ::statiskit::glm::BinaryLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_96ab5a0752a454d3a1f8d2008e30a6eb >::Type, autowig::Held< struct ::statiskit::glm::BinaryLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::BinaryLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::BinaryLink >::Type, autowig::Held< struct ::statiskit::glm::ScalarLink >::Type >();
    }

}