#include "_glm.h"



namespace autowig
{
    class Wrap_ca07607ca9f45db796728119e374c0cd : public ::statiskit::glm::NominalLink, public boost::python::wrapper< struct ::statiskit::glm::NominalLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > (result);
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
    template <> autowig::Wrap_ca07607ca9f45db796728119e374c0cd const volatile * get_pointer<autowig::Wrap_ca07607ca9f45db796728119e374c0cd const volatile >(autowig::Wrap_ca07607ca9f45db796728119e374c0cd const volatile *c) { return c; }
    template <> struct ::statiskit::glm::NominalLink const volatile * get_pointer<struct ::statiskit::glm::NominalLink const volatile >(struct ::statiskit::glm::NominalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ca07607ca9f45db796728119e374c0cd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > >  (::statiskit::glm::NominalLink::*method_pointer_4400259f163f59f9bae84b768d73276c)() const = &::statiskit::glm::NominalLink::copy;
    boost::python::class_< autowig::Wrap_ca07607ca9f45db796728119e374c0cd, autowig::Held< autowig::Wrap_ca07607ca9f45db796728119e374c0cd >::Type, boost::python::bases< struct ::statiskit::glm::VectorLink >, boost::noncopyable > class_ca07607ca9f45db796728119e374c0cd("NominalLink", "", boost::python::no_init);
    class_ca07607ca9f45db796728119e374c0cd.def("copy", boost::python::pure_virtual(method_pointer_4400259f163f59f9bae84b768d73276c), "");

    if(autowig::Held< struct ::statiskit::glm::NominalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ca07607ca9f45db796728119e374c0cd >::Type, autowig::Held< struct ::statiskit::glm::NominalLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::NominalLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::NominalLink >::Type, autowig::Held< struct ::statiskit::glm::VectorLink >::Type >();
    }

}