#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::Estimator;

            typedef class ::statiskit::glm::OrdinalRegression * return_type_0a866eefa3eb5802afd3f0ee22852074;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0a866eefa3eb5802afd3f0ee22852074_0_type;
            typedef struct ::statiskit::MultivariateSampleSpace const & param_0a866eefa3eb5802afd3f0ee22852074_1_type;
            typedef struct ::statiskit::UnivariateSampleSpace const & param_0a866eefa3eb5802afd3f0ee22852074_2_type;
            virtual return_type_0a866eefa3eb5802afd3f0ee22852074 build_estimated(param_0a866eefa3eb5802afd3f0ee22852074_0_type param_0, param_0a866eefa3eb5802afd3f0ee22852074_1_type param_1, param_0a866eefa3eb5802afd3f0ee22852074_2_type param_2) const override { PYBIND11_OVERLOAD_PURE(return_type_0a866eefa3eb5802afd3f0ee22852074, class_type, build_estimated, param_0, param_1, param_2); };
            typedef class ::std::vector< double, class ::std::allocator< double > >  return_type_589012bc72e9535e8c0d8b475a9fc0b6;
            typedef class ::statiskit::UnivariateConditionalData const & param_589012bc72e9535e8c0d8b475a9fc0b6_0_type;
            virtual return_type_589012bc72e9535e8c0d8b475a9fc0b6 w_init(param_589012bc72e9535e8c0d8b475a9fc0b6_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_589012bc72e9535e8c0d8b475a9fc0b6, class_type, w_init, param_0); };
            typedef class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  return_type_2929012b55905399a102c10d86932961;
            typedef class ::statiskit::UnivariateConditionalData const & param_2929012b55905399a102c10d86932961_0_type;
            virtual return_type_2929012b55905399a102c10d86932961 y_init(param_2929012b55905399a102c10d86932961_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_2929012b55905399a102c10d86932961, class_type, y_init, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_2c01bd48943c512da23c5270bb5a7e9a;
            typedef class ::statiskit::UnivariateConditionalData const & param_2c01bd48943c512da23c5270bb5a7e9a_0_type;
            typedef bool const & param_2c01bd48943c512da23c5270bb5a7e9a_1_type;
            virtual return_type_2c01bd48943c512da23c5270bb5a7e9a operator()(param_2c01bd48943c512da23c5270bb5a7e9a_0_type param_0, param_2c01bd48943c512da23c5270bb5a7e9a_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_2c01bd48943c512da23c5270bb5a7e9a, class_type, operator(), param_0, param_1); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_e0fab2db391a546591b690a17ebe80ff;
            virtual return_type_e0fab2db391a546591b690a17ebe80ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e0fab2db391a546591b690a17ebe80ff, class_type, copy, ); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
            typedef class ::std::unordered_set< statiskit::Index, struct ::std::hash< statiskit::Index >, struct ::std::equal_to< statiskit::Index >, class ::std::allocator< statiskit::Index > >  return_type_7ba100805cd95f1cba468c9ce84eb72c;
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

struct ::statiskit::glm::OrdinalLink const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_2608eb86880654d4a3ba3d0c836c19ee)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::get_link;
void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_81ea2953b2735786bc7122456c3eb2c5)(struct ::statiskit::glm::OrdinalLink const &)= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::set_link;
struct ::statiskit::glm::Design const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_16ef8a564f9b5803b23a5b35562f4d4f)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::get_design;
void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_f7ed4a95360b5352829d2da5db7ddb79)(struct ::statiskit::glm::Design const &)= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::set_design;
struct ::statiskit::glm::CategoricalFisherInitialization const * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_18c83fa61fcc56188140c7920832c3b4)()const= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::get_initialization;
void  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_1e091e9383b25045bcbb4b27e735a011)(struct ::statiskit::glm::CategoricalFisherInitialization const &)= &::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::set_initialization;

namespace autowig {
}

void wrapper_a0a8a3259686533bb0eead87e5c0553d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::OrdinalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > class_a0a8a3259686533bb0eead87e5c0553d(module, "Estimator", "");
    class_a0a8a3259686533bb0eead87e5c0553d.def(pybind11::init<  >());
    class_a0a8a3259686533bb0eead87e5c0553d.def("get_link", method_pointer_2608eb86880654d4a3ba3d0c836c19ee, pybind11::return_value_policy::reference_internal, "");
    class_a0a8a3259686533bb0eead87e5c0553d.def("set_link", method_pointer_81ea2953b2735786bc7122456c3eb2c5, "");
    class_a0a8a3259686533bb0eead87e5c0553d.def("get_design", method_pointer_16ef8a564f9b5803b23a5b35562f4d4f, pybind11::return_value_policy::reference_internal, "");
    class_a0a8a3259686533bb0eead87e5c0553d.def("set_design", method_pointer_f7ed4a95360b5352829d2da5db7ddb79, "");
    class_a0a8a3259686533bb0eead87e5c0553d.def("get_initialization", method_pointer_18c83fa61fcc56188140c7920832c3b4, pybind11::return_value_policy::reference_internal, "");
    class_a0a8a3259686533bb0eead87e5c0553d.def("set_initialization", method_pointer_1e091e9383b25045bcbb4b27e735a011, "");
    class_a0a8a3259686533bb0eead87e5c0553d.def("_build_estimated", static_cast< class ::statiskit::glm::OrdinalRegression * (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*) (class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, struct ::statiskit::MultivariateSampleSpace const &, struct ::statiskit::UnivariateSampleSpace const &) const >(&autowig::Publicist::build_estimated), pybind11::return_value_policy::reference_internal, "");
    class_a0a8a3259686533bb0eead87e5c0553d.def("_w_init", static_cast< class ::std::vector< double, class ::std::allocator< double > >  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::w_init), "");
    class_a0a8a3259686533bb0eead87e5c0553d.def("_y_init", static_cast< class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  (::statiskit::glm::CategoricalRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::y_init), "");

}