#include "_glm.h"



namespace autowig
{
    class Wrap_e00a87330d325a42b464766dfd777810 : public ::statiskit::glm::NegativeBinomialLink, public boost::python::wrapper< struct ::statiskit::glm::NegativeBinomialLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > > (result);
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
    template <> autowig::Wrap_e00a87330d325a42b464766dfd777810 const volatile * get_pointer<autowig::Wrap_e00a87330d325a42b464766dfd777810 const volatile >(autowig::Wrap_e00a87330d325a42b464766dfd777810 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::NegativeBinomialLink const volatile * get_pointer<struct ::statiskit::glm::NegativeBinomialLink const volatile >(struct ::statiskit::glm::NegativeBinomialLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e00a87330d325a42b464766dfd777810()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > >  (::statiskit::glm::NegativeBinomialLink::*method_pointer_6683b7d624465ae99491440ee1a4cb83)() const = &::statiskit::glm::NegativeBinomialLink::copy;
    boost::python::class_< autowig::Wrap_e00a87330d325a42b464766dfd777810, autowig::Held< autowig::Wrap_e00a87330d325a42b464766dfd777810 >::Type, boost::python::bases< struct ::statiskit::glm::ScalarLink >, boost::noncopyable > class_e00a87330d325a42b464766dfd777810("NegativeBinomialLink", "", boost::python::no_init);
    class_e00a87330d325a42b464766dfd777810.def("copy", boost::python::pure_virtual(method_pointer_6683b7d624465ae99491440ee1a4cb83), "");

    if(autowig::Held< struct ::statiskit::glm::NegativeBinomialLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e00a87330d325a42b464766dfd777810 >::Type, autowig::Held< struct ::statiskit::glm::NegativeBinomialLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::NegativeBinomialLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::NegativeBinomialLink >::Type, autowig::Held< struct ::statiskit::glm::ScalarLink >::Type >();
    }

}