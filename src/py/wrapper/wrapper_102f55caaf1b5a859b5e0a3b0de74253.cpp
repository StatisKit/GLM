#include "_glm.h"



namespace autowig
{
    class Wrap_102f55caaf1b5a859b5e0a3b0de74253 : public ::statiskit::ScalarLink, public boost::python::wrapper< struct ::statiskit::ScalarLink >
    {
        public:
            
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
    template <> autowig::Wrap_102f55caaf1b5a859b5e0a3b0de74253 const volatile * get_pointer<autowig::Wrap_102f55caaf1b5a859b5e0a3b0de74253 const volatile >(autowig::Wrap_102f55caaf1b5a859b5e0a3b0de74253 const volatile *c) { return c; }
    template <> struct ::statiskit::ScalarLink const volatile * get_pointer<struct ::statiskit::ScalarLink const volatile >(struct ::statiskit::ScalarLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_102f55caaf1b5a859b5e0a3b0de74253()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::ScalarLink::*method_pointer_fd71104fb4f851fdb4e09ab16ab12216)(double const &) const = &::statiskit::ScalarLink::inverse;
    double  (::statiskit::ScalarLink::*method_pointer_02745205858557b0bec3c96fe40dde8d)(double const &) const = &::statiskit::ScalarLink::inverse_derivative;
    boost::python::class_< autowig::Wrap_102f55caaf1b5a859b5e0a3b0de74253, autowig::Held< autowig::Wrap_102f55caaf1b5a859b5e0a3b0de74253 >::Type, boost::noncopyable > class_102f55caaf1b5a859b5e0a3b0de74253("ScalarLink", "", boost::python::no_init);
    class_102f55caaf1b5a859b5e0a3b0de74253.def("inverse", boost::python::pure_virtual(method_pointer_fd71104fb4f851fdb4e09ab16ab12216), "");
    class_102f55caaf1b5a859b5e0a3b0de74253.def("inverse_derivative", boost::python::pure_virtual(method_pointer_02745205858557b0bec3c96fe40dde8d), "");
    if(autowig::Held< struct ::statiskit::ScalarLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_102f55caaf1b5a859b5e0a3b0de74253 >::Type, autowig::Held< struct ::statiskit::ScalarLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ScalarLink >::Type >();
    }    

}