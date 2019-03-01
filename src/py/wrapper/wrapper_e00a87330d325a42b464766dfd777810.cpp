#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::NegativeBinomialLink class_type;

    class Trampoline : public class_type
    {
        public:

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

class ::std::unique_ptr< struct ::statiskit::glm::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::glm::NegativeBinomialLink > >  (::statiskit::glm::NegativeBinomialLink::*method_pointer_6683b7d624465ae99491440ee1a4cb83)()const= &::statiskit::glm::NegativeBinomialLink::copy;

namespace autowig {
}

void wrapper_e00a87330d325a42b464766dfd777810(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::NegativeBinomialLink, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::NegativeBinomialLink >::Type, struct ::statiskit::glm::ScalarLink > class_e00a87330d325a42b464766dfd777810(module, "NegativeBinomialLink", "");
    class_e00a87330d325a42b464766dfd777810.def("copy", method_pointer_6683b7d624465ae99491440ee1a4cb83, "");

}