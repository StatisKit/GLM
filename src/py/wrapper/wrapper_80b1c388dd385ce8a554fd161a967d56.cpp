#include "_glm.h"



namespace autowig
{
    class Wrap_80b1c388dd385ce8a554fd161a967d56 : public ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >
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
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_80b1c388dd385ce8a554fd161a967d56 const volatile * get_pointer<autowig::Wrap_80b1c388dd385ce8a554fd161a967d56 const volatile >(autowig::Wrap_80b1c388dd385ce8a554fd161a967d56 const volatile *c) { return c; }
    template <> class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile >(class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_80b1c388dd385ce8a554fd161a967d56()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_4be05419f68050848635561b5842a32b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__constrained_regression_fisher_estimation_4be05419f68050848635561b5842a32b");
    boost::python::object module_4be05419f68050848635561b5842a32b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4be05419f68050848635561b5842a32b.c_str()))));
    boost::python::scope().attr("__constrained_regression_fisher_estimation_4be05419f68050848635561b5842a32b") = module_4be05419f68050848635561b5842a32b;
    boost::python::scope scope_4be05419f68050848635561b5842a32b = module_4be05419f68050848635561b5842a32b;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_31103d59e8b357ccb0d97e69336912f5)() const = &::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::get_intercept_constraint;
    void  (::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_e436199af0315da6b04fecb17c24c528)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::set_intercept_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const (::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_b1068a97214f5a1386f92015ca417713)() const = &::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::get_slope_constraint;
    void  (::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_d571199b9d1a584e90b5398e47b351d0)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::set_slope_constraint;
    boost::python::class_< autowig::Wrap_80b1c388dd385ce8a554fd161a967d56, autowig::Held< autowig::Wrap_80b1c388dd385ce8a554fd161a967d56 >::Type, boost::python::bases< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >, boost::noncopyable > class_80b1c388dd385ce8a554fd161a967d56("Estimator", "", boost::python::no_init);
    class_80b1c388dd385ce8a554fd161a967d56.def("get_intercept_constraint", method_pointer_31103d59e8b357ccb0d97e69336912f5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_80b1c388dd385ce8a554fd161a967d56.def("set_intercept_constraint", method_pointer_e436199af0315da6b04fecb17c24c528, "");
    class_80b1c388dd385ce8a554fd161a967d56.def("get_slope_constraint", method_pointer_b1068a97214f5a1386f92015ca417713, "");
    class_80b1c388dd385ce8a554fd161a967d56.def("set_slope_constraint", method_pointer_d571199b9d1a584e90b5398e47b351d0, "");

    if(autowig::Held< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_80b1c388dd385ce8a554fd161a967d56 >::Type, autowig::Held< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
    }

}