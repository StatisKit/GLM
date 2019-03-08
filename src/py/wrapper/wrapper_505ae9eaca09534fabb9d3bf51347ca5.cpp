#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >::GeneralizedLinearModel;

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
            typedef unsigned int  return_type_a19605344e725c65ab302819d1663dbe;
            virtual return_type_a19605344e725c65ab302819d1663dbe get_nb_parameters() const override { PYBIND11_OVERLOAD_PURE(return_type_a19605344e725c65ab302819d1663dbe, class_type, get_nb_parameters, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::update;
    };
}

class ::statiskit::glm::ScalarPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::BinomialLink >::*method_pointer_75a5cbf4e55553e1ac5d0a9b4f21530e)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >::get_predictor;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::BinomialLink >::*method_pointer_0869e82f2c4a5771872c47ed07b2fb03)(class ::statiskit::glm::ScalarPredictor const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >::set_predictor;
struct ::statiskit::glm::BinomialLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::BinomialLink >::*method_pointer_c684ae5ce1b25f099e40cb2b009774af)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >::get_link;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::BinomialLink >::*method_pointer_358f458c97d3521881adaa28f6ee1b80)(struct ::statiskit::glm::BinomialLink const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >::set_link;

namespace autowig {
}

void wrapper_505ae9eaca09534fabb9d3bf51347ca5(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink >, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::glm::BinomialLink > >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistribution > class_505ae9eaca09534fabb9d3bf51347ca5(module, "_GeneralizedLinearModel_505ae9eaca09534fabb9d3bf51347ca5", "");
    class_505ae9eaca09534fabb9d3bf51347ca5.def(pybind11::init< class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::BinomialLink const & >());
    class_505ae9eaca09534fabb9d3bf51347ca5.def("get_predictor", method_pointer_75a5cbf4e55553e1ac5d0a9b4f21530e, pybind11::return_value_policy::reference_internal, "");
    class_505ae9eaca09534fabb9d3bf51347ca5.def("set_predictor", method_pointer_0869e82f2c4a5771872c47ed07b2fb03, "");
    class_505ae9eaca09534fabb9d3bf51347ca5.def("get_link", method_pointer_c684ae5ce1b25f099e40cb2b009774af, pybind11::return_value_policy::reference_internal, "");
    class_505ae9eaca09534fabb9d3bf51347ca5.def("set_link", method_pointer_358f458c97d3521881adaa28f6ee1b80, "");
    class_505ae9eaca09534fabb9d3bf51347ca5.def("_update", static_cast< void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::glm::BinomialLink >::*) (double const &) const >(&autowig::Publicist::update), "");

}