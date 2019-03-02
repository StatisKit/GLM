#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >::GeneralizedLinearModel;

            typedef void  return_type_5d99d8aa0b295d58a36918f14308a7e7;
            typedef double const & param_5d99d8aa0b295d58a36918f14308a7e7_0_type;
            virtual return_type_5d99d8aa0b295d58a36918f14308a7e7 update(param_5d99d8aa0b295d58a36918f14308a7e7_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_5d99d8aa0b295d58a36918f14308a7e7, class_type, update, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_d406d2daa7a55230829ab0e6bc8a09ed;
            virtual return_type_d406d2daa7a55230829ab0e6bc8a09ed get_explanatory_space() const override { PYBIND11_OVERLOAD(return_type_d406d2daa7a55230829ab0e6bc8a09ed, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_2f3e3f43733454e68455f24ea64f4195;
            typedef struct ::statiskit::MultivariateEvent const & param_2f3e3f43733454e68455f24ea64f4195_0_type;
            virtual return_type_2f3e3f43733454e68455f24ea64f4195 operator()(param_2f3e3f43733454e68455f24ea64f4195_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_2f3e3f43733454e68455f24ea64f4195, class_type, operator(), param_0); };
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

class ::statiskit::glm::ScalarPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::BinaryLink >::*method_pointer_6e4cad035b24525cb0abb033bd608d55)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >::get_predictor;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::BinaryLink >::*method_pointer_c3d25175e84a52718db5d2a57b542828)(class ::statiskit::glm::ScalarPredictor const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >::set_predictor;
struct ::statiskit::glm::BinaryLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::BinaryLink >::*method_pointer_dcd636748ec956069311fc63872750c6)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >::get_link;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::BinaryLink >::*method_pointer_f6c533ed73ff5e77ae79bcf51de18321)(struct ::statiskit::glm::BinaryLink const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >::set_link;

namespace autowig {
}

void wrapper_9f9f076afa5751059714afdf107b13ab(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink >, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistribution > class_9f9f076afa5751059714afdf107b13ab(module, "_GeneralizedLinearModel_9f9f076afa5751059714afdf107b13ab", "");
    class_9f9f076afa5751059714afdf107b13ab.def(pybind11::init< class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::BinaryLink const & >());
    class_9f9f076afa5751059714afdf107b13ab.def("get_predictor", method_pointer_6e4cad035b24525cb0abb033bd608d55, pybind11::return_value_policy::reference_internal, "");
    class_9f9f076afa5751059714afdf107b13ab.def("set_predictor", method_pointer_c3d25175e84a52718db5d2a57b542828, "");
    class_9f9f076afa5751059714afdf107b13ab.def("get_link", method_pointer_dcd636748ec956069311fc63872750c6, pybind11::return_value_policy::reference_internal, "");
    class_9f9f076afa5751059714afdf107b13ab.def("set_link", method_pointer_f6c533ed73ff5e77ae79bcf51de18321, "");
    class_9f9f076afa5751059714afdf107b13ab.def("_update", &autowig::Publicist::update, "");

}