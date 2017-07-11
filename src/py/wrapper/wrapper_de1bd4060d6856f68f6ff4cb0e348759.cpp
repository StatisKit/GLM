#include "_glm.h"



namespace autowig
{
    class Wrap_de1bd4060d6856f68f6ff4cb0e348759 : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > >
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
    template <> autowig::Wrap_de1bd4060d6856f68f6ff4cb0e348759 const volatile * get_pointer<autowig::Wrap_de1bd4060d6856f68f6ff4cb0e348759 const volatile >(autowig::Wrap_de1bd4060d6856f68f6ff4cb0e348759 const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_de1bd4060d6856f68f6ff4cb0e348759()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::glm::ScalarPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::PoissonLink >::*method_pointer_a48b0b25a83354e5a8abdf11600e66ca)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::PoissonLink >::*method_pointer_544e2ec33f1a5e239cc9a4bffac133d6)(class ::statiskit::glm::ScalarPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >::set_predictor;
    struct ::statiskit::glm::PoissonLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::PoissonLink >::*method_pointer_ebcd9de0325d523c97eb8d78582f5c84)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::PoissonLink >::*method_pointer_46f09f7f0370522a88804267faa646ca)(struct ::statiskit::glm::PoissonLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >::set_link;
    boost::python::class_< autowig::Wrap_de1bd4060d6856f68f6ff4cb0e348759, autowig::Held< autowig::Wrap_de1bd4060d6856f68f6ff4cb0e348759 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistribution >, boost::noncopyable > class_de1bd4060d6856f68f6ff4cb0e348759("_GeneralizedLinearModel_de1bd4060d6856f68f6ff4cb0e348759", "", boost::python::no_init);
    class_de1bd4060d6856f68f6ff4cb0e348759.def("get_predictor", method_pointer_a48b0b25a83354e5a8abdf11600e66ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_de1bd4060d6856f68f6ff4cb0e348759.def("set_predictor", method_pointer_544e2ec33f1a5e239cc9a4bffac133d6, "");
    class_de1bd4060d6856f68f6ff4cb0e348759.def("get_link", method_pointer_ebcd9de0325d523c97eb8d78582f5c84, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_de1bd4060d6856f68f6ff4cb0e348759.def("set_link", method_pointer_46f09f7f0370522a88804267faa646ca, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_de1bd4060d6856f68f6ff4cb0e348759 >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistribution >::Type >();
    }

}