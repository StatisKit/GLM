#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >::GeneralizedLinearModel;

            typedef void  return_type_0da25cbfd9395cb8a09d8d4454e12783;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0da25cbfd9395cb8a09d8d4454e12783_0_type;
            virtual return_type_0da25cbfd9395cb8a09d8d4454e12783 update(param_0da25cbfd9395cb8a09d8d4454e12783_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_0da25cbfd9395cb8a09d8d4454e12783, class_type, update, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_a1855f5ee12e5fd1b8ab239616aeb76e;
            virtual return_type_a1855f5ee12e5fd1b8ab239616aeb76e get_explanatory_space() const override { PYBIND11_OVERLOAD(return_type_a1855f5ee12e5fd1b8ab239616aeb76e, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_adf6b47e801b52d0b5366c5975269334;
            typedef struct ::statiskit::MultivariateEvent const & param_adf6b47e801b52d0b5366c5975269334_0_type;
            virtual return_type_adf6b47e801b52d0b5366c5975269334 operator()(param_adf6b47e801b52d0b5366c5975269334_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_adf6b47e801b52d0b5366c5975269334, class_type, operator(), param_0); };
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

class ::statiskit::glm::VectorPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::OrdinalLink >::*method_pointer_7440249ae155578a80f3b601005c0b14)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >::get_predictor;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::OrdinalLink >::*method_pointer_7d82d906f0a25ab78f4dec8fd830f230)(class ::statiskit::glm::VectorPredictor const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >::set_predictor;
struct ::statiskit::glm::OrdinalLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::OrdinalLink >::*method_pointer_2ba5c29ae06858cdbc18872ae9611584)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >::get_link;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::OrdinalLink >::*method_pointer_ca71c5fd0995556f9747901ab83122c2)(struct ::statiskit::glm::OrdinalLink const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >::set_link;

namespace autowig {
}

void wrapper_b8801e59e00256e3a26fc7ff49db0a9d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink >, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistribution > class_b8801e59e00256e3a26fc7ff49db0a9d(module, "_GeneralizedLinearModel_b8801e59e00256e3a26fc7ff49db0a9d", "");
    class_b8801e59e00256e3a26fc7ff49db0a9d.def(pybind11::init< class ::statiskit::glm::VectorPredictor const &, struct ::statiskit::glm::OrdinalLink const & >());
    class_b8801e59e00256e3a26fc7ff49db0a9d.def("get_predictor", method_pointer_7440249ae155578a80f3b601005c0b14, pybind11::return_value_policy::reference_internal, "");
    class_b8801e59e00256e3a26fc7ff49db0a9d.def("set_predictor", method_pointer_7d82d906f0a25ab78f4dec8fd830f230, "");
    class_b8801e59e00256e3a26fc7ff49db0a9d.def("get_link", method_pointer_2ba5c29ae06858cdbc18872ae9611584, pybind11::return_value_policy::reference_internal, "");
    class_b8801e59e00256e3a26fc7ff49db0a9d.def("set_link", method_pointer_ca71c5fd0995556f9747901ab83122c2, "");
    class_b8801e59e00256e3a26fc7ff49db0a9d.def("_update", static_cast< void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::OrdinalLink >::*) (class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const >(&autowig::Publicist::update), "");

}