#include "_glm.h"

class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedScalarPredictor::*method_pointer_b7b1f748887a5ba6b7dc1f1417b6b586)()const= &::statiskit::glm::ConstrainedScalarPredictor::get_constraint;
void  (::statiskit::glm::ConstrainedScalarPredictor::*method_pointer_0597dbb4a13a5b93bb3ad2fe299d3e8e)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &)= &::statiskit::glm::ConstrainedScalarPredictor::set_constraint;

namespace autowig {
}

void wrapper_c7a592240fab5dabb104643260a05ca1(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ConstrainedScalarPredictor, autowig::HolderType< class ::statiskit::glm::ConstrainedScalarPredictor >::Type, class ::statiskit::glm::CompleteScalarPredictor > class_c7a592240fab5dabb104643260a05ca1(module, "ConstrainedScalarPredictor", "");
    class_c7a592240fab5dabb104643260a05ca1.def(pybind11::init< struct ::statiskit::MultivariateSampleSpace const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >());
    class_c7a592240fab5dabb104643260a05ca1.def(pybind11::init< class ::statiskit::glm::ConstrainedScalarPredictor const & >());
    class_c7a592240fab5dabb104643260a05ca1.def("get_constraint", method_pointer_b7b1f748887a5ba6b7dc1f1417b6b586, pybind11::return_value_policy::copy, "");
    class_c7a592240fab5dabb104643260a05ca1.def("set_constraint", method_pointer_0597dbb4a13a5b93bb3ad2fe299d3e8e, "");

}