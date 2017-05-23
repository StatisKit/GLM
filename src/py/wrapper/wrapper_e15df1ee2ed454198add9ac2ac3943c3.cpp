#include "_glm.h"



namespace autowig
{
    class Wrap_e15df1ee2ed454198add9ac2ac3943c3 : public ::statiskit::NegativeBinomialLink, public boost::python::wrapper< struct ::statiskit::NegativeBinomialLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > (result);
            }
                        
            virtual double  inverse_derivative(double const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
                        
            virtual double  inverse(double const & param_0) const
            { return this->get_override("inverse")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_e15df1ee2ed454198add9ac2ac3943c3 const volatile * get_pointer<autowig::Wrap_e15df1ee2ed454198add9ac2ac3943c3 const volatile >(autowig::Wrap_e15df1ee2ed454198add9ac2ac3943c3 const volatile *c) { return c; }
    template <> struct ::statiskit::NegativeBinomialLink const volatile * get_pointer<struct ::statiskit::NegativeBinomialLink const volatile >(struct ::statiskit::NegativeBinomialLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e15df1ee2ed454198add9ac2ac3943c3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > >  (::statiskit::NegativeBinomialLink::*method_pointer_cad56b07223356b3ba8db23ca65f233f)() const = &::statiskit::NegativeBinomialLink::copy;
    boost::python::class_< autowig::Wrap_e15df1ee2ed454198add9ac2ac3943c3, autowig::Held< autowig::Wrap_e15df1ee2ed454198add9ac2ac3943c3 >::Type, boost::python::bases< struct ::statiskit::ScalarLink >, boost::noncopyable > class_e15df1ee2ed454198add9ac2ac3943c3("NegativeBinomialLink", "", boost::python::no_init);
    class_e15df1ee2ed454198add9ac2ac3943c3.def("copy", boost::python::pure_virtual(method_pointer_cad56b07223356b3ba8db23ca65f233f), "");

    if(autowig::Held< struct ::statiskit::NegativeBinomialLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e15df1ee2ed454198add9ac2ac3943c3 >::Type, autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type, autowig::Held< struct ::statiskit::ScalarLink >::Type >();
    }

}