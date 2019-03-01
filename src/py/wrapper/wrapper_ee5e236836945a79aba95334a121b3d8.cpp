#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink >::FLink;

            typedef class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > >  return_type_9495bfec0f515c05b36c27235cfe5dca;
            virtual return_type_9495bfec0f515c05b36c27235cfe5dca copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_9495bfec0f515c05b36c27235cfe5dca, class_type, copy, ); };
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

struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::PoissonLink >::*method_pointer_0553a078f4de54368105d6e614cd7c39)()= &::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink >::get_distribution;
void  (::statiskit::glm::FLink< ::statiskit::glm::PoissonLink >::*method_pointer_bf5074ce80df5917b94ce7add6f1f77b)(struct ::statiskit::ContinuousUnivariateDistribution const &)= &::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink >::set_distribution;

namespace autowig {
}

void wrapper_ee5e236836945a79aba95334a121b3d8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > >::Type, struct ::statiskit::glm::PoissonLink > class_ee5e236836945a79aba95334a121b3d8(module, "_FLink_ee5e236836945a79aba95334a121b3d8", "");
    class_ee5e236836945a79aba95334a121b3d8.def(pybind11::init<  >());
    class_ee5e236836945a79aba95334a121b3d8.def("get_distribution", method_pointer_0553a078f4de54368105d6e614cd7c39, pybind11::return_value_policy::reference_internal, "");
    class_ee5e236836945a79aba95334a121b3d8.def("set_distribution", method_pointer_bf5074ce80df5917b94ce7add6f1f77b, "");

}