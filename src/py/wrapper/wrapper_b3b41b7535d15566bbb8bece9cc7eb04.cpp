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
    struct ::statiskit::NominalLink const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_507ffe485dad5b62b175804603efda92)() const = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_link;
    void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_e7347364d2505a5988bdf3bfe9094793)(struct ::statiskit::NominalLink const &) = &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_b3b41b7535d15566bbb8bece9cc7eb04, autowig::Held< autowig::Wrap_b3b41b7535d15566bbb8bece9cc7eb04 >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_b3b41b7535d15566bbb8bece9cc7eb04("Estimator", "", boost::python::no_init);
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("get_link", method_pointer_507ffe485dad5b62b175804603efda92, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("set_link", method_pointer_e7347364d2505a5988bdf3bfe9094793, "");

    if(autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b3b41b7535d15566bbb8bece9cc7eb04 >::Type, autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}