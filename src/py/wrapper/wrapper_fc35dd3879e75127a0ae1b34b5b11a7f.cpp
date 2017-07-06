#include "_glm.h"



namespace autowig
{
    class Wrap_fc35dd3879e75127a0ae1b34b5b11a7f : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > >
    {
        public:
            
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
    template <> autowig::Wrap_fc35dd3879e75127a0ae1b34b5b11a7f const volatile * get_pointer<autowig::Wrap_fc35dd3879e75127a0ae1b34b5b11a7f const volatile >(autowig::Wrap_fc35dd3879e75127a0ae1b34b5b11a7f const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fc35dd3879e75127a0ae1b34b5b11a7f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::VectorPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::NominalLink >::*method_pointer_7fc59e9c7f12534aa6b4a826439e35e3)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::NominalLink >::*method_pointer_03585c58171359a2a0a897b620aa9d82)(class ::statiskit::VectorPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink >::set_predictor;
    struct ::statiskit::NominalLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::NominalLink >::*method_pointer_f2b80389dd2c51cba072e7a7774aa79f)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::NominalLink >::*method_pointer_8a2e5ae83729593b939bdf9b65409746)(struct ::statiskit::NominalLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink >::set_link;
    boost::python::class_< autowig::Wrap_fc35dd3879e75127a0ae1b34b5b11a7f, autowig::Held< autowig::Wrap_fc35dd3879e75127a0ae1b34b5b11a7f >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistribution >, boost::noncopyable > class_fc35dd3879e75127a0ae1b34b5b11a7f("_GeneralizedLinearModel_fc35dd3879e75127a0ae1b34b5b11a7f", "", boost::python::no_init);
    class_fc35dd3879e75127a0ae1b34b5b11a7f.def("get_predictor", method_pointer_7fc59e9c7f12534aa6b4a826439e35e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc35dd3879e75127a0ae1b34b5b11a7f.def("set_predictor", method_pointer_03585c58171359a2a0a897b620aa9d82, "");
    class_fc35dd3879e75127a0ae1b34b5b11a7f.def("get_link", method_pointer_f2b80389dd2c51cba072e7a7774aa79f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fc35dd3879e75127a0ae1b34b5b11a7f.def("set_link", method_pointer_8a2e5ae83729593b939bdf9b65409746, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_fc35dd3879e75127a0ae1b34b5b11a7f >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type >();
    }

}