#include "_glm.h"


namespace autowig {
}

void wrapper_e46ba5e82e1153f29b64bbceaf601983(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinomialLink >, autowig::HolderType< struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinomialLink > >::Type, struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > > class_e46ba5e82e1153f29b64bbceaf601983(module, "_BinFLink_e46ba5e82e1153f29b64bbceaf601983", "");
    class_e46ba5e82e1153f29b64bbceaf601983.def(pybind11::init<  >());
    class_e46ba5e82e1153f29b64bbceaf601983.def(pybind11::init< struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinomialLink > const & >());

}