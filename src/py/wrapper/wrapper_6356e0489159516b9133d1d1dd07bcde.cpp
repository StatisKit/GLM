#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::VectorPredictor class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::VectorPredictor::VectorPredictor;

            typedef class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > >  return_type_9842cd621fa45643b5653484f01bd2e0;
            virtual return_type_9842cd621fa45643b5653484f01bd2e0 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_9842cd621fa45643b5653484f01bd2e0, class_type, copy, ); };
            typedef void  return_type_3b104098b01953909fdd9bee65b43fb3;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_3b104098b01953909fdd9bee65b43fb3_0_type;
            virtual return_type_3b104098b01953909fdd9bee65b43fb3 set_beta(param_3b104098b01953909fdd9bee65b43fb3_0_type param_0) override { PYBIND11_OVERLOAD_PURE(return_type_3b104098b01953909fdd9bee65b43fb3, class_type, set_beta, param_0); };
            typedef ::std::size_t  return_type_1c449a959dbb552caddfd4ed914dff0e;
            virtual return_type_1c449a959dbb552caddfd4ed914dff0e size() const override { PYBIND11_OVERLOAD_PURE(return_type_1c449a959dbb552caddfd4ed914dff0e, class_type, size, ); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_c3265cf8b91853b5be3de8d2e1879f08;
            typedef struct ::statiskit::MultivariateEvent const & param_c3265cf8b91853b5be3de8d2e1879f08_0_type;
            virtual return_type_c3265cf8b91853b5be3de8d2e1879f08 operator()(param_c3265cf8b91853b5be3de8d2e1879f08_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_c3265cf8b91853b5be3de8d2e1879f08, class_type, operator(), param_0); };
    };
}

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::VectorPredictor::*method_pointer_c3265cf8b91853b5be3de8d2e1879f08)(struct ::statiskit::MultivariateEvent const &)const= &::statiskit::glm::VectorPredictor::operator();
struct ::statiskit::MultivariateSampleSpace const * (::statiskit::glm::VectorPredictor::*method_pointer_d457448609cf54998618eecd892d2cf0)()const= &::statiskit::glm::VectorPredictor::get_explanatory_space;
::std::size_t  (::statiskit::glm::VectorPredictor::*method_pointer_1c449a959dbb552caddfd4ed914dff0e)()const= &::statiskit::glm::VectorPredictor::size;
void  (::statiskit::glm::VectorPredictor::*method_pointer_3b104098b01953909fdd9bee65b43fb3)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::glm::VectorPredictor::set_beta;
class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > >  (::statiskit::glm::VectorPredictor::*method_pointer_9842cd621fa45643b5653484f01bd2e0)()const= &::statiskit::glm::VectorPredictor::copy;

namespace autowig {
}

void wrapper_6356e0489159516b9133d1d1dd07bcde(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::VectorPredictor, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::VectorPredictor >::Type > class_6356e0489159516b9133d1d1dd07bcde(module, "VectorPredictor", "");
    class_6356e0489159516b9133d1d1dd07bcde.def(pybind11::init< struct ::statiskit::MultivariateSampleSpace const & >());
    class_6356e0489159516b9133d1d1dd07bcde.def("__call__", method_pointer_c3265cf8b91853b5be3de8d2e1879f08, "");
    class_6356e0489159516b9133d1d1dd07bcde.def("get_explanatory_space", method_pointer_d457448609cf54998618eecd892d2cf0, pybind11::return_value_policy::reference_internal, "");
    class_6356e0489159516b9133d1d1dd07bcde.def("__len__", method_pointer_1c449a959dbb552caddfd4ed914dff0e, "");
    class_6356e0489159516b9133d1d1dd07bcde.def("set_beta", method_pointer_3b104098b01953909fdd9bee65b43fb3, "");
    class_6356e0489159516b9133d1d1dd07bcde.def("copy", method_pointer_9842cd621fa45643b5653484f01bd2e0, "");

}