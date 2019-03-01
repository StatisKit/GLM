#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::OrdinalLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::OrdinalLink >::CategoricalGeneralizedLinearModel;

            typedef unsigned int  return_type_e9aafff15fb750a99425c8076557ea61;
            virtual return_type_e9aafff15fb750a99425c8076557ea61 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_e9aafff15fb750a99425c8076557ea61, class_type, get_nb_parameters, ); };
            typedef void  return_type_0da25cbfd9395cb8a09d8d4454e12783;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0da25cbfd9395cb8a09d8d4454e12783_0_type;
            virtual return_type_0da25cbfd9395cb8a09d8d4454e12783 update(param_0da25cbfd9395cb8a09d8d4454e12783_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_0da25cbfd9395cb8a09d8d4454e12783, class_type, update, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_a1855f5ee12e5fd1b8ab239616aeb76e;
            virtual return_type_a1855f5ee12e5fd1b8ab239616aeb76e get_explanatory_space() const override { PYBIND11_OVERLOAD(return_type_a1855f5ee12e5fd1b8ab239616aeb76e, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_adf6b47e801b52d0b5366c5975269334;
            typedef struct ::statiskit::MultivariateEvent const & param_adf6b47e801b52d0b5366c5975269334_0_type;
            virtual return_type_adf6b47e801b52d0b5366c5975269334 operator()(param_adf6b47e801b52d0b5366c5975269334_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_adf6b47e801b52d0b5366c5975269334, class_type, operator(), param_0); };
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

void wrapper_69f93235fffa5dcaa8539f5ee5ae2d1c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::OrdinalLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::OrdinalLink > >::Type, class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::OrdinalLink > > class_69f93235fffa5dcaa8539f5ee5ae2d1c(module, "_CategoricalGeneralizedLinearModel_69f93235fffa5dcaa8539f5ee5ae2d1c", "");
    class_69f93235fffa5dcaa8539f5ee5ae2d1c.def(pybind11::init< class ::statiskit::glm::VectorPredictor const &, struct ::statiskit::glm::OrdinalLink const & >());
    class_69f93235fffa5dcaa8539f5ee5ae2d1c.def("_update", &autowig::Publicist::update, "");

}