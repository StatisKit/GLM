#include "_glm.h"



namespace autowig
{
    class Wrap_6f1eb66a45e854cea9470a44c5a504ca : public ::statiskit::glm::BinomialLink, public boost::python::wrapper< struct ::statiskit::glm::BinomialLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > (result);
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
    template <> autowig::Wrap_6f1eb66a45e854cea9470a44c5a504ca const volatile * get_pointer<autowig::Wrap_6f1eb66a45e854cea9470a44c5a504ca const volatile >(autowig::Wrap_6f1eb66a45e854cea9470a44c5a504ca const volatile *c) { return c; }
    template <> struct ::statiskit::glm::BinomialLink const volatile * get_pointer<struct ::statiskit::glm::BinomialLink const volatile >(struct ::statiskit::glm::BinomialLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6f1eb66a45e854cea9470a44c5a504ca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > >  (::statiskit::glm::BinomialLink::*method_pointer_cbd6cb94f82859609c826f08d198eb34)() const = &::statiskit::glm::BinomialLink::copy;
    boost::python::class_< autowig::Wrap_6f1eb66a45e854cea9470a44c5a504ca, autowig::Held< autowig::Wrap_6f1eb66a45e854cea9470a44c5a504ca >::Type, boost::python::bases< struct ::statiskit::glm::ScalarLink >, boost::noncopyable > class_6f1eb66a45e854cea9470a44c5a504ca("BinomialLink", "", boost::python::no_init);
    class_6f1eb66a45e854cea9470a44c5a504ca.def("copy", boost::python::pure_virtual(method_pointer_cbd6cb94f82859609c826f08d198eb34), "");

    if(autowig::Held< struct ::statiskit::glm::BinomialLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6f1eb66a45e854cea9470a44c5a504ca >::Type, autowig::Held< struct ::statiskit::glm::BinomialLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::BinomialLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::BinomialLink >::Type, autowig::Held< struct ::statiskit::glm::ScalarLink >::Type >();
    }

}