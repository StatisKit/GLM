#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::CategoricalFisherInitialization class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::CategoricalFisherInitialization::CategoricalFisherInitialization;

            typedef class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > >  return_type_4a291218403b561b85dc84e998ca397f;
            virtual return_type_4a291218403b561b85dc84e998ca397f copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4a291218403b561b85dc84e998ca397f, class_type, copy, ); };
            typedef void  return_type_f020b7c9271f52fe84de964f8f02d96e;
            typedef class ::statiskit::UnivariateConditionalData const & param_f020b7c9271f52fe84de964f8f02d96e_0_type;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_f020b7c9271f52fe84de964f8f02d96e_1_type;
            typedef struct ::statiskit::glm::VectorLink const & param_f020b7c9271f52fe84de964f8f02d96e_2_type;
            virtual return_type_f020b7c9271f52fe84de964f8f02d96e operator()(param_f020b7c9271f52fe84de964f8f02d96e_0_type param_0, param_f020b7c9271f52fe84de964f8f02d96e_1_type param_1, param_f020b7c9271f52fe84de964f8f02d96e_2_type param_2) const override { PYBIND11_OVERLOAD_PURE(return_type_f020b7c9271f52fe84de964f8f02d96e, class_type, operator(), param_0, param_1, param_2); };
    };
}

void  (::statiskit::glm::CategoricalFisherInitialization::*method_pointer_f020b7c9271f52fe84de964f8f02d96e)(class ::statiskit::UnivariateConditionalData const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &, struct ::statiskit::glm::VectorLink const &)const= &::statiskit::glm::CategoricalFisherInitialization::operator();
class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > >  (::statiskit::glm::CategoricalFisherInitialization::*method_pointer_4a291218403b561b85dc84e998ca397f)()const= &::statiskit::glm::CategoricalFisherInitialization::copy;

namespace autowig {
}

void wrapper_6f05ff8f5d5a54678dfff6c1f0bfabcf(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::CategoricalFisherInitialization, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::CategoricalFisherInitialization >::Type > class_6f05ff8f5d5a54678dfff6c1f0bfabcf(module, "CategoricalFisherInitialization", "");
    class_6f05ff8f5d5a54678dfff6c1f0bfabcf.def(pybind11::init<  >());
    class_6f05ff8f5d5a54678dfff6c1f0bfabcf.def("__call__", method_pointer_f020b7c9271f52fe84de964f8f02d96e, "");
    class_6f05ff8f5d5a54678dfff6c1f0bfabcf.def("copy", method_pointer_4a291218403b561b85dc84e998ca397f, "");

}