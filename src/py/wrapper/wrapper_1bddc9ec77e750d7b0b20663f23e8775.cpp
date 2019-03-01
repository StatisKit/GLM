#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >::GeneralizedLinearModel;

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
            typedef unsigned int  return_type_a19605344e725c65ab302819d1663dbe;
            virtual return_type_a19605344e725c65ab302819d1663dbe get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_a19605344e725c65ab302819d1663dbe, class_type, get_nb_parameters, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::update;
    };
}

class ::statiskit::glm::ScalarPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::NegativeBinomialLink >::*method_pointer_ccb1b2221fdf5289be6a817710b92090)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >::get_predictor;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::NegativeBinomialLink >::*method_pointer_d2e22405ca7751c5be81e52a71ba1af3)(class ::statiskit::glm::ScalarPredictor const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >::set_predictor;
struct ::statiskit::glm::NegativeBinomialLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::NegativeBinomialLink >::*method_pointer_7062217873015be5bc73b443d43b3b0d)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >::get_link;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::NegativeBinomialLink >::*method_pointer_fe838504168659ba80c33044ca6fa154)(struct ::statiskit::glm::NegativeBinomialLink const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >::set_link;

namespace autowig {
}

void wrapper_1bddc9ec77e750d7b0b20663f23e8775(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink >, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::NegativeBinomialLink > >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistribution > class_1bddc9ec77e750d7b0b20663f23e8775(module, "_GeneralizedLinearModel_1bddc9ec77e750d7b0b20663f23e8775", "");
    class_1bddc9ec77e750d7b0b20663f23e8775.def(pybind11::init< class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::NegativeBinomialLink const & >());
    class_1bddc9ec77e750d7b0b20663f23e8775.def("get_predictor", method_pointer_ccb1b2221fdf5289be6a817710b92090, pybind11::return_value_policy::reference_internal, "");
    class_1bddc9ec77e750d7b0b20663f23e8775.def("set_predictor", method_pointer_d2e22405ca7751c5be81e52a71ba1af3, "");
    class_1bddc9ec77e750d7b0b20663f23e8775.def("get_link", method_pointer_7062217873015be5bc73b443d43b3b0d, pybind11::return_value_policy::reference_internal, "");
    class_1bddc9ec77e750d7b0b20663f23e8775.def("set_link", method_pointer_fe838504168659ba80c33044ca6fa154, "");
    class_1bddc9ec77e750d7b0b20663f23e8775.def("_update", &autowig::Publicist::update, "");

}