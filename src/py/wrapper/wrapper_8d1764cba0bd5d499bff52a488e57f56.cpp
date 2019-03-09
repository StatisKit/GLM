#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_b9c38449d37f5d1e962ac445b93734a9;
            virtual return_type_b9c38449d37f5d1e962ac445b93734a9 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_b9c38449d37f5d1e962ac445b93734a9, class_type, copy, ); };
            typedef class ::statiskit::glm::BinaryRegression * return_type_2b8fadc6494a54a19c84e08fd52bcd81;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_2b8fadc6494a54a19c84e08fd52bcd81_0_type;
            typedef class ::statiskit::UnivariateConditionalData const & param_2b8fadc6494a54a19c84e08fd52bcd81_1_type;
            virtual return_type_2b8fadc6494a54a19c84e08fd52bcd81 build_estimated(param_2b8fadc6494a54a19c84e08fd52bcd81_0_type param_0, param_2b8fadc6494a54a19c84e08fd52bcd81_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_2b8fadc6494a54a19c84e08fd52bcd81, class_type, build_estimated, param_0, param_1); };
            typedef double  return_type_668396d9fd2a52f492e866990e602b1d;
            typedef double const & param_668396d9fd2a52f492e866990e602b1d_0_type;
            virtual return_type_668396d9fd2a52f492e866990e602b1d sigma_square(param_668396d9fd2a52f492e866990e602b1d_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_668396d9fd2a52f492e866990e602b1d, class_type, sigma_square, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_cbc55dfe78695595934cb9cad513e010;
            typedef class ::statiskit::UnivariateConditionalData const & param_cbc55dfe78695595934cb9cad513e010_0_type;
            virtual return_type_cbc55dfe78695595934cb9cad513e010 w_init(param_cbc55dfe78695595934cb9cad513e010_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_cbc55dfe78695595934cb9cad513e010, class_type, w_init, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_955a99c3a7c850299055aadaef35dad8;
            typedef class ::statiskit::UnivariateConditionalData const & param_955a99c3a7c850299055aadaef35dad8_0_type;
            virtual return_type_955a99c3a7c850299055aadaef35dad8 y_init(param_955a99c3a7c850299055aadaef35dad8_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_955a99c3a7c850299055aadaef35dad8, class_type, y_init, param_0); };
            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  return_type_7d921d5fd00759e49c17d9a3b9386a31;
            typedef class ::statiskit::UnivariateConditionalData const & param_7d921d5fd00759e49c17d9a3b9386a31_0_type;
            virtual return_type_7d921d5fd00759e49c17d9a3b9386a31 X_init(param_7d921d5fd00759e49c17d9a3b9386a31_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_7d921d5fd00759e49c17d9a3b9386a31, class_type, X_init, param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_a2ba3f3da8425e55b4b73a31b7e9afb0;
            typedef class ::statiskit::UnivariateConditionalData const & param_a2ba3f3da8425e55b4b73a31b7e9afb0_0_type;
            typedef bool const & param_a2ba3f3da8425e55b4b73a31b7e9afb0_1_type;
            virtual return_type_a2ba3f3da8425e55b4b73a31b7e9afb0 operator()(param_a2ba3f3da8425e55b4b73a31b7e9afb0_0_type param_0, param_a2ba3f3da8425e55b4b73a31b7e9afb0_1_type param_1) const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_a2ba3f3da8425e55b4b73a31b7e9afb0, class_type, operator(), param_0, param_1); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
            typedef class ::std::unordered_set< statiskit::Index, struct ::std::hash< statiskit::Index >, struct ::std::equal_to< statiskit::Index >, class ::std::allocator< statiskit::Index > >  return_type_7ba100805cd95f1cba468c9ce84eb72c;
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


namespace autowig {
}

void wrapper_8d1764cba0bd5d499bff52a488e57f56(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::BinaryRegressionFisherEstimation::Estimator, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > >::Type, class ::statiskit::glm::ScalarRegressionFisherEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator > class_8d1764cba0bd5d499bff52a488e57f56(module, "_PolymorphicCopy_8d1764cba0bd5d499bff52a488e57f56", "");
    class_8d1764cba0bd5d499bff52a488e57f56.def(pybind11::init<  >());
    class_8d1764cba0bd5d499bff52a488e57f56.def("_build_estimated", static_cast< class ::statiskit::glm::BinaryRegression * (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::build_estimated), pybind11::return_value_policy::reference_internal, "");
    class_8d1764cba0bd5d499bff52a488e57f56.def("_sigma_square", static_cast< double  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*) (double const &) const >(&autowig::Publicist::sigma_square), "");
    class_8d1764cba0bd5d499bff52a488e57f56.def("_w_init", static_cast< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::w_init), "");
    class_8d1764cba0bd5d499bff52a488e57f56.def("_y_init", static_cast< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::y_init), "");
    class_8d1764cba0bd5d499bff52a488e57f56.def("_x__init", static_cast< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::glm::ScalarRegressionFisherEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Estimator::*) (class ::statiskit::UnivariateConditionalData const &) const >(&autowig::Publicist::X_init), "");

}