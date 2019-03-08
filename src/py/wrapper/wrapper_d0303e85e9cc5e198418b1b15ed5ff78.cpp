#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::Estimator;

            typedef class ::statiskit::glm::PoissonRegression * return_type_89edada561a357fca8103d2dd8f6e18a;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_89edada561a357fca8103d2dd8f6e18a_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_89edada561a357fca8103d2dd8f6e18a_1_type;
            virtual return_type_89edada561a357fca8103d2dd8f6e18a build_estimated(param_89edada561a357fca8103d2dd8f6e18a_0_type param_0, param_89edada561a357fca8103d2dd8f6e18a_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_89edada561a357fca8103d2dd8f6e18a, class_type, build_estimated, param_0, param_1); };
            typedef double  return_type_c1c0d83a801f58f4894c0208ed22261f;
            typedef double const & param_c1c0d83a801f58f4894c0208ed22261f_0_type;
            virtual return_type_c1c0d83a801f58f4894c0208ed22261f sigma_square(param_c1c0d83a801f58f4894c0208ed22261f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_c1c0d83a801f58f4894c0208ed22261f, class_type, sigma_square, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_153649b5f1c655cb97a8ea308d5a2883;
            typedef class ::statiskit::UnivariateConditionalData const & param_153649b5f1c655cb97a8ea308d5a2883_0_type;
            virtual return_type_153649b5f1c655cb97a8ea308d5a2883 w_init(param_153649b5f1c655cb97a8ea308d5a2883_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_153649b5f1c655cb97a8ea308d5a2883, class_type, w_init, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_c70c425073285508802f666687f44e32;
            typedef class ::statiskit::UnivariateConditionalData const & param_c70c425073285508802f666687f44e32_0_type;
            virtual return_type_c70c425073285508802f666687f44e32 y_init(param_c70c425073285508802f666687f44e32_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_c70c425073285508802f666687f44e32, class_type, y_init, param_0); };
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  return_type_5a60e32ae5925bcab8a8e91644d4d4c9;
            typedef class ::statiskit::UnivariateConditionalData const & param_5a60e32ae5925bcab8a8e91644d4d4c9_0_type;
            virtual return_type_5a60e32ae5925bcab8a8e91644d4d4c9 X_init(param_5a60e32ae5925bcab8a8e91644d4d4c9_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_5a60e32ae5925bcab8a8e91644d4d4c9, class_type, X_init, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_58f2cd0e9e8755dea311004b126a0812;
            typedef class ::statiskit::UnivariateConditionalData const & param_58f2cd0e9e8755dea311004b126a0812_0_type;
            typedef bool const & param_58f2cd0e9e8755dea311004b126a0812_1_type;
            virtual return_type_58f2cd0e9e8755dea311004b126a0812 operator()(param_58f2cd0e9e8755dea311004b126a0812_0_type param_0, param_58f2cd0e9e8755dea311004b126a0812_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_58f2cd0e9e8755dea311004b126a0812, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_e0fab2db391a546591b690a17ebe80ff;
            virtual return_type_e0fab2db391a546591b690a17ebe80ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e0fab2db391a546591b690a17ebe80ff, class_type, copy, ); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_7ba100805cd95f1cba468c9ce84eb72c;
            virtual return_type_7ba100805cd95f1cba468c9ce84eb72c children() const override { PYBIND11_OVERLOAD(return_type_7ba100805cd95f1cba468c9ce84eb72c, class_type, children, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::build_estimated;
            using class_type::sigma_square;
            using class_type::w_init;
            using class_type::y_init;
            using class_type::X_init;
            using class_type::identifier;
            using class_type::children;
    };
}

enum ::statiskit::linalg::solver_type const & (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_e72eebe5d89d594badcb353662e072c0)()const= &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_solver;
void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_84db63ccd720593cb06a63c17112ca16)(enum ::statiskit::linalg::solver_type const &)= &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_solver;
struct ::statiskit::glm::PoissonLink const * (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_f9cbbbec320c5b9fa9554f40980cf579)()const= &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_link;
void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_cef65e5bbc385cea9914edf0a0d74712)(struct ::statiskit::glm::PoissonLink const &)= &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_link;

namespace autowig {
}

void wrapper_d0303e85e9cc5e198418b1b15ed5ff78(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > class_d0303e85e9cc5e198418b1b15ed5ff78(module, "Estimator", "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def(pybind11::init<  >());
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("get_solver", method_pointer_e72eebe5d89d594badcb353662e072c0, pybind11::return_value_policy::copy, "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("set_solver", method_pointer_84db63ccd720593cb06a63c17112ca16, "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("get_link", method_pointer_f9cbbbec320c5b9fa9554f40980cf579, pybind11::return_value_policy::reference_internal, "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("set_link", method_pointer_cef65e5bbc385cea9914edf0a0d74712, "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("_build_estimated", static_cast< class ::statiskit::glm::PoissonRegression * (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::build_estimated), pybind11::return_value_policy::reference_internal, "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("_sigma_square", static_cast< double  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (double const &) const >(&autowig::Publicist::sigma_square), "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("_w_init", static_cast< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::w_init), "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("_y_init", static_cast< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::y_init), "");
    class_d0303e85e9cc5e198418b1b15ed5ff78.def("_x__init", static_cast< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::X_init), "");

}