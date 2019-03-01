#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::Estimator;

            typedef class ::statiskit::glm::NominalRegression * return_type_bfa5b81fc9ab5622b01dc04818a5e2c4;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_bfa5b81fc9ab5622b01dc04818a5e2c4_0_type;
            typedef struct ::statiskit::MultivariateSampleSpace const & param_bfa5b81fc9ab5622b01dc04818a5e2c4_1_type;
            typedef struct ::statiskit::UnivariateSampleSpace const & param_bfa5b81fc9ab5622b01dc04818a5e2c4_2_type;
            virtual return_type_bfa5b81fc9ab5622b01dc04818a5e2c4 build_estimated(param_bfa5b81fc9ab5622b01dc04818a5e2c4_0_type param_0, param_bfa5b81fc9ab5622b01dc04818a5e2c4_1_type param_1, param_bfa5b81fc9ab5622b01dc04818a5e2c4_2_type param_2) const override { PYBIND11_OVERLOAD_PURE(return_type_bfa5b81fc9ab5622b01dc04818a5e2c4, class_type, build_estimated, param_0, param_1, param_2); };
            typedef class ::std::vector< double, class ::std::allocator< double > >  return_type_24b0adb941fc5492937871be01730b17;
            typedef class ::statiskit::UnivariateConditionalData const & param_24b0adb941fc5492937871be01730b17_0_type;
            virtual return_type_24b0adb941fc5492937871be01730b17 w_init(param_24b0adb941fc5492937871be01730b17_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_24b0adb941fc5492937871be01730b17, class_type, w_init, param_0); };
            typedef class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  return_type_df3637527f20514ba94c994f022cf1b1;
            typedef class ::statiskit::UnivariateConditionalData const & param_df3637527f20514ba94c994f022cf1b1_0_type;
            virtual return_type_df3637527f20514ba94c994f022cf1b1 y_init(param_df3637527f20514ba94c994f022cf1b1_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_df3637527f20514ba94c994f022cf1b1, class_type, y_init, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_051b8c9bf3c75eaaa7f80b17b3a56772;
            typedef class ::statiskit::UnivariateConditionalData const & param_051b8c9bf3c75eaaa7f80b17b3a56772_0_type;
            typedef bool const & param_051b8c9bf3c75eaaa7f80b17b3a56772_1_type;
            virtual return_type_051b8c9bf3c75eaaa7f80b17b3a56772 operator()(param_051b8c9bf3c75eaaa7f80b17b3a56772_0_type param_0, param_051b8c9bf3c75eaaa7f80b17b3a56772_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_051b8c9bf3c75eaaa7f80b17b3a56772, class_type, operator(), param_0, param_1); };
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
            using class_type::w_init;
            using class_type::y_init;
            using class_type::identifier;
            using class_type::children;
    };
}

struct ::statiskit::glm::NominalLink const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_507ffe485dad5b62b175804603efda92)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_link;
void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_7e207d62d01458d9ade6f6c288328fc2)(struct ::statiskit::glm::NominalLink const &)= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_link;
struct ::statiskit::glm::Design const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_2b033729f90c5a5db8ee3cdf9ac15aab)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_design;
void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_cbfb18c90f02525c82c279c02906fc9a)(struct ::statiskit::glm::Design const &)= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_design;
struct ::statiskit::glm::CategoricalFisherInitialization const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_c913f060bc9950caabc7cf1c14b7150d)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_initialization;
void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_beeaf399a2b6573d8623ecd7c8fd294f)(struct ::statiskit::glm::CategoricalFisherInitialization const &)= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_initialization;

namespace autowig {
}

void wrapper_b3b41b7535d15566bbb8bece9cc7eb04(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > class_b3b41b7535d15566bbb8bece9cc7eb04(module, "Estimator", "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def(pybind11::init<  >());
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("get_link", method_pointer_507ffe485dad5b62b175804603efda92, pybind11::return_value_policy::reference_internal, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("set_link", method_pointer_7e207d62d01458d9ade6f6c288328fc2, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("get_design", method_pointer_2b033729f90c5a5db8ee3cdf9ac15aab, pybind11::return_value_policy::reference_internal, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("set_design", method_pointer_cbfb18c90f02525c82c279c02906fc9a, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("get_initialization", method_pointer_c913f060bc9950caabc7cf1c14b7150d, pybind11::return_value_policy::reference_internal, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("set_initialization", method_pointer_beeaf399a2b6573d8623ecd7c8fd294f, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("_build_estimated", &autowig::Publicist::build_estimated, pybind11::return_value_policy::reference_internal, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("_w_init", &autowig::Publicist::w_init, "");
    class_b3b41b7535d15566bbb8bece9cc7eb04.def("_y_init", &autowig::Publicist::y_init, "");

}