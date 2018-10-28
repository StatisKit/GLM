#include "_glm.h"



namespace autowig
{
    class Wrap_9f9f076afa5751059714afdf107b13ab : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > >
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
    template <> autowig::Wrap_9f9f076afa5751059714afdf107b13ab const volatile * get_pointer<autowig::Wrap_9f9f076afa5751059714afdf107b13ab const volatile >(autowig::Wrap_9f9f076afa5751059714afdf107b13ab const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9f9f076afa5751059714afdf107b13ab()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::glm::ScalarPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::BinaryLink >::*method_pointer_6e4cad035b24525cb0abb033bd608d55)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::BinaryLink >::*method_pointer_c3d25175e84a52718db5d2a57b542828)(class ::statiskit::glm::ScalarPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >::set_predictor;
    struct ::statiskit::glm::BinaryLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::BinaryLink >::*method_pointer_dcd636748ec956069311fc63872750c6)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::BinaryLink >::*method_pointer_f6c533ed73ff5e77ae79bcf51de18321)(struct ::statiskit::glm::BinaryLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >::set_link;
    boost::python::class_< autowig::Wrap_9f9f076afa5751059714afdf107b13ab, autowig::Held< autowig::Wrap_9f9f076afa5751059714afdf107b13ab >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistribution >, boost::noncopyable > class_9f9f076afa5751059714afdf107b13ab("_GeneralizedLinearModel_9f9f076afa5751059714afdf107b13ab", "", boost::python::no_init);
    class_9f9f076afa5751059714afdf107b13ab.def("get_predictor", method_pointer_6e4cad035b24525cb0abb033bd608d55, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9f9f076afa5751059714afdf107b13ab.def("set_predictor", method_pointer_c3d25175e84a52718db5d2a57b542828, "");
    class_9f9f076afa5751059714afdf107b13ab.def("get_link", method_pointer_dcd636748ec956069311fc63872750c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_9f9f076afa5751059714afdf107b13ab.def("set_link", method_pointer_f6c533ed73ff5e77ae79bcf51de18321, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9f9f076afa5751059714afdf107b13ab >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type >();
    }

}