#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink >::FLink;

            typedef class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > >  return_type_cbd6cb94f82859609c826f08d198eb34;
            virtual return_type_cbd6cb94f82859609c826f08d198eb34 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_cbd6cb94f82859609c826f08d198eb34, class_type, copy, ); };
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

struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::BinomialLink >::*method_pointer_41a55f69b9fa5c2abc2cf1d613b570d1)()= &::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink >::get_distribution;
void  (::statiskit::glm::FLink< ::statiskit::glm::BinomialLink >::*method_pointer_7845a8bbe90f55478bb988e9a2f5525d)(struct ::statiskit::ContinuousUnivariateDistribution const &)= &::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink >::set_distribution;

namespace autowig {
}

void wrapper_881b37e12e075b58becfdabd3cfa7b71(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > >::Type, struct ::statiskit::glm::BinomialLink > class_881b37e12e075b58becfdabd3cfa7b71(module, "_FLink_881b37e12e075b58becfdabd3cfa7b71", "");
    class_881b37e12e075b58becfdabd3cfa7b71.def(pybind11::init<  >());
    class_881b37e12e075b58becfdabd3cfa7b71.def("get_distribution", method_pointer_41a55f69b9fa5c2abc2cf1d613b570d1, pybind11::return_value_policy::reference_internal, "");
    class_881b37e12e075b58becfdabd3cfa7b71.def("set_distribution", method_pointer_7845a8bbe90f55478bb988e9a2f5525d, "");

}