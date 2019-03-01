#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::ScalarPredictor class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::ScalarPredictor::ScalarPredictor;

            typedef class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > >  return_type_0f660bb3ff275656a2cbd86751fe4a16;
            virtual return_type_0f660bb3ff275656a2cbd86751fe4a16 copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_0f660bb3ff275656a2cbd86751fe4a16, class_type, copy, ); };
            typedef void  return_type_e195a23dc69c5ffeb4668af9d5027215;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_e195a23dc69c5ffeb4668af9d5027215_0_type;
            virtual return_type_e195a23dc69c5ffeb4668af9d5027215 set_beta(param_e195a23dc69c5ffeb4668af9d5027215_0_type param_0) override { PYBIND11_OVERLOAD_PURE(return_type_e195a23dc69c5ffeb4668af9d5027215, class_type, set_beta, param_0); };
            typedef ::std::size_t  return_type_7f0b50af37a55104a0d518733c75a7d6;
            virtual return_type_7f0b50af37a55104a0d518733c75a7d6 size() const override { PYBIND11_OVERLOAD_PURE(return_type_7f0b50af37a55104a0d518733c75a7d6, class_type, size, ); };
            typedef double  return_type_ddc10ab20902504cbf4b89f77023cf3f;
            typedef struct ::statiskit::MultivariateEvent const & param_ddc10ab20902504cbf4b89f77023cf3f_0_type;
            virtual return_type_ddc10ab20902504cbf4b89f77023cf3f operator()(param_ddc10ab20902504cbf4b89f77023cf3f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_ddc10ab20902504cbf4b89f77023cf3f, class_type, operator(), param_0); };
    };
}

double  (::statiskit::glm::ScalarPredictor::*method_pointer_ddc10ab20902504cbf4b89f77023cf3f)(struct ::statiskit::MultivariateEvent const &)const= &::statiskit::glm::ScalarPredictor::operator();
struct ::statiskit::MultivariateSampleSpace const * (::statiskit::glm::ScalarPredictor::*method_pointer_73d58e5e98e456229ea416694ebb0309)()const= &::statiskit::glm::ScalarPredictor::get_explanatory_space;
::std::size_t  (::statiskit::glm::ScalarPredictor::*method_pointer_7f0b50af37a55104a0d518733c75a7d6)()const= &::statiskit::glm::ScalarPredictor::size;
void  (::statiskit::glm::ScalarPredictor::*method_pointer_e195a23dc69c5ffeb4668af9d5027215)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::glm::ScalarPredictor::set_beta;
class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > >  (::statiskit::glm::ScalarPredictor::*method_pointer_0f660bb3ff275656a2cbd86751fe4a16)()const= &::statiskit::glm::ScalarPredictor::copy;

namespace autowig {
}

void wrapper_e8cbadf51f7b5cff89ca0e4c90969c88(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ScalarPredictor, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::ScalarPredictor >::Type > class_e8cbadf51f7b5cff89ca0e4c90969c88(module, "ScalarPredictor", "");
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def(pybind11::init< struct ::statiskit::MultivariateSampleSpace const & >());
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("__call__", method_pointer_ddc10ab20902504cbf4b89f77023cf3f, ":Parameter:\n    `event` (:cpp:class:`::statiskit::MultivariateEvent`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("get_explanatory_space", method_pointer_73d58e5e98e456229ea416694ebb0309, pybind11::return_value_policy::reference_internal, ":Return Type:\n    :cpp:class:`::statiskit::MultivariateSampleSpace`\n\n");
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("__len__", method_pointer_7f0b50af37a55104a0d518733c75a7d6, ":Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("set_beta", method_pointer_e195a23dc69c5ffeb4668af9d5027215, ":Parameter:\n    `beta` (:cpp:any:`::Eigen::Matrix<` double, -1, 1, 0, -1, 1 >) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("copy", method_pointer_0f660bb3ff275656a2cbd86751fe4a16, "");

}