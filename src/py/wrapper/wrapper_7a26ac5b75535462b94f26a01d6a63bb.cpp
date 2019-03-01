#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::statiskit::glm::CategoricalFisherUniformInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::statiskit::glm::CategoricalFisherUniformInitialization, struct ::statiskit::glm::CategoricalFisherInitialization >::PolymorphicCopy;

            typedef class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > >  return_type_dd7d542ed70c58bdad1a2117b2069ea8;
            virtual return_type_dd7d542ed70c58bdad1a2117b2069ea8 copy() const override { PYBIND11_OVERLOAD_UNIQUE_PTR(return_type_dd7d542ed70c58bdad1a2117b2069ea8, class_type, copy, ); };
            typedef void  return_type_f020b7c9271f52fe84de964f8f02d96e;
            typedef class ::statiskit::UnivariateConditionalData const & param_f020b7c9271f52fe84de964f8f02d96e_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_f020b7c9271f52fe84de964f8f02d96e_1_type;
            typedef struct ::statiskit::glm::VectorLink const & param_f020b7c9271f52fe84de964f8f02d96e_2_type;
            virtual return_type_f020b7c9271f52fe84de964f8f02d96e operator()(param_f020b7c9271f52fe84de964f8f02d96e_0_type param_0, param_f020b7c9271f52fe84de964f8f02d96e_1_type param_1, param_f020b7c9271f52fe84de964f8f02d96e_2_type param_2) const override { PYBIND11_OVERLOAD_PURE(return_type_f020b7c9271f52fe84de964f8f02d96e, class_type, operator(), param_0, param_1, param_2); };
    };
}


namespace autowig {
}

void wrapper_7a26ac5b75535462b94f26a01d6a63bb(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::statiskit::glm::CategoricalFisherUniformInitialization, struct ::statiskit::glm::CategoricalFisherInitialization >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::statiskit::glm::CategoricalFisherUniformInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > >::Type, struct ::statiskit::glm::CategoricalFisherInitialization > class_7a26ac5b75535462b94f26a01d6a63bb(module, "_PolymorphicCopy_7a26ac5b75535462b94f26a01d6a63bb", "");

}