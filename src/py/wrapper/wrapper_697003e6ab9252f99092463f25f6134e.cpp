#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::Estimator;

            typedef class ::statiskit::glm::BinomialRegression * return_type_fd9a3dbeda4a50ff9fddafb155d99918;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_fd9a3dbeda4a50ff9fddafb155d99918_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_fd9a3dbeda4a50ff9fddafb155d99918_1_type;
            virtual return_type_fd9a3dbeda4a50ff9fddafb155d99918 build_estimated(param_fd9a3dbeda4a50ff9fddafb155d99918_0_type param_0, param_fd9a3dbeda4a50ff9fddafb155d99918_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_fd9a3dbeda4a50ff9fddafb155d99918, class_type, build_estimated, param_0, param_1); };
            typedef double  return_type_2304ebab430555b1b17364913121c825;
            typedef double const & param_2304ebab430555b1b17364913121c825_0_type;
            virtual return_type_2304ebab430555b1b17364913121c825 sigma_square(param_2304ebab430555b1b17364913121c825_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_2304ebab430555b1b17364913121c825, class_type, sigma_square, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_12fe57b7ee925101a6e786514cbcf574;
            typedef class ::statiskit::UnivariateConditionalData const & param_12fe57b7ee925101a6e786514cbcf574_0_type;
            virtual return_type_12fe57b7ee925101a6e786514cbcf574 w_init(param_12fe57b7ee925101a6e786514cbcf574_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_12fe57b7ee925101a6e786514cbcf574, class_type, w_init, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_27e7a95b903753a394c89d27956edf22;
            typedef class ::statiskit::UnivariateConditionalData const & param_27e7a95b903753a394c89d27956edf22_0_type;
            virtual return_type_27e7a95b903753a394c89d27956edf22 y_init(param_27e7a95b903753a394c89d27956edf22_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_27e7a95b903753a394c89d27956edf22, class_type, y_init, param_0); };
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  return_type_4db50dad3dbe53c1aff32ba37410f8eb;
            typedef class ::statiskit::UnivariateConditionalData const & param_4db50dad3dbe53c1aff32ba37410f8eb_0_type;
            virtual return_type_4db50dad3dbe53c1aff32ba37410f8eb X_init(param_4db50dad3dbe53c1aff32ba37410f8eb_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_4db50dad3dbe53c1aff32ba37410f8eb, class_type, X_init, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_473e6c1801f95ffd85c8ab874c3adcb9;
            typedef class ::statiskit::UnivariateConditionalData const & param_473e6c1801f95ffd85c8ab874c3adcb9_0_type;
            typedef bool const & param_473e6c1801f95ffd85c8ab874c3adcb9_1_type;
            virtual return_type_473e6c1801f95ffd85c8ab874c3adcb9 operator()(param_473e6c1801f95ffd85c8ab874c3adcb9_0_type param_0, param_473e6c1801f95ffd85c8ab874c3adcb9_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_473e6c1801f95ffd85c8ab874c3adcb9, class_type, operator(), param_0, param_1); };
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

enum ::statiskit::linalg::solver_type const & (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_cae72a99d2575545b3c85f91b6147f8b)()const= &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_solver;
void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_4d022555fe045fc396f6f54ff55e3b3f)(enum ::statiskit::linalg::solver_type const &)= &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_solver;
struct ::statiskit::glm::BinomialLink const * (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_cdb2c071bdb3582a82f1b4086935f138)()const= &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_link;
void  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_4de3b52a1a8654f18979454d7bd8cb2e)(struct ::statiskit::glm::BinomialLink const &)= &::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_link;

namespace autowig {
}

void wrapper_697003e6ab9252f99092463f25f6134e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > class_697003e6ab9252f99092463f25f6134e(module, "Estimator", "");
    class_697003e6ab9252f99092463f25f6134e.def(pybind11::init<  >());
    class_697003e6ab9252f99092463f25f6134e.def("get_solver", method_pointer_cae72a99d2575545b3c85f91b6147f8b, pybind11::return_value_policy::copy, "");
    class_697003e6ab9252f99092463f25f6134e.def("set_solver", method_pointer_4d022555fe045fc396f6f54ff55e3b3f, "");
    class_697003e6ab9252f99092463f25f6134e.def("get_link", method_pointer_cdb2c071bdb3582a82f1b4086935f138, pybind11::return_value_policy::reference_internal, "");
    class_697003e6ab9252f99092463f25f6134e.def("set_link", method_pointer_4de3b52a1a8654f18979454d7bd8cb2e, "");
    class_697003e6ab9252f99092463f25f6134e.def("_build_estimated", &autowig::Publicist::build_estimated, pybind11::return_value_policy::reference_internal, "");
    class_697003e6ab9252f99092463f25f6134e.def("_sigma_square", &autowig::Publicist::sigma_square, "");
    class_697003e6ab9252f99092463f25f6134e.def("_w_init", &autowig::Publicist::w_init, "");
    class_697003e6ab9252f99092463f25f6134e.def("_y_init", &autowig::Publicist::y_init, "");
    class_697003e6ab9252f99092463f25f6134e.def("_x__init", &autowig::Publicist::X_init, "");

}