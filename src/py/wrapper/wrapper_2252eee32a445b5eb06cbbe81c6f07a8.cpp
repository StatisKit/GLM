#include "_glm.h"



namespace autowig
{
    class Wrap_2252eee32a445b5eb06cbbe81c6f07a8 : public ::statiskit::glm::ScalarLink, public boost::python::wrapper< struct ::statiskit::glm::ScalarLink >
    {
        public:
            
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
    template <> autowig::Wrap_2252eee32a445b5eb06cbbe81c6f07a8 const volatile * get_pointer<autowig::Wrap_2252eee32a445b5eb06cbbe81c6f07a8 const volatile >(autowig::Wrap_2252eee32a445b5eb06cbbe81c6f07a8 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::ScalarLink const volatile * get_pointer<struct ::statiskit::glm::ScalarLink const volatile >(struct ::statiskit::glm::ScalarLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2252eee32a445b5eb06cbbe81c6f07a8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    double  (::statiskit::glm::ScalarLink::*method_pointer_5dcdc12fa57c5edc9de0e319163d1cca)(double const &) const = &::statiskit::glm::ScalarLink::evaluate;
    double  (::statiskit::glm::ScalarLink::*method_pointer_fc86be68d84e511e9a34503a8754077a)(double const &) const = &::statiskit::glm::ScalarLink::inverse;
    double  (::statiskit::glm::ScalarLink::*method_pointer_9ba4fc1dd4f652f392ce40b2bf511b7b)(double const &) const = &::statiskit::glm::ScalarLink::inverse_derivative;
    boost::python::class_< autowig::Wrap_2252eee32a445b5eb06cbbe81c6f07a8, autowig::Held< autowig::Wrap_2252eee32a445b5eb06cbbe81c6f07a8 >::Type, boost::noncopyable > class_2252eee32a445b5eb06cbbe81c6f07a8("ScalarLink", "", boost::python::no_init);
    class_2252eee32a445b5eb06cbbe81c6f07a8.def("evaluate", boost::python::pure_virtual(method_pointer_5dcdc12fa57c5edc9de0e319163d1cca), "");
    class_2252eee32a445b5eb06cbbe81c6f07a8.def("inverse", boost::python::pure_virtual(method_pointer_fc86be68d84e511e9a34503a8754077a), "");
    class_2252eee32a445b5eb06cbbe81c6f07a8.def("inverse_derivative", boost::python::pure_virtual(method_pointer_9ba4fc1dd4f652f392ce40b2bf511b7b), "");
    if(autowig::Held< struct ::statiskit::glm::ScalarLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_2252eee32a445b5eb06cbbe81c6f07a8 >::Type, autowig::Held< struct ::statiskit::glm::ScalarLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::ScalarLink >::Type >();
    }    

}