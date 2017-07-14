#include "_glm.h"



namespace autowig
{
    class Wrap_505ae9eaca09534fabb9d3bf51347ca5 : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > >
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
    template <> autowig::Wrap_505ae9eaca09534fabb9d3bf51347ca5 const volatile * get_pointer<autowig::Wrap_505ae9eaca09534fabb9d3bf51347ca5 const volatile >(autowig::Wrap_505ae9eaca09534fabb9d3bf51347ca5 const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_505ae9eaca09534fabb9d3bf51347ca5()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::glm::ScalarPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::BinomialLink >::*method_pointer_75a5cbf4e55553e1ac5d0a9b4f21530e)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::BinomialLink >::*method_pointer_0869e82f2c4a5771872c47ed07b2fb03)(class ::statiskit::glm::ScalarPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >::set_predictor;
    struct ::statiskit::glm::BinomialLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::BinomialLink >::*method_pointer_c684ae5ce1b25f099e40cb2b009774af)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::BinomialLink >::*method_pointer_358f458c97d3521881adaa28f6ee1b80)(struct ::statiskit::glm::BinomialLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >::set_link;
    boost::python::class_< autowig::Wrap_505ae9eaca09534fabb9d3bf51347ca5, autowig::Held< autowig::Wrap_505ae9eaca09534fabb9d3bf51347ca5 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistribution >, boost::noncopyable > class_505ae9eaca09534fabb9d3bf51347ca5("_GeneralizedLinearModel_505ae9eaca09534fabb9d3bf51347ca5", "", boost::python::no_init);
    class_505ae9eaca09534fabb9d3bf51347ca5.def("get_predictor", method_pointer_75a5cbf4e55553e1ac5d0a9b4f21530e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_505ae9eaca09534fabb9d3bf51347ca5.def("set_predictor", method_pointer_0869e82f2c4a5771872c47ed07b2fb03, "");
    class_505ae9eaca09534fabb9d3bf51347ca5.def("get_link", method_pointer_c684ae5ce1b25f099e40cb2b009774af, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_505ae9eaca09534fabb9d3bf51347ca5.def("set_link", method_pointer_358f458c97d3521881adaa28f6ee1b80, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_505ae9eaca09534fabb9d3bf51347ca5 >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistribution >::Type >();
    }

}