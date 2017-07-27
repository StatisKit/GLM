#include "_glm.h"



namespace autowig
{
    class Wrap_a0a8a3259686533bb0eead87e5c0553d : public ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual class ::statiskit::glm::OrdinalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
            { return this->get_override("build_estimated")(param_0, param_1, param_2); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  beta_init(class ::statiskit::UnivariateConditionalData const & param_0) const
            { return this->get_override("beta_init")(param_0); }
                        
            virtual class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >  Z_init(class ::statiskit::UnivariateConditionalData const & param_0) const
            { return this->get_override("Z_init")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_a0a8a3259686533bb0eead87e5c0553d const volatile * get_pointer<autowig::Wrap_a0a8a3259686533bb0eead87e5c0553d const volatile >(autowig::Wrap_a0a8a3259686533bb0eead87e5c0553d const volatile *c) { return c; }
    template <> class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile >(class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a0a8a3259686533bb0eead87e5c0553d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_e7c465f54bff53b2b62fea726a278b20 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__categorical_regression_fisher_estimation_e7c465f54bff53b2b62fea726a278b20");
    boost::python::object module_e7c465f54bff53b2b62fea726a278b20(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e7c465f54bff53b2b62fea726a278b20.c_str()))));
    boost::python::scope().attr("__categorical_regression_fisher_estimation_e7c465f54bff53b2b62fea726a278b20") = module_e7c465f54bff53b2b62fea726a278b20;
    boost::python::scope scope_e7c465f54bff53b2b62fea726a278b20 = module_e7c465f54bff53b2b62fea726a278b20;
    struct ::statiskit::glm::OrdinalLink const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_2608eb86880654d4a3ba3d0c836c19ee)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::get_link;
    void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_81ea2953b2735786bc7122456c3eb2c5)(struct ::statiskit::glm::OrdinalLink const &) = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_a0a8a3259686533bb0eead87e5c0553d, autowig::Held< autowig::Wrap_a0a8a3259686533bb0eead87e5c0553d >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >, boost::noncopyable > class_a0a8a3259686533bb0eead87e5c0553d("Estimator", "", boost::python::no_init);
    class_a0a8a3259686533bb0eead87e5c0553d.def("get_link", method_pointer_2608eb86880654d4a3ba3d0c836c19ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a0a8a3259686533bb0eead87e5c0553d.def("set_link", method_pointer_81ea2953b2735786bc7122456c3eb2c5, "");

    if(autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a0a8a3259686533bb0eead87e5c0553d >::Type, autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}