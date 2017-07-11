#include "_glm.h"



namespace autowig
{
    class Wrap_f0d38fc48987576da8ecbc78fe6b4994 : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

        protected:
            
            virtual void  update(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_f0d38fc48987576da8ecbc78fe6b4994 const volatile * get_pointer<autowig::Wrap_f0d38fc48987576da8ecbc78fe6b4994 const volatile >(autowig::Wrap_f0d38fc48987576da8ecbc78fe6b4994 const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f0d38fc48987576da8ecbc78fe6b4994()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::glm::VectorPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_2104cefd4cd755df8080ff244f18cc6e)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_59478b2478bd5ec48c1cc344e62b2f76)(class ::statiskit::glm::VectorPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink >::set_predictor;
    struct ::statiskit::glm::MultinomialSplittingLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_3d38b0653b57514db1b3354156b2801f)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_7367ac12aa945f6b81408d75f4ee1f00)(struct ::statiskit::glm::MultinomialSplittingLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink >::set_link;
    boost::python::class_< autowig::Wrap_f0d38fc48987576da8ecbc78fe6b4994, autowig::Held< autowig::Wrap_f0d38fc48987576da8ecbc78fe6b4994 >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateConditionalDistribution >, boost::noncopyable > class_f0d38fc48987576da8ecbc78fe6b4994("_GeneralizedLinearModel_f0d38fc48987576da8ecbc78fe6b4994", "", boost::python::no_init);
    class_f0d38fc48987576da8ecbc78fe6b4994.def("get_predictor", method_pointer_2104cefd4cd755df8080ff244f18cc6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f0d38fc48987576da8ecbc78fe6b4994.def("set_predictor", method_pointer_59478b2478bd5ec48c1cc344e62b2f76, "");
    class_f0d38fc48987576da8ecbc78fe6b4994.def("get_link", method_pointer_3d38b0653b57514db1b3354156b2801f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f0d38fc48987576da8ecbc78fe6b4994.def("set_link", method_pointer_7367ac12aa945f6b81408d75f4ee1f00, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f0d38fc48987576da8ecbc78fe6b4994 >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistribution >::Type >();
    }

}