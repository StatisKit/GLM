#include "_glm.h"

class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedVectorPredictor::*method_pointer_e7406976ecd9527c9e6ee9c506281ab9)()const= &::statiskit::glm::ConstrainedVectorPredictor::get_constraint;
void  (::statiskit::glm::ConstrainedVectorPredictor::*method_pointer_0f3cf473fd1c56b4b33aca9f1bf18799)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &)= &::statiskit::glm::ConstrainedVectorPredictor::set_constraint;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedVectorPredictor::*method_pointer_586b6e0052fd58849ee8f551e52a675a)()const= &::statiskit::glm::ConstrainedVectorPredictor::get_intercept_constraint;
void  (::statiskit::glm::ConstrainedVectorPredictor::*method_pointer_febf3dbfd300546f9ef36267d6aff29d)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &)= &::statiskit::glm::ConstrainedVectorPredictor::set_intercept_constraint;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (*method_pointer_f330143727055738b56fd94fe526819d)(struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const &, ::statiskit::Indices const &)= ::statiskit::glm::ConstrainedVectorPredictor::partial_proportional_constraint;
class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (*method_pointer_eabff1b478015790be8452cf80eaedeb)(class ::statiskit::UnivariateConditionalData const &, ::statiskit::Indices const &)= ::statiskit::glm::ConstrainedVectorPredictor::partial_proportional_constraint;

namespace autowig {
}

void wrapper_92a087b75b8a56fe9960d7d749cd396f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::ConstrainedVectorPredictor, autowig::HolderType< class ::statiskit::glm::ConstrainedVectorPredictor >::Type, class ::statiskit::glm::ProportionalVectorPredictor > class_92a087b75b8a56fe9960d7d749cd396f(module, "ConstrainedVectorPredictor", "");
    class_92a087b75b8a56fe9960d7d749cd396f.def(pybind11::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >());
    class_92a087b75b8a56fe9960d7d749cd396f.def(pybind11::init< struct ::statiskit::MultivariateSampleSpace const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >());
    class_92a087b75b8a56fe9960d7d749cd396f.def(pybind11::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const &, ::statiskit::Indices const & >());
    class_92a087b75b8a56fe9960d7d749cd396f.def(pybind11::init< class ::statiskit::glm::ConstrainedVectorPredictor const & >());
    class_92a087b75b8a56fe9960d7d749cd396f.def("get_constraint", method_pointer_e7406976ecd9527c9e6ee9c506281ab9, pybind11::return_value_policy::copy, "");
    class_92a087b75b8a56fe9960d7d749cd396f.def("set_constraint", method_pointer_0f3cf473fd1c56b4b33aca9f1bf18799, "");
    class_92a087b75b8a56fe9960d7d749cd396f.def("get_intercept_constraint", method_pointer_586b6e0052fd58849ee8f551e52a675a, pybind11::return_value_policy::copy, "");
    class_92a087b75b8a56fe9960d7d749cd396f.def("set_intercept_constraint", method_pointer_febf3dbfd300546f9ef36267d6aff29d, "");
    class_92a087b75b8a56fe9960d7d749cd396f.def_static("partial_proportional_constraint", method_pointer_f330143727055738b56fd94fe526819d, "");
    class_92a087b75b8a56fe9960d7d749cd396f.def_static("partial_proportional_constraint", method_pointer_eabff1b478015790be8452cf80eaedeb, "");

}