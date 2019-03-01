#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::PoissonLink class_type;

    class Trampoline : public class_type
    {
        public:

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

class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > >  (::statiskit::glm::PoissonLink::*method_pointer_9495bfec0f515c05b36c27235cfe5dca)()const= &::statiskit::glm::PoissonLink::copy;

namespace autowig {
}

void wrapper_05c9ac12ed4251ed8e7ea5ce4603e683(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::PoissonLink, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::PoissonLink >::Type, struct ::statiskit::glm::ScalarLink > class_05c9ac12ed4251ed8e7ea5ce4603e683(module, "PoissonLink", "");
    class_05c9ac12ed4251ed8e7ea5ce4603e683.def("copy", method_pointer_9495bfec0f515c05b36c27235cfe5dca, "");

}