#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::VectorLink class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  return_type_c10ed2d0c14d51018e3cf802f5175b9b;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_c10ed2d0c14d51018e3cf802f5175b9b_0_type;
            virtual return_type_c10ed2d0c14d51018e3cf802f5175b9b inverse_derivative(param_c10ed2d0c14d51018e3cf802f5175b9b_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_c10ed2d0c14d51018e3cf802f5175b9b, class_type, inverse_derivative, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_65b070b2b6155aa0a064200d19762fb8;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_65b070b2b6155aa0a064200d19762fb8_0_type;
            virtual return_type_65b070b2b6155aa0a064200d19762fb8 inverse(param_65b070b2b6155aa0a064200d19762fb8_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_65b070b2b6155aa0a064200d19762fb8, class_type, inverse, param_0); };
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  return_type_4d2059b15a575948ab0d799bda8dfbaf;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_4d2059b15a575948ab0d799bda8dfbaf_0_type;
            virtual return_type_4d2059b15a575948ab0d799bda8dfbaf evaluate(param_4d2059b15a575948ab0d799bda8dfbaf_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_4d2059b15a575948ab0d799bda8dfbaf, class_type, evaluate, param_0); };
    };
}

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::VectorLink::*method_pointer_4d2059b15a575948ab0d799bda8dfbaf)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)const= &::statiskit::glm::VectorLink::evaluate;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::VectorLink::*method_pointer_65b070b2b6155aa0a064200d19762fb8)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)const= &::statiskit::glm::VectorLink::inverse;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::glm::VectorLink::*method_pointer_c10ed2d0c14d51018e3cf802f5175b9b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)const= &::statiskit::glm::VectorLink::inverse_derivative;
class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::VectorLink::*method_pointer_2bb06310488e5cd9b983086e8db2cdca)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)const= &::statiskit::glm::VectorLink::in_open_corner;

namespace autowig {
}

void wrapper_8f19658a39a253a2b76a0477182d7754(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::VectorLink, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::VectorLink >::Type > class_8f19658a39a253a2b76a0477182d7754(module, "VectorLink", "");
    class_8f19658a39a253a2b76a0477182d7754.def("evaluate", method_pointer_4d2059b15a575948ab0d799bda8dfbaf, "");
    class_8f19658a39a253a2b76a0477182d7754.def("inverse", method_pointer_65b070b2b6155aa0a064200d19762fb8, "");
    class_8f19658a39a253a2b76a0477182d7754.def("inverse_derivative", method_pointer_c10ed2d0c14d51018e3cf802f5175b9b, "");
    class_8f19658a39a253a2b76a0477182d7754.def("in_open_corner", method_pointer_2bb06310488e5cd9b983086e8db2cdca, "");
    class_8f19658a39a253a2b76a0477182d7754.def_readwrite("epsilon_0", &::statiskit::glm::VectorLink::_epsilon_0, "");
    class_8f19658a39a253a2b76a0477182d7754.def_readwrite("epsilon_1", &::statiskit::glm::VectorLink::_epsilon_1, "");

}