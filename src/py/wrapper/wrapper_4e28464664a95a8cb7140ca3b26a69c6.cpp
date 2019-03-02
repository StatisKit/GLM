#include "_glm.h"


namespace autowig {
}

void wrapper_4e28464664a95a8cb7140ca3b26a69c6(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink >, autowig::HolderType< struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink > >::Type, struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > > class_4e28464664a95a8cb7140ca3b26a69c6(module, "_BinFLink_4e28464664a95a8cb7140ca3b26a69c6", "");
    class_4e28464664a95a8cb7140ca3b26a69c6.def(pybind11::init<  >());
    class_4e28464664a95a8cb7140ca3b26a69c6.def(pybind11::init< struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink > const & >());

}