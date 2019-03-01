#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::Estimator;

            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_965e7277501f5c4cbf0732233265bcb6;
            typedef class ::statiskit::UnivariateConditionalData const & param_965e7277501f5c4cbf0732233265bcb6_0_type;
            virtual return_type_965e7277501f5c4cbf0732233265bcb6 y_init(param_965e7277501f5c4cbf0732233265bcb6_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_965e7277501f5c4cbf0732233265bcb6, class_type, y_init, param_0); };
            typedef class ::statiskit::glm::NegativeBinomialRegression * return_type_29bfe714b52f5edc91951af31598ef03;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_29bfe714b52f5edc91951af31598ef03_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_29bfe714b52f5edc91951af31598ef03_1_type;
            virtual return_type_29bfe714b52f5edc91951af31598ef03 build_estimated(param_29bfe714b52f5edc91951af31598ef03_0_type param_0, param_29bfe714b52f5edc91951af31598ef03_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_29bfe714b52f5edc91951af31598ef03, class_type, build_estimated, param_0, param_1); };
            typedef double  return_type_6c61637966405a8f8a5e90ad1b04322d;
            typedef double const & param_6c61637966405a8f8a5e90ad1b04322d_0_type;
            virtual return_type_6c61637966405a8f8a5e90ad1b04322d sigma_square(param_6c61637966405a8f8a5e90ad1b04322d_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_6c61637966405a8f8a5e90ad1b04322d, class_type, sigma_square, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_e9731625308b5782820235d28eb67f8f;
            typedef class ::statiskit::UnivariateConditionalData const & param_e9731625308b5782820235d28eb67f8f_0_type;
            virtual return_type_e9731625308b5782820235d28eb67f8f w_init(param_e9731625308b5782820235d28eb67f8f_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e9731625308b5782820235d28eb67f8f, class_type, w_init, param_0); };
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  return_type_3553903a36a6503a8efd19087688560a;
            typedef class ::statiskit::UnivariateConditionalData const & param_3553903a36a6503a8efd19087688560a_0_type;
            virtual return_type_3553903a36a6503a8efd19087688560a X_init(param_3553903a36a6503a8efd19087688560a_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_3553903a36a6503a8efd19087688560a, class_type, X_init, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_2678c51ccbe05ca1b6debe208d7a0db7;
            typedef class ::statiskit::UnivariateConditionalData const & param_2678c51ccbe05ca1b6debe208d7a0db7_0_type;
            typedef bool const & param_2678c51ccbe05ca1b6debe208d7a0db7_1_type;
            virtual return_type_2678c51ccbe05ca1b6debe208d7a0db7 operator()(param_2678c51ccbe05ca1b6debe208d7a0db7_0_type param_0, param_2678c51ccbe05ca1b6debe208d7a0db7_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_2678c51ccbe05ca1b6debe208d7a0db7, class_type, operator(), param_0, param_1); };
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

void wrapper_2c70107f4e8458619254a159e7e42d86(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > class_2c70107f4e8458619254a159e7e42d86(module, "Estimator", "");
    class_2c70107f4e8458619254a159e7e42d86.def(pybind11::init<  >());
    class_2c70107f4e8458619254a159e7e42d86.def("_build_estimated", &autowig::Publicist::build_estimated, pybind11::return_value_policy::reference_internal, "");
    class_2c70107f4e8458619254a159e7e42d86.def("_sigma_square", &autowig::Publicist::sigma_square, "");
    class_2c70107f4e8458619254a159e7e42d86.def("_w_init", &autowig::Publicist::w_init, "");
    class_2c70107f4e8458619254a159e7e42d86.def("_x__init", &autowig::Publicist::X_init, "");

}