#include "_glm.h"



namespace autowig
{
    class Wrap_3f87b5efd7cd5b609c48990b4e17379b : public ::statiskit::BinomialLink, public boost::python::wrapper< struct ::statiskit::BinomialLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > (result);
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
    template <> autowig::Wrap_3f87b5efd7cd5b609c48990b4e17379b const volatile * get_pointer<autowig::Wrap_3f87b5efd7cd5b609c48990b4e17379b const volatile >(autowig::Wrap_3f87b5efd7cd5b609c48990b4e17379b const volatile *c) { return c; }
    template <> struct ::statiskit::BinomialLink const volatile * get_pointer<struct ::statiskit::BinomialLink const volatile >(struct ::statiskit::BinomialLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3f87b5efd7cd5b609c48990b4e17379b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > >  (::statiskit::BinomialLink::*method_pointer_51aae4fd10095cb2bf118590727937c2)() const = &::statiskit::BinomialLink::copy;
    boost::python::class_< autowig::Wrap_3f87b5efd7cd5b609c48990b4e17379b, autowig::Held< autowig::Wrap_3f87b5efd7cd5b609c48990b4e17379b >::Type, boost::python::bases< struct ::statiskit::ScalarLink >, boost::noncopyable > class_3f87b5efd7cd5b609c48990b4e17379b("BinomialLink", "", boost::python::no_init);
    class_3f87b5efd7cd5b609c48990b4e17379b.def("copy", boost::python::pure_virtual(method_pointer_51aae4fd10095cb2bf118590727937c2), "");

    if(autowig::Held< struct ::statiskit::BinomialLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_3f87b5efd7cd5b609c48990b4e17379b >::Type, autowig::Held< struct ::statiskit::BinomialLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::BinomialLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialLink >::Type, autowig::Held< struct ::statiskit::ScalarLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::BinomialLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::BinomialLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::BinomialLink >::Type, struct ::statiskit::BinomialLink > > >();
    }

}