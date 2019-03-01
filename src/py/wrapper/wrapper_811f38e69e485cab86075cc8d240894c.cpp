#include "_glm.h"


namespace autowig {
}

void wrapper_811f38e69e485cab86075cc8d240894c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::CumulativeLink, autowig::HolderType< struct ::statiskit::glm::CumulativeLink >::Type, struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > > class_811f38e69e485cab86075cc8d240894c(module, "CumulativeLink", "");
    class_811f38e69e485cab86075cc8d240894c.def(pybind11::init<  >());
    class_811f38e69e485cab86075cc8d240894c.def(pybind11::init< struct ::statiskit::glm::CumulativeLink const & >());

}