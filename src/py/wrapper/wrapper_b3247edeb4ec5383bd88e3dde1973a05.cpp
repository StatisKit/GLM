#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::BinomialLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::BinomialLink >::UnivariateDiscreteGeneralizedLinearModel;

            typedef unsigned int  return_type_1c0b106ed283500f92531061c1cdf5e5;
            virtual return_type_1c0b106ed283500f92531061c1cdf5e5 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_1c0b106ed283500f92531061c1cdf5e5, class_type, get_nb_parameters, ); };
            typedef void  return_type_c104bbe6aff753caa831750fcdb6ff2b;
            typedef double const & param_c104bbe6aff753caa831750fcdb6ff2b_0_type;
            virtual return_type_c104bbe6aff753caa831750fcdb6ff2b update(param_c104bbe6aff753caa831750fcdb6ff2b_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_c104bbe6aff753caa831750fcdb6ff2b, class_type, update, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_6390d151b53e56ac96de5dff89c2b154;
            virtual return_type_6390d151b53e56ac96de5dff89c2b154 get_explanatory_space() const override { PYBIND11_OVERLOAD(return_type_6390d151b53e56ac96de5dff89c2b154, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_e3535f85cff2572097e8455248c01774;
            typedef struct ::statiskit::MultivariateEvent const & param_e3535f85cff2572097e8455248c01774_0_type;
            virtual return_type_e3535f85cff2572097e8455248c01774 operator()(param_e3535f85cff2572097e8455248c01774_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e3535f85cff2572097e8455248c01774, class_type, operator(), param_0); };
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

void wrapper_b3247edeb4ec5383bd88e3dde1973a05(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::BinomialLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::BinomialLink > >::Type, class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > > class_b3247edeb4ec5383bd88e3dde1973a05(module, "_UnivariateDiscreteGeneralizedLinearModel_b3247edeb4ec5383bd88e3dde1973a05", "");
    class_b3247edeb4ec5383bd88e3dde1973a05.def(pybind11::init< class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::BinomialLink const & >());
    class_b3247edeb4ec5383bd88e3dde1973a05.def("_update", &autowig::Publicist::update, "");

}