#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::BinaryLink class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > >  return_type_da608197d2c35ac98ff3e3ce86296a17;
            virtual return_type_da608197d2c35ac98ff3e3ce86296a17 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_da608197d2c35ac98ff3e3ce86296a17, class_type, copy, ); };
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

class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > >  (::statiskit::glm::BinaryLink::*method_pointer_da608197d2c35ac98ff3e3ce86296a17)()const= &::statiskit::glm::BinaryLink::copy;

namespace autowig {
}

void wrapper_96ab5a0752a454d3a1f8d2008e30a6eb(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::BinaryLink, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::BinaryLink >::Type, struct ::statiskit::glm::ScalarLink > class_96ab5a0752a454d3a1f8d2008e30a6eb(module, "BinaryLink", "");
    class_96ab5a0752a454d3a1f8d2008e30a6eb.def("copy", method_pointer_da608197d2c35ac98ff3e3ce86296a17, "");

}