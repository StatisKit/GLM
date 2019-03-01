#include "_glm.h"


namespace autowig {
}

void wrapper_d33bc5daf9125a05b32fe7259dd07c2f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::PoissonVLink, autowig::HolderType< struct ::statiskit::glm::PoissonVLink >::Type, struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > > class_d33bc5daf9125a05b32fe7259dd07c2f(module, "PoissonVLink", "");
    class_d33bc5daf9125a05b32fe7259dd07c2f.def(pybind11::init<  >());
    class_d33bc5daf9125a05b32fe7259dd07c2f.def(pybind11::init< struct ::statiskit::glm::PoissonVLink const & >());

}