#include "_glm.h"



namespace autowig
{
    class Wrap_b8801e59e00256e3a26fc7ff49db0a9d : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > >
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
    template <> autowig::Wrap_b8801e59e00256e3a26fc7ff49db0a9d const volatile * get_pointer<autowig::Wrap_b8801e59e00256e3a26fc7ff49db0a9d const volatile >(autowig::Wrap_b8801e59e00256e3a26fc7ff49db0a9d const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b8801e59e00256e3a26fc7ff49db0a9d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::glm::VectorPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::OrdinalLink >::*method_pointer_7440249ae155578a80f3b601005c0b14)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::OrdinalLink >::*method_pointer_7d82d906f0a25ab78f4dec8fd830f230)(class ::statiskit::glm::VectorPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >::set_predictor;
    struct ::statiskit::glm::OrdinalLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::OrdinalLink >::*method_pointer_2ba5c29ae06858cdbc18872ae9611584)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::OrdinalLink >::*method_pointer_ca71c5fd0995556f9747901ab83122c2)(struct ::statiskit::glm::OrdinalLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >::set_link;
    boost::python::class_< autowig::Wrap_b8801e59e00256e3a26fc7ff49db0a9d, autowig::Held< autowig::Wrap_b8801e59e00256e3a26fc7ff49db0a9d >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistribution >, boost::noncopyable > class_b8801e59e00256e3a26fc7ff49db0a9d("_GeneralizedLinearModel_b8801e59e00256e3a26fc7ff49db0a9d", "", boost::python::no_init);
    class_b8801e59e00256e3a26fc7ff49db0a9d.def("get_predictor", method_pointer_7440249ae155578a80f3b601005c0b14, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b8801e59e00256e3a26fc7ff49db0a9d.def("set_predictor", method_pointer_7d82d906f0a25ab78f4dec8fd830f230, "");
    class_b8801e59e00256e3a26fc7ff49db0a9d.def("get_link", method_pointer_2ba5c29ae06858cdbc18872ae9611584, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b8801e59e00256e3a26fc7ff49db0a9d.def("set_link", method_pointer_ca71c5fd0995556f9747901ab83122c2, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b8801e59e00256e3a26fc7ff49db0a9d >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistribution >::Type >();
    }

}