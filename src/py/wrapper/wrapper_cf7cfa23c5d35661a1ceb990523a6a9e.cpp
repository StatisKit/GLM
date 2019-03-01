#include "_glm.h"

class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedDesign::*method_pointer_4a42cd585c675e06b9cce33f4a3fe1cb)()const= &::statiskit::glm::ConstrainedDesign::get_intercept_constraint;
void  (::statiskit::glm::ConstrainedDesign::*method_pointer_25e6a0e46ec550ffb00c22cb6dec576a)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &)= &::statiskit::glm::ConstrainedDesign::set_intercept_constraint;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const (::statiskit::glm::ConstrainedDesign::*method_pointer_99d8803cf542566b90a6c59466007993)()const= &::statiskit::glm::ConstrainedDesign::get_slope_constraint;
void  (::statiskit::glm::ConstrainedDesign::*method_pointer_2a678374330d556e81a2078561bb05b9)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &)= &::statiskit::glm::ConstrainedDesign::set_slope_constraint;

namespace autowig {
}

void wrapper_cf7cfa23c5d35661a1ceb990523a6a9e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ConstrainedDesign, autowig::HolderType< class ::statiskit::glm::ConstrainedDesign >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::Design, class ::statiskit::glm::ConstrainedDesign, struct ::statiskit::glm::Design > > class_cf7cfa23c5d35661a1ceb990523a6a9e(module, "ConstrainedDesign", "");
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def(pybind11::init<  >());
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def(pybind11::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >());
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def(pybind11::init< class ::statiskit::glm::ConstrainedDesign const & >());
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def("get_intercept_constraint", method_pointer_4a42cd585c675e06b9cce33f4a3fe1cb, pybind11::return_value_policy::copy, "");
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def("set_intercept_constraint", method_pointer_25e6a0e46ec550ffb00c22cb6dec576a, "");
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def("get_slope_constraint", method_pointer_99d8803cf542566b90a6c59466007993, "");
    class_cf7cfa23c5d35661a1ceb990523a6a9e.def("set_slope_constraint", method_pointer_2a678374330d556e81a2078561bb05b9, "");

}