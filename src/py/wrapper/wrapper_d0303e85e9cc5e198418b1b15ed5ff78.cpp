#include "_glm.h"



namespace autowig
{
    class Wrap_d0303e85e9cc5e198418b1b15ed5ff78 : public ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual class ::statiskit::glm::PoissonRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1) const
            { return this->get_override("build_estimated")(param_0, param_1); }
                        
            virtual double  sigma_square(double const & param_0) const
            { return this->get_override("sigma_square")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_d0303e85e9cc5e198418b1b15ed5ff78 const volatile * get_pointer<autowig::Wrap_d0303e85e9cc5e198418b1b15ed5ff78 const volatile >(autowig::Wrap_d0303e85e9cc5e198418b1b15ed5ff78 const volatile *c) { return c; }
    template <> class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d0303e85e9cc5e198418b1b15ed5ff78()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_818718ad2f485898ac022d3247aa76dc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__scalar_regression_fisher_estimation_818718ad2f485898ac022d3247aa76dc");
    boost::python::object module_818718ad2f485898ac022d3247aa76dc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_818718ad2f485898ac022d3247aa76dc.c_str()))));
    boost::python::scope().attr("__scalar_regression_fisher_estimation_818718ad2f485898ac022d3247aa76dc") = module_818718ad2f485898ac022d3247aa76dc;
    boost::python::scope scope_818718ad2f485898ac022d3247aa76dc = module_818718ad2f485898ac022d3247aa76dc;
    enum ::statiskit::linalg::solver_type const & (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_e72eebe5d89d594badcb353662e072c0)() const = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_solver;
    void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_84db63ccd720593cb06a63c17112ca16)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_solver;
    struct ::statiskit::PoissonLink const * (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_f9cbbbec320c5b9fa9554f40980cf579)() const = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_link;
    void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_046032ce7ce854399e956fcaef471f0d)(struct ::statiskit::PoissonLink const &) = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_d0303e85e9cc5e198418b1b15ed5ff78, autowig::Held< autowig::Wrap_d0303e85e9cc5e198418b1b15ed5ff78 >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >, boost::noncopyable > class_d0303e85e9cc5e198418b1b15ed5ff78("Estimator", "", boost::python::no_init);
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("get_solver", method_pointer_e72eebe5d89d594badcb353662e072c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("set_solver", method_pointer_84db63ccd720593cb06a63c17112ca16, "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("get_link", method_pointer_f9cbbbec320c5b9fa9554f40980cf579, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("set_link", method_pointer_046032ce7ce854399e956fcaef471f0d, "");

    if(autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d0303e85e9cc5e198418b1b15ed5ff78 >::Type, autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}