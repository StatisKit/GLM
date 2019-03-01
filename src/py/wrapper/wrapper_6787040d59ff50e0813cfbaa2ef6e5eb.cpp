#include "_glm.h"


namespace autowig {
}

void wrapper_6787040d59ff50e0813cfbaa2ef6e5eb(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::CompleteDesign, autowig::HolderType< struct ::statiskit::glm::CompleteDesign >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::Design, struct ::statiskit::glm::CompleteDesign, struct ::statiskit::glm::Design > > class_6787040d59ff50e0813cfbaa2ef6e5eb(module, "CompleteDesign", "");
    class_6787040d59ff50e0813cfbaa2ef6e5eb.def(pybind11::init<  >());

}