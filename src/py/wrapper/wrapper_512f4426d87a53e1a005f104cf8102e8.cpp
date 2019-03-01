#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::Estimator;

            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_08470ac00c5c55d4a79840337ed9d4c9;
            typedef class ::statiskit::UnivariateConditionalData const & param_08470ac00c5c55d4a79840337ed9d4c9_0_type;
            virtual return_type_08470ac00c5c55d4a79840337ed9d4c9 y_init(param_08470ac00c5c55d4a79840337ed9d4c9_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_08470ac00c5c55d4a79840337ed9d4c9, class_type, y_init, param_0); };
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
            using class_type::y_init;
            using class_type::build_estimated;
            using class_type::sigma_square;
            using class_type::w_init;
            using class_type::X_init;
            using class_type::identifier;
            using class_type::children;
    };
}


namespace autowig {
}

void wrapper_512f4426d87a53e1a005f104cf8102e8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > class_512f4426d87a53e1a005f104cf8102e8(module, "Estimator", "");
    class_512f4426d87a53e1a005f104cf8102e8.def(pybind11::init<  >());
    class_512f4426d87a53e1a005f104cf8102e8.def("_build_estimated", &autowig::Publicist::build_estimated, pybind11::return_value_policy::reference_internal, "");
    class_512f4426d87a53e1a005f104cf8102e8.def("_sigma_square", &autowig::Publicist::sigma_square, "");
    class_512f4426d87a53e1a005f104cf8102e8.def("_w_init", &autowig::Publicist::w_init, "");
    class_512f4426d87a53e1a005f104cf8102e8.def("_x__init", &autowig::Publicist::X_init, "");

}