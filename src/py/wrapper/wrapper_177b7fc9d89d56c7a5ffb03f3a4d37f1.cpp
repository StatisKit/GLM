#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::glm::Design class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::glm::Design::Design;

            typedef class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >  return_type_23d863b31f4659699b1bdce91783ce4d;
            virtual return_type_23d863b31f4659699b1bdce91783ce4d copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_23d863b31f4659699b1bdce91783ce4d, class_type, copy, ); };
            typedef class ::statiskit::glm::VectorPredictor * return_type_ca02a0be11a256df81e12e7e45b9eb90;
            typedef struct ::statiskit::MultivariateSampleSpace const & param_ca02a0be11a256df81e12e7e45b9eb90_0_type;
            typedef ::statiskit::Index const & param_ca02a0be11a256df81e12e7e45b9eb90_1_type;
            virtual return_type_ca02a0be11a256df81e12e7e45b9eb90 build_predictor(param_ca02a0be11a256df81e12e7e45b9eb90_0_type param_0, param_ca02a0be11a256df81e12e7e45b9eb90_1_type param_1) const override { PYBIND11_OVERLOAD_PURE(return_type_ca02a0be11a256df81e12e7e45b9eb90, class_type, build_predictor, param_0, param_1); };
            typedef ::statiskit::Index  return_type_03749ad541855dfdb16bf974f84e692d;
            typedef class ::statiskit::UnivariateConditionalData const & param_03749ad541855dfdb16bf974f84e692d_0_type;
            virtual return_type_03749ad541855dfdb16bf974f84e692d beta_size(param_03749ad541855dfdb16bf974f84e692d_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_03749ad541855dfdb16bf974f84e692d, class_type, beta_size, param_0); };
            typedef class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >  return_type_e4bff1767d4c5024943c6a3e34c37298;
            typedef class ::statiskit::UnivariateConditionalData const & param_e4bff1767d4c5024943c6a3e34c37298_0_type;
            virtual return_type_e4bff1767d4c5024943c6a3e34c37298 Z_init(param_e4bff1767d4c5024943c6a3e34c37298_0_type param_0) const override { PYBIND11_OVERLOAD_PURE(return_type_e4bff1767d4c5024943c6a3e34c37298, class_type, Z_init, param_0); };
    };
}

class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >  (::statiskit::glm::Design::*method_pointer_e4bff1767d4c5024943c6a3e34c37298)(class ::statiskit::UnivariateConditionalData const &)const= &::statiskit::glm::Design::Z_init;
::statiskit::Index  (::statiskit::glm::Design::*method_pointer_03749ad541855dfdb16bf974f84e692d)(class ::statiskit::UnivariateConditionalData const &)const= &::statiskit::glm::Design::beta_size;
class ::statiskit::glm::VectorPredictor * (::statiskit::glm::Design::*method_pointer_ca02a0be11a256df81e12e7e45b9eb90)(struct ::statiskit::MultivariateSampleSpace const &, ::statiskit::Index const &)const= &::statiskit::glm::Design::build_predictor;
class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >  (::statiskit::glm::Design::*method_pointer_23d863b31f4659699b1bdce91783ce4d)()const= &::statiskit::glm::Design::copy;

namespace autowig {
}

void wrapper_177b7fc9d89d56c7a5ffb03f3a4d37f1(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::Design, autowig::Trampoline, autowig::HolderType< struct ::statiskit::glm::Design >::Type > class_177b7fc9d89d56c7a5ffb03f3a4d37f1(module, "Design", "");
    class_177b7fc9d89d56c7a5ffb03f3a4d37f1.def(pybind11::init<  >());
    class_177b7fc9d89d56c7a5ffb03f3a4d37f1.def("z__init", method_pointer_e4bff1767d4c5024943c6a3e34c37298, "");
    class_177b7fc9d89d56c7a5ffb03f3a4d37f1.def("beta_size", method_pointer_03749ad541855dfdb16bf974f84e692d, "");
    class_177b7fc9d89d56c7a5ffb03f3a4d37f1.def("build_predictor", method_pointer_ca02a0be11a256df81e12e7e45b9eb90, pybind11::return_value_policy::reference_internal, "");
    class_177b7fc9d89d56c7a5ffb03f3a4d37f1.def("copy", method_pointer_23d863b31f4659699b1bdce91783ce4d, "");

}