#include "_glm.h"



namespace autowig
{
    class Wrap_1c7c25d5171b5f078e164f41f06ab8b7 : public ::statiskit::PoissonLink, public boost::python::wrapper< struct ::statiskit::PoissonLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > (result);
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
    template <> autowig::Wrap_1c7c25d5171b5f078e164f41f06ab8b7 const volatile * get_pointer<autowig::Wrap_1c7c25d5171b5f078e164f41f06ab8b7 const volatile >(autowig::Wrap_1c7c25d5171b5f078e164f41f06ab8b7 const volatile *c) { return c; }
    template <> struct ::statiskit::PoissonLink const volatile * get_pointer<struct ::statiskit::PoissonLink const volatile >(struct ::statiskit::PoissonLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1c7c25d5171b5f078e164f41f06ab8b7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > >  (::statiskit::PoissonLink::*method_pointer_d35c3c00a77a514d8a2523b4e9642daf)() const = &::statiskit::PoissonLink::copy;
    boost::python::class_< autowig::Wrap_1c7c25d5171b5f078e164f41f06ab8b7, autowig::Held< autowig::Wrap_1c7c25d5171b5f078e164f41f06ab8b7 >::Type, boost::python::bases< struct ::statiskit::ScalarLink >, boost::noncopyable > class_1c7c25d5171b5f078e164f41f06ab8b7("PoissonLink", "", boost::python::no_init);
    class_1c7c25d5171b5f078e164f41f06ab8b7.def("copy", boost::python::pure_virtual(method_pointer_d35c3c00a77a514d8a2523b4e9642daf), "");

    if(autowig::Held< struct ::statiskit::PoissonLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_1c7c25d5171b5f078e164f41f06ab8b7 >::Type, autowig::Held< struct ::statiskit::PoissonLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PoissonLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PoissonLink >::Type, autowig::Held< struct ::statiskit::ScalarLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PoissonLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PoissonLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PoissonLink >::Type, struct ::statiskit::PoissonLink > > >();
    }

}