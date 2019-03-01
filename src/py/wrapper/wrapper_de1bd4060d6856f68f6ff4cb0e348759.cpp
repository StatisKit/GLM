#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >::GeneralizedLinearModel;

            typedef void  return_type_e5f9bf150c5f5c539f67723982ecb53f;
            typedef double const & param_e5f9bf150c5f5c539f67723982ecb53f_0_type;
            virtual return_type_e5f9bf150c5f5c539f67723982ecb53f update(param_e5f9bf150c5f5c539f67723982ecb53f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_e5f9bf150c5f5c539f67723982ecb53f, class_type, update, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_284e4feaba7b5b5a88a28d146983e886;
            virtual return_type_284e4feaba7b5b5a88a28d146983e886 get_explanatory_space() const override { PYBIND11_OVERLOAD(return_type_284e4feaba7b5b5a88a28d146983e886, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_839427dc13a25d09aaa0fa0c226ca422;
            typedef struct ::statiskit::MultivariateEvent const & param_839427dc13a25d09aaa0fa0c226ca422_0_type;
            virtual return_type_839427dc13a25d09aaa0fa0c226ca422 operator()(param_839427dc13a25d09aaa0fa0c226ca422_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_839427dc13a25d09aaa0fa0c226ca422, class_type, operator(), param_0); };
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

class ::statiskit::glm::ScalarPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::PoissonLink >::*method_pointer_a48b0b25a83354e5a8abdf11600e66ca)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >::get_predictor;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::PoissonLink >::*method_pointer_544e2ec33f1a5e239cc9a4bffac133d6)(class ::statiskit::glm::ScalarPredictor const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >::set_predictor;
struct ::statiskit::glm::PoissonLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::PoissonLink >::*method_pointer_ebcd9de0325d523c97eb8d78582f5c84)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >::get_link;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::PoissonLink >::*method_pointer_46f09f7f0370522a88804267faa646ca)(struct ::statiskit::glm::PoissonLink const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >::set_link;

namespace autowig {
}

void wrapper_de1bd4060d6856f68f6ff4cb0e348759(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink >, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistribution > class_de1bd4060d6856f68f6ff4cb0e348759(module, "_GeneralizedLinearModel_de1bd4060d6856f68f6ff4cb0e348759", "");
    class_de1bd4060d6856f68f6ff4cb0e348759.def(pybind11::init< class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::PoissonLink const & >());
    class_de1bd4060d6856f68f6ff4cb0e348759.def("get_predictor", method_pointer_a48b0b25a83354e5a8abdf11600e66ca, pybind11::return_value_policy::reference_internal, "");
    class_de1bd4060d6856f68f6ff4cb0e348759.def("set_predictor", method_pointer_544e2ec33f1a5e239cc9a4bffac133d6, "");
    class_de1bd4060d6856f68f6ff4cb0e348759.def("get_link", method_pointer_ebcd9de0325d523c97eb8d78582f5c84, pybind11::return_value_policy::reference_internal, "");
    class_de1bd4060d6856f68f6ff4cb0e348759.def("set_link", method_pointer_46f09f7f0370522a88804267faa646ca, "");
    class_de1bd4060d6856f68f6ff4cb0e348759.def("_update", &autowig::Publicist::update, "");

}