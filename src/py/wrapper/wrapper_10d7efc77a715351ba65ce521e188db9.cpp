#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::CompleteVectorPredictor::*method_pointer_d00d96d9a66b51f5a23da884f81521f3)()const= &::statiskit::glm::CompleteVectorPredictor::get_alpha;
void  (::statiskit::glm::CompleteVectorPredictor::*method_pointer_500b818cf2845da1b876ce668465f93b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::glm::CompleteVectorPredictor::set_alpha;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::CompleteVectorPredictor::*method_pointer_7365fdf694795151a65906255392d595)()const= &::statiskit::glm::CompleteVectorPredictor::get_delta;
void  (::statiskit::glm::CompleteVectorPredictor::*method_pointer_b2732aa6ebdd5067bcb0ea88e444f517)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &)= &::statiskit::glm::CompleteVectorPredictor::set_delta;

namespace autowig {
}

void wrapper_10d7efc77a715351ba65ce521e188db9(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::CompleteVectorPredictor, autowig::HolderType< class ::statiskit::glm::CompleteVectorPredictor >::Type, class ::statiskit::glm::VectorPredictor > class_10d7efc77a715351ba65ce521e188db9(module, "CompleteVectorPredictor", "");
    class_10d7efc77a715351ba65ce521e188db9.def(pybind11::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const & >());
    class_10d7efc77a715351ba65ce521e188db9.def(pybind11::init< class ::statiskit::glm::CompleteVectorPredictor const & >());
    class_10d7efc77a715351ba65ce521e188db9.def("get_alpha", method_pointer_d00d96d9a66b51f5a23da884f81521f3, pybind11::return_value_policy::copy, "");
    class_10d7efc77a715351ba65ce521e188db9.def("set_alpha", method_pointer_500b818cf2845da1b876ce668465f93b, "");
    class_10d7efc77a715351ba65ce521e188db9.def("get_delta", method_pointer_7365fdf694795151a65906255392d595, pybind11::return_value_policy::copy, "");
    class_10d7efc77a715351ba65ce521e188db9.def("set_delta", method_pointer_b2732aa6ebdd5067bcb0ea88e444f517, "");

}