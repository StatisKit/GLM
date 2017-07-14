#include "_glm.h"



namespace autowig
{
    class Wrap_1bddc9ec77e750d7b0b20663f23e8775 : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

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
    template <> autowig::Wrap_1bddc9ec77e750d7b0b20663f23e8775 const volatile * get_pointer<autowig::Wrap_1bddc9ec77e750d7b0b20663f23e8775 const volatile >(autowig::Wrap_1bddc9ec77e750d7b0b20663f23e8775 const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1bddc9ec77e750d7b0b20663f23e8775()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::glm::ScalarPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::NegativeBinomialLink >::*method_pointer_ccb1b2221fdf5289be6a817710b92090)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::NegativeBinomialLink >::*method_pointer_d2e22405ca7751c5be81e52a71ba1af3)(class ::statiskit::glm::ScalarPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >::set_predictor;
    struct ::statiskit::glm::NegativeBinomialLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::NegativeBinomialLink >::*method_pointer_7062217873015be5bc73b443d43b3b0d)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::NegativeBinomialLink >::*method_pointer_fe838504168659ba80c33044ca6fa154)(struct ::statiskit::glm::NegativeBinomialLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >::set_link;
    boost::python::class_< autowig::Wrap_1bddc9ec77e750d7b0b20663f23e8775, autowig::Held< autowig::Wrap_1bddc9ec77e750d7b0b20663f23e8775 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistribution >, boost::noncopyable > class_1bddc9ec77e750d7b0b20663f23e8775("_GeneralizedLinearModel_1bddc9ec77e750d7b0b20663f23e8775", "", boost::python::no_init);
    class_1bddc9ec77e750d7b0b20663f23e8775.def("get_predictor", method_pointer_ccb1b2221fdf5289be6a817710b92090, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1bddc9ec77e750d7b0b20663f23e8775.def("set_predictor", method_pointer_d2e22405ca7751c5be81e52a71ba1af3, "");
    class_1bddc9ec77e750d7b0b20663f23e8775.def("get_link", method_pointer_7062217873015be5bc73b443d43b3b0d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1bddc9ec77e750d7b0b20663f23e8775.def("set_link", method_pointer_fe838504168659ba80c33044ca6fa154, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_1bddc9ec77e750d7b0b20663f23e8775 >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistribution >::Type >();
    }

}