#include "_glm.h"



namespace autowig
{
    class Wrap_1012a62884255e6391bbbc369818186d : public ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink >, public boost::python::wrapper< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > >
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
    template <> autowig::Wrap_1012a62884255e6391bbbc369818186d const volatile * get_pointer<autowig::Wrap_1012a62884255e6391bbbc369818186d const volatile >(autowig::Wrap_1012a62884255e6391bbbc369818186d const volatile *c) { return c; }
    template <> struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > const volatile * get_pointer<struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > const volatile >(struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1012a62884255e6391bbbc369818186d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< autowig::Wrap_1012a62884255e6391bbbc369818186d, autowig::Held< autowig::Wrap_1012a62884255e6391bbbc369818186d >::Type, boost::python::bases< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > >, boost::noncopyable > class_1012a62884255e6391bbbc369818186d("_UnivariateDiscreteGeneralizedLinearModel_1012a62884255e6391bbbc369818186d", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_1012a62884255e6391bbbc369818186d >::Type, autowig::Held< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > >::Type >();
    }

}