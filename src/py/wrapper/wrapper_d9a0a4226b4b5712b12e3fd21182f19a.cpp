#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink >::FLink;

            typedef class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > >  return_type_6683b7d624465ae99491440ee1a4cb83;
            virtual return_type_6683b7d624465ae99491440ee1a4cb83 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_6683b7d624465ae99491440ee1a4cb83, class_type, copy, ); };
            typedef double  return_type_9ba4fc1dd4f652f392ce40b2bf511b7b;
            typedef double const & param_9ba4fc1dd4f652f392ce40b2bf511b7b_0_type;
            virtual return_type_9ba4fc1dd4f652f392ce40b2bf511b7b inverse_derivative(param_9ba4fc1dd4f652f392ce40b2bf511b7b_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_9ba4fc1dd4f652f392ce40b2bf511b7b, class_type, inverse_derivative, param_0); };
            typedef double  return_type_fc86be68d84e511e9a34503a8754077a;
            typedef double const & param_fc86be68d84e511e9a34503a8754077a_0_type;
            virtual return_type_fc86be68d84e511e9a34503a8754077a inverse(param_fc86be68d84e511e9a34503a8754077a_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_fc86be68d84e511e9a34503a8754077a, class_type, inverse, param_0); };
            typedef double  return_type_5dcdc12fa57c5edc9de0e319163d1cca;
            typedef double const & param_5dcdc12fa57c5edc9de0e319163d1cca_0_type;
            virtual return_type_5dcdc12fa57c5edc9de0e319163d1cca evaluate(param_5dcdc12fa57c5edc9de0e319163d1cca_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_5dcdc12fa57c5edc9de0e319163d1cca, class_type, evaluate, param_0); };
    };
}

struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::NegativeBinomialLink >::*method_pointer_fa258cae5bf05771b6ac574c344ae73e)()= &::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink >::get_distribution;
void  (::statiskit::glm::FLink< ::statiskit::glm::NegativeBinomialLink >::*method_pointer_2def885916a05092a17d47cbe45174b8)(struct ::statiskit::ContinuousUnivariateDistribution const &)= &::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink >::set_distribution;

namespace autowig {
}

void wrapper_d9a0a4226b4b5712b12e3fd21182f19a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > >::Type, struct ::statiskit::glm::NegativeBinomialLink > class_d9a0a4226b4b5712b12e3fd21182f19a(module, "_FLink_d9a0a4226b4b5712b12e3fd21182f19a", "");
    class_d9a0a4226b4b5712b12e3fd21182f19a.def(pybind11::init<  >());
    class_d9a0a4226b4b5712b12e3fd21182f19a.def("get_distribution", method_pointer_fa258cae5bf05771b6ac574c344ae73e, pybind11::return_value_policy::reference_internal, "");
    class_d9a0a4226b4b5712b12e3fd21182f19a.def("set_distribution", method_pointer_2def885916a05092a17d47cbe45174b8, "");

}