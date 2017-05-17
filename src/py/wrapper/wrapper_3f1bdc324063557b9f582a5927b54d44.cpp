#include "_glm.h"



namespace autowig
{
    class Wrap_3f1bdc324063557b9f582a5927b54d44 : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > >
    {
        public:
            
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

        protected:
            
            virtual void  update(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) 
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_3f1bdc324063557b9f582a5927b54d44 const volatile * get_pointer<autowig::Wrap_3f1bdc324063557b9f582a5927b54d44 const volatile >(autowig::Wrap_3f1bdc324063557b9f582a5927b54d44 const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3f1bdc324063557b9f582a5927b54d44()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::VectorPredictor const * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::OrdinalLink >::*method_pointer_f0bf6a3c753e51d7a987a18a0be4d6cb)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink >::get_predictor;
    struct ::statiskit::OrdinalLink const * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::OrdinalLink >::*method_pointer_58968ea86595549e896b98266af03e6e)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::OrdinalLink >::*method_pointer_db0ae0becab7550f9868a88368d33c91)(struct ::statiskit::OrdinalLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink >::set_link;
    boost::python::class_< autowig::Wrap_3f1bdc324063557b9f582a5927b54d44, autowig::Held< autowig::Wrap_3f1bdc324063557b9f582a5927b54d44 >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistribution >, boost::noncopyable > class_3f1bdc324063557b9f582a5927b54d44("_GeneralizedLinearModel_3f1bdc324063557b9f582a5927b54d44", "", boost::python::no_init);
    class_3f1bdc324063557b9f582a5927b54d44.def("get_predictor", method_pointer_f0bf6a3c753e51d7a987a18a0be4d6cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3f1bdc324063557b9f582a5927b54d44.def("get_link", method_pointer_58968ea86595549e896b98266af03e6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3f1bdc324063557b9f582a5927b54d44.def("set_link", method_pointer_db0ae0becab7550f9868a88368d33c91, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_3f1bdc324063557b9f582a5927b54d44 >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > >::Type, class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > > > >();
    }

}