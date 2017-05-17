#include "_glm.h"



namespace autowig
{
    class Wrap_dc48f2feea7056a38623863577a67de2 : public ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink >, public boost::python::wrapper< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > >
    {
        public:
            

        protected:
            
            virtual void  update(double const & param_0) 
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_dc48f2feea7056a38623863577a67de2 const volatile * get_pointer<autowig::Wrap_dc48f2feea7056a38623863577a67de2 const volatile >(autowig::Wrap_dc48f2feea7056a38623863577a67de2 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > const volatile * get_pointer<struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > const volatile >(struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dc48f2feea7056a38623863577a67de2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< autowig::Wrap_dc48f2feea7056a38623863577a67de2, autowig::Held< autowig::Wrap_dc48f2feea7056a38623863577a67de2 >::Type, boost::python::bases< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > >, boost::noncopyable > class_dc48f2feea7056a38623863577a67de2("_DiscreteGeneralizedLinearModel_dc48f2feea7056a38623863577a67de2", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_dc48f2feea7056a38623863577a67de2 >::Type, autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > >::Type, struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::PoissonLink > > > >();
    }

}