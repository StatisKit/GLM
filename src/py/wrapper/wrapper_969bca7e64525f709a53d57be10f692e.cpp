#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::BinaryLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::BinaryLink >::CategoricalGeneralizedLinearModel;

            typedef unsigned int  return_type_10c6de82535a5119b835ec8da3caa411;
            virtual return_type_10c6de82535a5119b835ec8da3caa411 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_10c6de82535a5119b835ec8da3caa411, class_type, get_nb_parameters, ); };
            typedef void  return_type_5d99d8aa0b295d58a36918f14308a7e7;
            typedef double const & param_5d99d8aa0b295d58a36918f14308a7e7_0_type;
            virtual return_type_5d99d8aa0b295d58a36918f14308a7e7 update(param_5d99d8aa0b295d58a36918f14308a7e7_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_5d99d8aa0b295d58a36918f14308a7e7, class_type, update, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_d406d2daa7a55230829ab0e6bc8a09ed;
            virtual return_type_d406d2daa7a55230829ab0e6bc8a09ed get_explanatory_space() const override { PYBIND11_OVERLOAD(return_type_d406d2daa7a55230829ab0e6bc8a09ed, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_2f3e3f43733454e68455f24ea64f4195;
            typedef struct ::statiskit::MultivariateEvent const & param_2f3e3f43733454e68455f24ea64f4195_0_type;
            virtual return_type_2f3e3f43733454e68455f24ea64f4195 operator()(param_2f3e3f43733454e68455f24ea64f4195_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_2f3e3f43733454e68455f24ea64f4195, class_type, operator(), param_0); };
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

void wrapper_969bca7e64525f709a53d57be10f692e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::BinaryLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::BinaryLink > >::Type, class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::BinaryLink > > class_969bca7e64525f709a53d57be10f692e(module, "_CategoricalGeneralizedLinearModel_969bca7e64525f709a53d57be10f692e", "");
    class_969bca7e64525f709a53d57be10f692e.def(pybind11::init< class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::BinaryLink const & >());
    class_969bca7e64525f709a53d57be10f692e.def("_update", static_cast< void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::BinaryLink >::*) (double const &) const >(&autowig::Publicist::update), "");

}