#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink >::FLink;

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

struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::NominalLink >::*method_pointer_2b28e8b4fcad5baeb40e9bace151aa1e)()= &::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink >::get_distribution;
void  (::statiskit::glm::FLink< ::statiskit::glm::NominalLink >::*method_pointer_8da8a94c47d35abb9e32cc184e03791e)(struct ::statiskit::ContinuousUnivariateDistribution const &)= &::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink >::set_distribution;

namespace autowig {
}

void wrapper_e03a97af9974527b92c33bac06874897(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > >::Type, struct ::statiskit::glm::NominalLink > class_e03a97af9974527b92c33bac06874897(module, "_FLink_e03a97af9974527b92c33bac06874897", "");
    class_e03a97af9974527b92c33bac06874897.def(pybind11::init<  >());
    class_e03a97af9974527b92c33bac06874897.def("get_distribution", method_pointer_2b28e8b4fcad5baeb40e9bace151aa1e, pybind11::return_value_policy::reference_internal, "");
    class_e03a97af9974527b92c33bac06874897.def("set_distribution", method_pointer_8da8a94c47d35abb9e32cc184e03791e, "");

}