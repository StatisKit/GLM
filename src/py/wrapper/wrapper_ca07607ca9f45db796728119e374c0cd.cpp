#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::NominalLink class_type;

    class Trampoline : public class_type
    {
        public:

            typedef class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > >  return_type_4400259f163f59f9bae84b768d73276c;
            virtual return_type_4400259f163f59f9bae84b768d73276c copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_4400259f163f59f9bae84b768d73276c, class_type, copy, ); };
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

class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > >  (::statiskit::glm::NominalLink::*method_pointer_4400259f163f59f9bae84b768d73276c)()const= &::statiskit::glm::NominalLink::copy;

namespace autowig {
}

void wrapper_ca07607ca9f45db796728119e374c0cd(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::NominalLink, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::NominalLink >::Type, struct ::statiskit::glm::VectorLink > class_ca07607ca9f45db796728119e374c0cd(module, "NominalLink", "");
    class_ca07607ca9f45db796728119e374c0cd.def("copy", method_pointer_4400259f163f59f9bae84b768d73276c, "");

}