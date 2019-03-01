#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::ProportionalVectorPredictor::*method_pointer_c59726ba34845d2eb19a7926f019d92c)()const= &::statiskit::glm::ProportionalVectorPredictor::get_alpha;
void  (::statiskit::glm::ProportionalVectorPredictor::*method_pointer_ca85b94ec46256e1bb341ad0c8d4f3da)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::glm::ProportionalVectorPredictor::set_alpha;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::ProportionalVectorPredictor::*method_pointer_6b3e8f8e162c5a8aa23f3d84d1122cfa)()const= &::statiskit::glm::ProportionalVectorPredictor::get_delta;
void  (::statiskit::glm::ProportionalVectorPredictor::*method_pointer_e77ccd01afbb5ff89d8d94b3eff5fb60)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::glm::ProportionalVectorPredictor::set_delta;

namespace autowig {
}

void wrapper_d3083b0db1ef5d9aa5755409bd2393c8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ProportionalVectorPredictor, autowig::HolderType< class ::statiskit::glm::ProportionalVectorPredictor >::Type, class ::statiskit::glm::VectorPredictor > class_d3083b0db1ef5d9aa5755409bd2393c8(module, "ProportionalVectorPredictor", "");
    class_d3083b0db1ef5d9aa5755409bd2393c8.def(pybind11::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const & >());
    class_d3083b0db1ef5d9aa5755409bd2393c8.def(pybind11::init< class ::statiskit::glm::ProportionalVectorPredictor const & >());
    class_d3083b0db1ef5d9aa5755409bd2393c8.def("get_alpha", method_pointer_c59726ba34845d2eb19a7926f019d92c, pybind11::return_value_policy::copy, "");
    class_d3083b0db1ef5d9aa5755409bd2393c8.def("set_alpha", method_pointer_ca85b94ec46256e1bb341ad0c8d4f3da, "");
    class_d3083b0db1ef5d9aa5755409bd2393c8.def("get_delta", method_pointer_6b3e8f8e162c5a8aa23f3d84d1122cfa, pybind11::return_value_policy::copy, "");
    class_d3083b0db1ef5d9aa5755409bd2393c8.def("set_delta", method_pointer_e77ccd01afbb5ff89d8d94b3eff5fb60, "");

}