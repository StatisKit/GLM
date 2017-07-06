#include "_glm.h"



namespace autowig
{
    class Wrap_19d61faad9355f88b432f35a0eece84a : public ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink >, public boost::python::wrapper< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > (result);
            }
                        

        protected:
            
            virtual void  update(double const & param_0) const
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_19d61faad9355f88b432f35a0eece84a const volatile * get_pointer<autowig::Wrap_19d61faad9355f88b432f35a0eece84a const volatile >(autowig::Wrap_19d61faad9355f88b432f35a0eece84a const volatile *c) { return c; }
    template <> struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > const volatile * get_pointer<struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > const volatile >(struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_19d61faad9355f88b432f35a0eece84a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< autowig::Wrap_19d61faad9355f88b432f35a0eece84a, autowig::Held< autowig::Wrap_19d61faad9355f88b432f35a0eece84a >::Type, boost::python::bases< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > >, boost::noncopyable > class_19d61faad9355f88b432f35a0eece84a("_DiscreteGeneralizedLinearModel_19d61faad9355f88b432f35a0eece84a", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_19d61faad9355f88b432f35a0eece84a >::Type, autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::NegativeBinomialLink > >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > >::Type >();
    }

}