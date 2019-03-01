#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::CompleteScalarPredictor::*method_pointer_baa9cdc566bc52d0883b104e9177326e)()const= &::statiskit::glm::CompleteScalarPredictor::get_delta;
void  (::statiskit::glm::CompleteScalarPredictor::*method_pointer_0e27cfaf585f5dbbbdc86face6c02147)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::glm::CompleteScalarPredictor::set_delta;

namespace autowig {
}

void wrapper_6145f198762157b3b1094c9fc4f41e22(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::CompleteScalarPredictor, autowig::HolderType< class ::statiskit::glm::CompleteScalarPredictor >::Type, class ::statiskit::glm::ScalarPredictor > class_6145f198762157b3b1094c9fc4f41e22(module, "CompleteScalarPredictor", "");
    class_6145f198762157b3b1094c9fc4f41e22.def(pybind11::init< struct ::statiskit::MultivariateSampleSpace const & >());
    class_6145f198762157b3b1094c9fc4f41e22.def(pybind11::init< class ::statiskit::glm::CompleteScalarPredictor const & >());
    class_6145f198762157b3b1094c9fc4f41e22.def("get_delta", method_pointer_baa9cdc566bc52d0883b104e9177326e, pybind11::return_value_policy::copy, ":Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, 1, 0, -1, 1 >\n\n");
    class_6145f198762157b3b1094c9fc4f41e22.def("set_delta", method_pointer_0e27cfaf585f5dbbbdc86face6c02147, "");
    class_6145f198762157b3b1094c9fc4f41e22.def_readwrite("alpha", &::statiskit::glm::CompleteScalarPredictor::alpha, "");

}