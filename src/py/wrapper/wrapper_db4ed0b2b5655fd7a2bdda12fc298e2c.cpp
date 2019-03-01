#include "_glm.h"


namespace autowig {
}

void wrapper_db4ed0b2b5655fd7a2bdda12fc298e2c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::ProportionalDesign, autowig::HolderType< struct ::statiskit::glm::ProportionalDesign >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::Design, struct ::statiskit::glm::ProportionalDesign, struct ::statiskit::glm::Design > > class_db4ed0b2b5655fd7a2bdda12fc298e2c(module, "ProportionalDesign", "");
    class_db4ed0b2b5655fd7a2bdda12fc298e2c.def(pybind11::init<  >());

}