#include "_glm.h"



namespace autowig
{
    class Wrap_8aabd4cbee425cbab2d707decfb1f42c : public ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::NegativeBinomialRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1) const
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
    template <> autowig::Wrap_8aabd4cbee425cbab2d707decfb1f42c const volatile * get_pointer<autowig::Wrap_8aabd4cbee425cbab2d707decfb1f42c const volatile >(autowig::Wrap_8aabd4cbee425cbab2d707decfb1f42c const volatile *c) { return c; }
    template <> class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8aabd4cbee425cbab2d707decfb1f42c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_c9b70d492ad75f21a0a7e1591d087b93 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__scalar_regression_fisher_estimation_c9b70d492ad75f21a0a7e1591d087b93");
    boost::python::object module_c9b70d492ad75f21a0a7e1591d087b93(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c9b70d492ad75f21a0a7e1591d087b93.c_str()))));
    boost::python::scope().attr("__scalar_regression_fisher_estimation_c9b70d492ad75f21a0a7e1591d087b93") = module_c9b70d492ad75f21a0a7e1591d087b93;
    boost::python::scope scope_c9b70d492ad75f21a0a7e1591d087b93 = module_c9b70d492ad75f21a0a7e1591d087b93;
    enum ::statiskit::linalg::solver_type const & (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_708193315d00577e8a22772d8f1d33ea)() const = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_solver;
    void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_f54527b0808251569340d49f8b0316e3)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_solver;
    struct ::statiskit::NegativeBinomialLink const * (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_620dae45b8cc5df391b1aa09bb9aa9a2)() const = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_link;
    void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_bc263f40c365592d98ba6b4d3fb99e52)(struct ::statiskit::NegativeBinomialLink const &) = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_8aabd4cbee425cbab2d707decfb1f42c, autowig::Held< autowig::Wrap_8aabd4cbee425cbab2d707decfb1f42c >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >, boost::noncopyable > class_8aabd4cbee425cbab2d707decfb1f42c("Estimator", "", boost::python::no_init);
    class_8aabd4cbee425cbab2d707decfb1f42c.def("get_solver", method_pointer_708193315d00577e8a22772d8f1d33ea, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8aabd4cbee425cbab2d707decfb1f42c.def("set_solver", method_pointer_f54527b0808251569340d49f8b0316e3, "");
    class_8aabd4cbee425cbab2d707decfb1f42c.def("get_link", method_pointer_620dae45b8cc5df391b1aa09bb9aa9a2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8aabd4cbee425cbab2d707decfb1f42c.def("set_link", method_pointer_bc263f40c365592d98ba6b4d3fb99e52, "");

    if(autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_8aabd4cbee425cbab2d707decfb1f42c >::Type, autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}