#include "_glm.h"


namespace autowig {
}

void wrapper_11c0cbee7883564b9fa18eeb7735cbc1(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::NegativeBinomialVLink, autowig::HolderType< struct ::statiskit::glm::NegativeBinomialVLink >::Type, struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > > class_11c0cbee7883564b9fa18eeb7735cbc1(module, "NegativeBinomialVLink", "");
    class_11c0cbee7883564b9fa18eeb7735cbc1.def(pybind11::init<  >());
    class_11c0cbee7883564b9fa18eeb7735cbc1.def(pybind11::init< struct ::statiskit::glm::NegativeBinomialVLink const & >());

}