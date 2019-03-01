#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::NominalLink > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::NominalLink >::CategoricalGeneralizedLinearModel;

            typedef unsigned int  return_type_b4c9e4239f7658ca8493b8fe02339e74;
            virtual return_type_b4c9e4239f7658ca8493b8fe02339e74 get_nb_parameters() const override { PYBIND11_OVERLOAD(return_type_b4c9e4239f7658ca8493b8fe02339e74, class_type, get_nb_parameters, ); };
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
    };

    class Publicist : public class_type
    {
        public:
            using class_type::update;
    };
}


namespace autowig {
}

void wrapper_5445438df49f5bd99dc749aa79d564e9(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::NominalLink >, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::NominalLink > >::Type, class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::glm::NominalLink > > class_5445438df49f5bd99dc749aa79d564e9(module, "_CategoricalGeneralizedLinearModel_5445438df49f5bd99dc749aa79d564e9", "");
    class_5445438df49f5bd99dc749aa79d564e9.def(pybind11::init< class ::statiskit::glm::VectorPredictor const &, struct ::statiskit::glm::NominalLink const & >());
    class_5445438df49f5bd99dc749aa79d564e9.def("_update", &autowig::Publicist::update, "");

}