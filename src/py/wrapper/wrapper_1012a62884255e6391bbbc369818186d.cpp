#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink >::UnivariateDiscreteGeneralizedLinearModel;

            typedef unsigned int  return_type_15cca94c837e5487a4ec0120f05016b4;
            virtual return_type_15cca94c837e5487a4ec0120f05016b4 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_15cca94c837e5487a4ec0120f05016b4, class_type, get_nb_parameters, ); };
            typedef void  return_type_e5f9bf150c5f5c539f67723982ecb53f;
            typedef double const & param_e5f9bf150c5f5c539f67723982ecb53f_0_type;
            virtual return_type_e5f9bf150c5f5c539f67723982ecb53f update(param_e5f9bf150c5f5c539f67723982ecb53f_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_e5f9bf150c5f5c539f67723982ecb53f, class_type, update, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_284e4feaba7b5b5a88a28d146983e886;
            virtual return_type_284e4feaba7b5b5a88a28d146983e886 get_explanatory_space() const override { PYBIND11_OVERLOAD(return_type_284e4feaba7b5b5a88a28d146983e886, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_839427dc13a25d09aaa0fa0c226ca422;
            typedef struct ::statiskit::MultivariateEvent const & param_839427dc13a25d09aaa0fa0c226ca422_0_type;
            virtual return_type_839427dc13a25d09aaa0fa0c226ca422 operator()(param_839427dc13a25d09aaa0fa0c226ca422_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_839427dc13a25d09aaa0fa0c226ca422, class_type, operator(), param_0); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  return_type_2d42bbbaff065a9cb38813f62e9dafda;
            virtual return_type_2d42bbbaff065a9cb38813f62e9dafda copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_2d42bbbaff065a9cb38813f62e9dafda, class_type, copy, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::update;
    };
}


namespace autowig {
}

void wrapper_1012a62884255e6391bbbc369818186d(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > >::Type, class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::PoissonLink > > class_1012a62884255e6391bbbc369818186d(module, "_UnivariateDiscreteGeneralizedLinearModel_1012a62884255e6391bbbc369818186d", "");
    class_1012a62884255e6391bbbc369818186d.def(pybind11::init< class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::PoissonLink const & >());
    class_1012a62884255e6391bbbc369818186d.def("_update", &autowig::Publicist::update, "");

}