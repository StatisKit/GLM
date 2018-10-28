#include "_glm.h"



namespace autowig
{
    class Wrap_ed1105881ad65156a5e26c35a100c4bd : public ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual class ::statiskit::glm::BinaryRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, class ::statiskit::UnivariateConditionalData const & param_1) const
            { return this->get_override("build_estimated")(param_0, param_1); }
                        
            virtual double  sigma_square(double const & param_0) const
            { return this->get_override("sigma_square")(param_0); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  y_init(class ::statiskit::UnivariateConditionalData const & param_0) const
            { return this->get_override("y_init")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_ed1105881ad65156a5e26c35a100c4bd const volatile * get_pointer<autowig::Wrap_ed1105881ad65156a5e26c35a100c4bd const volatile >(autowig::Wrap_ed1105881ad65156a5e26c35a100c4bd const volatile *c) { return c; }
    template <> class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ed1105881ad65156a5e26c35a100c4bd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_c0df82ab769f533ca406fc06b25adba1 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__scalar_regression_fisher_estimation_c0df82ab769f533ca406fc06b25adba1");
    boost::python::object module_c0df82ab769f533ca406fc06b25adba1(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c0df82ab769f533ca406fc06b25adba1.c_str()))));
    boost::python::scope().attr("__scalar_regression_fisher_estimation_c0df82ab769f533ca406fc06b25adba1") = module_c0df82ab769f533ca406fc06b25adba1;
    boost::python::scope scope_c0df82ab769f533ca406fc06b25adba1 = module_c0df82ab769f533ca406fc06b25adba1;
    enum ::statiskit::linalg::solver_type const & (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_5861b4f4eb635fd2a193f182b9b320a4)() const = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::get_solver;
    void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_4721742639c158bea4e827c743af977d)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::set_solver;
    struct ::statiskit::glm::BinaryLink const * (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_570da6d1d7795594bfa087c40978f077)() const = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::get_link;
    void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_ed779f57f07b5dfa8f8489b4119e996a)(struct ::statiskit::glm::BinaryLink const &) = &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_ed1105881ad65156a5e26c35a100c4bd, autowig::Held< autowig::Wrap_ed1105881ad65156a5e26c35a100c4bd >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >, boost::noncopyable > class_ed1105881ad65156a5e26c35a100c4bd("Estimator", "", boost::python::no_init);
    class_ed1105881ad65156a5e26c35a100c4bd.def("get_solver", method_pointer_5861b4f4eb635fd2a193f182b9b320a4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ed1105881ad65156a5e26c35a100c4bd.def("set_solver", method_pointer_4721742639c158bea4e827c743af977d, "");
    class_ed1105881ad65156a5e26c35a100c4bd.def("get_link", method_pointer_570da6d1d7795594bfa087c40978f077, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ed1105881ad65156a5e26c35a100c4bd.def("set_link", method_pointer_ed779f57f07b5dfa8f8489b4119e996a, "");

    if(autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ed1105881ad65156a5e26c35a100c4bd >::Type, autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
    }

}