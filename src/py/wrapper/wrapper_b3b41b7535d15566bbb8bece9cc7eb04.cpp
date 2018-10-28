#include "_glm.h"



namespace autowig
{
    class Wrap_b3b41b7535d15566bbb8bece9cc7eb04 : public ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual class ::statiskit::glm::NominalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
            { return this->get_override("build_estimated")(param_0, param_1, param_2); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_b3b41b7535d15566bbb8bece9cc7eb04 const volatile * get_pointer<autowig::Wrap_b3b41b7535d15566bbb8bece9cc7eb04 const volatile >(autowig::Wrap_b3b41b7535d15566bbb8bece9cc7eb04 const volatile *c) { return c; }
    template <> class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile >(class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b3b41b7535d15566bbb8bece9cc7eb04()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_8adeded49f5751a5bda6fb4ed88849e6 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__categorical_regression_fisher_estimation_8adeded49f5751a5bda6fb4ed88849e6");
    boost::python::object module_8adeded49f5751a5bda6fb4ed88849e6(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_8adeded49f5751a5bda6fb4ed88849e6.c_str()))));
    boost::python::scope().attr("__categorical_regression_fisher_estimation_8adeded49f5751a5bda6fb4ed88849e6") = module_8adeded49f5751a5bda6fb4ed88849e6;
    boost::python::scope scope_8adeded49f5751a5bda6fb4ed88849e6 = module_8adeded49f5751a5bda6fb4ed88849e6;
    struct ::statiskit::glm::NominalLink const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_507ffe485dad5b62b175804603efda92)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_link;
    void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_7e207d62d01458d9ade6f6c288328fc2)(struct ::statiskit::glm::NominalLink const &) = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_link;
    struct ::statiskit::glm::Design const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_2b033729f90c5a5db8ee3cdf9ac15aab)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_design;
    void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_cbfb18c90f02525c82c279c02906fc9a)(struct ::statiskit::glm::Design const &) = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_design;
    struct ::statiskit::glm::CategoricalFisherInitialization const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_c913f060bc9950caabc7cf1c14b7150d)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_initialization;
    void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_beeaf399a2b6573d8623ecd7c8fd294f)(struct ::statiskit::glm::CategoricalFisherInitialization const &) = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_initialization;
    boost::python::class_< autowig::Wrap_b3b41b7535d15566bbb8bece9cc7eb04, autowig::Held< autowig::Wrap_b3b41b7535d15566bbb8bece9cc7eb04 >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >, boost::noncopyable > class_b3b41b7535d15566bbb8bece9cc7eb04("Estimator", "", boost::python::no_init);
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("get_link", method_pointer_507ffe485dad5b62b175804603efda92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("set_link", method_pointer_7e207d62d01458d9ade6f6c288328fc2, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("get_design", method_pointer_2b033729f90c5a5db8ee3cdf9ac15aab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("set_design", method_pointer_cbfb18c90f02525c82c279c02906fc9a, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("get_initialization", method_pointer_c913f060bc9950caabc7cf1c14b7150d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("set_initialization", method_pointer_beeaf399a2b6573d8623ecd7c8fd294f, "");

    if(autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b3b41b7535d15566bbb8bece9cc7eb04 >::Type, autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}