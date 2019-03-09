#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_38e9e2f603d45e67bdce13ca9de9dab4;
            virtual return_type_38e9e2f603d45e67bdce13ca9de9dab4 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_38e9e2f603d45e67bdce13ca9de9dab4, class_type, copy, ); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_ebbaad763a9b5d1b920740e3bb155b95;
            typedef class ::statiskit::UnivariateConditionalData const & param_ebbaad763a9b5d1b920740e3bb155b95_0_type;
            virtual return_type_ebbaad763a9b5d1b920740e3bb155b95 y_init(param_ebbaad763a9b5d1b920740e3bb155b95_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_ebbaad763a9b5d1b920740e3bb155b95, class_type, y_init, param_0); };
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
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  return_type_4db50dad3dbe53c1aff32ba37410f8eb;
            typedef class ::statiskit::UnivariateConditionalData const & param_4db50dad3dbe53c1aff32ba37410f8eb_0_type;
            virtual return_type_4db50dad3dbe53c1aff32ba37410f8eb X_init(param_4db50dad3dbe53c1aff32ba37410f8eb_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_4db50dad3dbe53c1aff32ba37410f8eb, class_type, X_init, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_473e6c1801f95ffd85c8ab874c3adcb9;
            typedef class ::statiskit::UnivariateConditionalData const & param_473e6c1801f95ffd85c8ab874c3adcb9_0_type;
            typedef bool const & param_473e6c1801f95ffd85c8ab874c3adcb9_1_type;
            virtual return_type_473e6c1801f95ffd85c8ab874c3adcb9 operator()(param_473e6c1801f95ffd85c8ab874c3adcb9_0_type param_0, param_473e6c1801f95ffd85c8ab874c3adcb9_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_473e6c1801f95ffd85c8ab874c3adcb9, class_type, operator(), param_0, param_1); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
            typedef class ::std::unordered_set< statiskit::Index, struct ::std::hash< statiskit::Index >, struct ::std::equal_to< statiskit::Index >, class ::std::allocator< statiskit::Index > >  return_type_7ba100805cd95f1cba468c9ce84eb72c;
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

void wrapper_06a3c43df965527b91fd0e43979744de(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::BinomialRegressionFisherEstimation::Estimator, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::glm::QuantitativeScalarRegressionFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > class_06a3c43df965527b91fd0e43979744de(module, "_PolymorphicCopy_06a3c43df965527b91fd0e43979744de", "");
    class_06a3c43df965527b91fd0e43979744de.def(pybind11::init<  >());
    class_06a3c43df965527b91fd0e43979744de.def("_build_estimated", static_cast< class ::statiskit::glm::BinomialRegression * (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::build_estimated), pybind11::return_value_policy::reference_internal, "");
    class_06a3c43df965527b91fd0e43979744de.def("_sigma_square", static_cast< double  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (double const &) const >(&autowig::Publicist::sigma_square), "");
    class_06a3c43df965527b91fd0e43979744de.def("_w_init", static_cast< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::w_init), "");
    class_06a3c43df965527b91fd0e43979744de.def("_x__init", static_cast< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::X_init), "");

}