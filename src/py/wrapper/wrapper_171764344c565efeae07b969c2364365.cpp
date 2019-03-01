#include "_glm.h"


namespace autowig {
}

void wrapper_171764344c565efeae07b969c2364365(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::AdjacentLink, autowig::HolderType< struct ::statiskit::glm::AdjacentLink >::Type, struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > > class_171764344c565efeae07b969c2364365(module, "AdjacentLink", "");
    class_171764344c565efeae07b969c2364365.def(pybind11::init<  >());
    class_171764344c565efeae07b969c2364365.def(pybind11::init< struct ::statiskit::glm::AdjacentLink const & >());

}