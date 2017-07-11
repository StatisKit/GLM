#include "_glm.h"



namespace autowig
{
    class Wrap_d9a0a4226b4b5712b12e3fd21182f19a : public ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink >, public boost::python::wrapper< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > >
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
    template <> autowig::Wrap_d9a0a4226b4b5712b12e3fd21182f19a const volatile * get_pointer<autowig::Wrap_d9a0a4226b4b5712b12e3fd21182f19a const volatile >(autowig::Wrap_d9a0a4226b4b5712b12e3fd21182f19a const volatile *c) { return c; }
    template <> struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > const volatile * get_pointer<struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > const volatile >(struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d9a0a4226b4b5712b12e3fd21182f19a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::NegativeBinomialLink >::*method_pointer_fa258cae5bf05771b6ac574c344ae73e)() = &::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink >::get_distribution;
    void  (::statiskit::glm::FLink< ::statiskit::glm::NegativeBinomialLink >::*method_pointer_2def885916a05092a17d47cbe45174b8)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink >::set_distribution;
    boost::python::class_< autowig::Wrap_d9a0a4226b4b5712b12e3fd21182f19a, autowig::Held< autowig::Wrap_d9a0a4226b4b5712b12e3fd21182f19a >::Type, boost::python::bases< struct ::statiskit::glm::NegativeBinomialLink >, boost::noncopyable > class_d9a0a4226b4b5712b12e3fd21182f19a("_FLink_d9a0a4226b4b5712b12e3fd21182f19a", "", boost::python::no_init);
    class_d9a0a4226b4b5712b12e3fd21182f19a.def("get_distribution", method_pointer_fa258cae5bf05771b6ac574c344ae73e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d9a0a4226b4b5712b12e3fd21182f19a.def("set_distribution", method_pointer_2def885916a05092a17d47cbe45174b8, "");

    if(autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d9a0a4226b4b5712b12e3fd21182f19a >::Type, autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > >::Type, autowig::Held< struct ::statiskit::glm::NegativeBinomialLink >::Type >();
    }

}