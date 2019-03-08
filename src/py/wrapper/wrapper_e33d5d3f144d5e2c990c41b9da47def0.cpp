#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::NegativeBinomialLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::NegativeBinomialLink >::UnivariateDiscreteGeneralizedLinearModel;

            typedef unsigned int  return_type_a17d4190c731571badd9ea5cfe4b475e;
            virtual return_type_a17d4190c731571badd9ea5cfe4b475e get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_a17d4190c731571badd9ea5cfe4b475e, class_type, get_nb_parameters, ); };
            typedef void  return_type_42da0312fa6555a2aaa4aca6d27e4ba7;
            typedef double const & param_42da0312fa6555a2aaa4aca6d27e4ba7_0_type;
            virtual return_type_42da0312fa6555a2aaa4aca6d27e4ba7 update(param_42da0312fa6555a2aaa4aca6d27e4ba7_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_42da0312fa6555a2aaa4aca6d27e4ba7, class_type, update, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_7456c7be3fd45e79b0746f153f6f309b;
            virtual return_type_7456c7be3fd45e79b0746f153f6f309b get_explanatory_space() const override { PYBIND11_OVERLOAD(return_type_7456c7be3fd45e79b0746f153f6f309b, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_8e97f96448c954968a0fb10d173eacea;
            typedef struct ::statiskit::MultivariateEvent const & param_8e97f96448c954968a0fb10d173eacea_0_type;
            virtual return_type_8e97f96448c954968a0fb10d173eacea operator()(param_8e97f96448c954968a0fb10d173eacea_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_8e97f96448c954968a0fb10d173eacea, class_type, operator(), param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  return_type_2d42bbbaff065a9cb38813f62e9dafda;
            virtual return_type_2d42bbbaff065a9cb38813f62e9dafda copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_2d42bbbaff065a9cb38813f62e9dafda, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::update;
    };
}


namespace autowig {
}

void wrapper_e33d5d3f144d5e2c990c41b9da47def0(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::NegativeBinomialLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::NegativeBinomialLink > >::Type, class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > > class_e33d5d3f144d5e2c990c41b9da47def0(module, "_UnivariateDiscreteGeneralizedLinearModel_e33d5d3f144d5e2c990c41b9da47def0", "");
    class_e33d5d3f144d5e2c990c41b9da47def0.def(pybind11::init< class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::NegativeBinomialLink const & >());
    class_e33d5d3f144d5e2c990c41b9da47def0.def("_update", static_cast< void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::NegativeBinomialLink >::*) (double const &) const >(&autowig::Publicist::update), "");

}