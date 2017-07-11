#include "_glm.h"



namespace autowig
{
    class Wrap_7aaf627664f05759a326b960c528854f : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > >
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
            
            virtual void  update(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_7aaf627664f05759a326b960c528854f const volatile * get_pointer<autowig::Wrap_7aaf627664f05759a326b960c528854f const volatile >(autowig::Wrap_7aaf627664f05759a326b960c528854f const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7aaf627664f05759a326b960c528854f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::glm::VectorPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::NominalLink >::*method_pointer_6ab94b43a8625385bad4e5685790ea61)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::NominalLink >::*method_pointer_35e26f71c78d51eaa36da790376c4991)(class ::statiskit::glm::VectorPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >::set_predictor;
    struct ::statiskit::glm::NominalLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::NominalLink >::*method_pointer_e738506a70365dde84e3e426fd2fa2c9)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::NominalLink >::*method_pointer_e938f210b2b35ba8b9235f90dbb5706d)(struct ::statiskit::glm::NominalLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >::set_link;
    boost::python::class_< autowig::Wrap_7aaf627664f05759a326b960c528854f, autowig::Held< autowig::Wrap_7aaf627664f05759a326b960c528854f >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistribution >, boost::noncopyable > class_7aaf627664f05759a326b960c528854f("_GeneralizedLinearModel_7aaf627664f05759a326b960c528854f", "", boost::python::no_init);
    class_7aaf627664f05759a326b960c528854f.def("get_predictor", method_pointer_6ab94b43a8625385bad4e5685790ea61, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7aaf627664f05759a326b960c528854f.def("set_predictor", method_pointer_35e26f71c78d51eaa36da790376c4991, "");
    class_7aaf627664f05759a326b960c528854f.def("get_link", method_pointer_e738506a70365dde84e3e426fd2fa2c9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7aaf627664f05759a326b960c528854f.def("set_link", method_pointer_e938f210b2b35ba8b9235f90dbb5706d, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7aaf627664f05759a326b960c528854f >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type >();
    }

}