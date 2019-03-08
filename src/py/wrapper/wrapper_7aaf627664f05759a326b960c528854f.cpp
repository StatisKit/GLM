#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >::GeneralizedLinearModel;

            typedef void  return_type_5dcd137cdbd853e9a7dac00a71bb7b5c;
            typedef class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_5dcd137cdbd853e9a7dac00a71bb7b5c_0_type;
            virtual return_type_5dcd137cdbd853e9a7dac00a71bb7b5c update(param_5dcd137cdbd853e9a7dac00a71bb7b5c_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_5dcd137cdbd853e9a7dac00a71bb7b5c, class_type, update, param_0); };
            typedef struct ::statiskit::MultivariateSampleSpace const * return_type_9962634c32dd5aeab0ace57d0ae0ae00;
            virtual return_type_9962634c32dd5aeab0ace57d0ae0ae00 get_explanatory_space() const override { PYBIND11_OVERLOAD(return_type_9962634c32dd5aeab0ace57d0ae0ae00, class_type, get_explanatory_space, ); };
            typedef struct ::statiskit::UnivariateDistribution const * return_type_e93ebfb702eb5779bafe91362828e2ea;
            typedef struct ::statiskit::MultivariateEvent const & param_e93ebfb702eb5779bafe91362828e2ea_0_type;
            virtual return_type_e93ebfb702eb5779bafe91362828e2ea operator()(param_e93ebfb702eb5779bafe91362828e2ea_0_type param_0) const override { PYBIND11_OVERLOAD(return_type_e93ebfb702eb5779bafe91362828e2ea, class_type, operator(), param_0); };
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

class ::statiskit::glm::VectorPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::NominalLink >::*method_pointer_6ab94b43a8625385bad4e5685790ea61)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >::get_predictor;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::NominalLink >::*method_pointer_35e26f71c78d51eaa36da790376c4991)(class ::statiskit::glm::VectorPredictor const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >::set_predictor;
struct ::statiskit::glm::NominalLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::NominalLink >::*method_pointer_e738506a70365dde84e3e426fd2fa2c9)()const= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >::get_link;
void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::NominalLink >::*method_pointer_e938f210b2b35ba8b9235f90dbb5706d)(struct ::statiskit::glm::NominalLink const &)= &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >::set_link;

namespace autowig {
}

void wrapper_7aaf627664f05759a326b960c528854f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink >, autowig::Trampoline, autowig::HolderType< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistribution > class_7aaf627664f05759a326b960c528854f(module, "_GeneralizedLinearModel_7aaf627664f05759a326b960c528854f", "");
    class_7aaf627664f05759a326b960c528854f.def(pybind11::init< class ::statiskit::glm::VectorPredictor const &, struct ::statiskit::glm::NominalLink const & >());
    class_7aaf627664f05759a326b960c528854f.def("get_predictor", method_pointer_6ab94b43a8625385bad4e5685790ea61, pybind11::return_value_policy::reference_internal, "");
    class_7aaf627664f05759a326b960c528854f.def("set_predictor", method_pointer_35e26f71c78d51eaa36da790376c4991, "");
    class_7aaf627664f05759a326b960c528854f.def("get_link", method_pointer_e738506a70365dde84e3e426fd2fa2c9, pybind11::return_value_policy::reference_internal, "");
    class_7aaf627664f05759a326b960c528854f.def("set_link", method_pointer_e938f210b2b35ba8b9235f90dbb5706d, "");
    class_7aaf627664f05759a326b960c528854f.def("_update", static_cast< void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::glm::NominalLink >::*) (class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const >(&autowig::Publicist::update), "");

}