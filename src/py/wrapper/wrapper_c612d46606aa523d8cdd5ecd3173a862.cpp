#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink >::FLink;

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

struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::BinaryLink >::*method_pointer_262348fe1e9b5280965551aad7cdfdd1)()= &::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink >::get_distribution;
void  (::statiskit::glm::FLink< ::statiskit::glm::BinaryLink >::*method_pointer_77562c7ab60d51cf92ebcafb5ece6aff)(struct ::statiskit::ContinuousUnivariateDistribution const &)= &::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink >::set_distribution;

namespace autowig {
}

void wrapper_c612d46606aa523d8cdd5ecd3173a862(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > >::Type, struct ::statiskit::glm::BinaryLink > class_c612d46606aa523d8cdd5ecd3173a862(module, "_FLink_c612d46606aa523d8cdd5ecd3173a862", "");
    class_c612d46606aa523d8cdd5ecd3173a862.def(pybind11::init<  >());
    class_c612d46606aa523d8cdd5ecd3173a862.def("get_distribution", method_pointer_262348fe1e9b5280965551aad7cdfdd1, pybind11::return_value_policy::reference_internal, "");
    class_c612d46606aa523d8cdd5ecd3173a862.def("set_distribution", method_pointer_77562c7ab60d51cf92ebcafb5ece6aff, "");

}