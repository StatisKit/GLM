#include "_glm.h"

double  (::statiskit::glm::NegativeBinomialRegression::*method_pointer_89049a42aa075c8fb9247239f614a20a)()const= &::statiskit::glm::NegativeBinomialRegression::get_kappa;
void  (::statiskit::glm::NegativeBinomialRegression::*method_pointer_42ab6e09c93d5c248f97eab9e5276a4d)(double const &)= &::statiskit::glm::NegativeBinomialRegression::set_kappa;

namespace autowig {
}

void wrapper_45b2ac2570a857b5a19c79be5c650b64(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::NegativeBinomialRegression, autowig::HolderType< class ::statiskit::glm::NegativeBinomialRegression >::Type, struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::NegativeBinomialLink > > class_45b2ac2570a857b5a19c79be5c650b64(module, "NegativeBinomialRegression", "");
    class_45b2ac2570a857b5a19c79be5c650b64.def(pybind11::init< double const &, class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::NegativeBinomialLink const & >());
    class_45b2ac2570a857b5a19c79be5c650b64.def("get_kappa", method_pointer_89049a42aa075c8fb9247239f614a20a, "");
    class_45b2ac2570a857b5a19c79be5c650b64.def("set_kappa", method_pointer_42ab6e09c93d5c248f97eab9e5276a4d, "");

}