#include "_glm.h"

unsigned int  (::statiskit::glm::BinomialRegression::*method_pointer_074ce71787b252eca25a84eac895fbc0)()const= &::statiskit::glm::BinomialRegression::get_kappa;
void  (::statiskit::glm::BinomialRegression::*method_pointer_ed9f1891e03f5f4e8bab58c69215323f)(unsigned int const &)= &::statiskit::glm::BinomialRegression::set_kappa;

namespace autowig {
}

void wrapper_12cba5f08bca53ebb5d5e4782aeedbee(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::BinomialRegression, autowig::HolderType< class ::statiskit::glm::BinomialRegression >::Type, struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::BinomialLink > > class_12cba5f08bca53ebb5d5e4782aeedbee(module, "BinomialRegression", "");
    class_12cba5f08bca53ebb5d5e4782aeedbee.def(pybind11::init< unsigned int const &, class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::BinomialLink const & >());
    class_12cba5f08bca53ebb5d5e4782aeedbee.def("get_kappa", method_pointer_074ce71787b252eca25a84eac895fbc0, "");
    class_12cba5f08bca53ebb5d5e4782aeedbee.def("set_kappa", method_pointer_ed9f1891e03f5f4e8bab58c69215323f, "");

}