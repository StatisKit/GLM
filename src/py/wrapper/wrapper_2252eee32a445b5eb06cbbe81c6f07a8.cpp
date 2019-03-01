#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::ScalarLink class_type;

    class Trampoline : public class_type
    {
        public:

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

double  (::statiskit::glm::ScalarLink::*method_pointer_5dcdc12fa57c5edc9de0e319163d1cca)(double const &)const= &::statiskit::glm::ScalarLink::evaluate;
double  (::statiskit::glm::ScalarLink::*method_pointer_fc86be68d84e511e9a34503a8754077a)(double const &)const= &::statiskit::glm::ScalarLink::inverse;
double  (::statiskit::glm::ScalarLink::*method_pointer_9ba4fc1dd4f652f392ce40b2bf511b7b)(double const &)const= &::statiskit::glm::ScalarLink::inverse_derivative;

namespace autowig {
}

void wrapper_2252eee32a445b5eb06cbbe81c6f07a8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::ScalarLink, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::ScalarLink >::Type > class_2252eee32a445b5eb06cbbe81c6f07a8(module, "ScalarLink", "");
    class_2252eee32a445b5eb06cbbe81c6f07a8.def("evaluate", method_pointer_5dcdc12fa57c5edc9de0e319163d1cca, "");
    class_2252eee32a445b5eb06cbbe81c6f07a8.def("inverse", method_pointer_fc86be68d84e511e9a34503a8754077a, "");
    class_2252eee32a445b5eb06cbbe81c6f07a8.def("inverse_derivative", method_pointer_9ba4fc1dd4f652f392ce40b2bf511b7b, "");

}