#include "_glm.h"



namespace autowig
{
    class Wrap_ff0b55a01db552a8b40f4672514c24c4 : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > >
    {
        public:
            
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

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
    template <> autowig::Wrap_ff0b55a01db552a8b40f4672514c24c4 const volatile * get_pointer<autowig::Wrap_ff0b55a01db552a8b40f4672514c24c4 const volatile >(autowig::Wrap_ff0b55a01db552a8b40f4672514c24c4 const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ff0b55a01db552a8b40f4672514c24c4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::ScalarPredictor const * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::NegativeBinomialLink >::*method_pointer_8bcd326de525587ea0ffb08d4d0facd5)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink >::get_predictor;
    struct ::statiskit::NegativeBinomialLink const * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::NegativeBinomialLink >::*method_pointer_a404f3098b5d5f998ebc3c91e4856521)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::NegativeBinomialLink >::*method_pointer_445aff0023cb5d0b914cca9c076920a6)(struct ::statiskit::NegativeBinomialLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink >::set_link;
    boost::python::class_< autowig::Wrap_ff0b55a01db552a8b40f4672514c24c4, autowig::Held< autowig::Wrap_ff0b55a01db552a8b40f4672514c24c4 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistribution >, boost::noncopyable > class_ff0b55a01db552a8b40f4672514c24c4("_GeneralizedLinearModel_ff0b55a01db552a8b40f4672514c24c4", "", boost::python::no_init);
    class_ff0b55a01db552a8b40f4672514c24c4.def("get_predictor", method_pointer_8bcd326de525587ea0ffb08d4d0facd5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ff0b55a01db552a8b40f4672514c24c4.def("get_link", method_pointer_a404f3098b5d5f998ebc3c91e4856521, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ff0b55a01db552a8b40f4672514c24c4.def("set_link", method_pointer_445aff0023cb5d0b914cca9c076920a6, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ff0b55a01db552a8b40f4672514c24c4 >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > >::Type, class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::NegativeBinomialLink > > > >();
    }

}