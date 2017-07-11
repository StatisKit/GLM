#include "_glm.h"



namespace autowig
{
    class Wrap_05c9ac12ed4251ed8e7ea5ce4603e683 : public ::statiskit::glm::PoissonLink, public boost::python::wrapper< struct ::statiskit::glm::PoissonLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > (result);
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
    template <> autowig::Wrap_05c9ac12ed4251ed8e7ea5ce4603e683 const volatile * get_pointer<autowig::Wrap_05c9ac12ed4251ed8e7ea5ce4603e683 const volatile >(autowig::Wrap_05c9ac12ed4251ed8e7ea5ce4603e683 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::PoissonLink const volatile * get_pointer<struct ::statiskit::glm::PoissonLink const volatile >(struct ::statiskit::glm::PoissonLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_05c9ac12ed4251ed8e7ea5ce4603e683()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > >  (::statiskit::glm::PoissonLink::*method_pointer_9495bfec0f515c05b36c27235cfe5dca)() const = &::statiskit::glm::PoissonLink::copy;
    boost::python::class_< autowig::Wrap_05c9ac12ed4251ed8e7ea5ce4603e683, autowig::Held< autowig::Wrap_05c9ac12ed4251ed8e7ea5ce4603e683 >::Type, boost::python::bases< struct ::statiskit::glm::ScalarLink >, boost::noncopyable > class_05c9ac12ed4251ed8e7ea5ce4603e683("PoissonLink", "", boost::python::no_init);
    class_05c9ac12ed4251ed8e7ea5ce4603e683.def("copy", boost::python::pure_virtual(method_pointer_9495bfec0f515c05b36c27235cfe5dca), "");

    if(autowig::Held< struct ::statiskit::glm::PoissonLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_05c9ac12ed4251ed8e7ea5ce4603e683 >::Type, autowig::Held< struct ::statiskit::glm::PoissonLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::PoissonLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::PoissonLink >::Type, autowig::Held< struct ::statiskit::glm::ScalarLink >::Type >();
    }

}