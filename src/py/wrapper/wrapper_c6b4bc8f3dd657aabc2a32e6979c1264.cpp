#include "_glm.h"


namespace autowig {
}

void wrapper_c6b4bc8f3dd657aabc2a32e6979c1264(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::SequentialLink, autowig::HolderType< struct ::statiskit::glm::SequentialLink >::Type, struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > > class_c6b4bc8f3dd657aabc2a32e6979c1264(module, "SequentialLink", "");
    class_c6b4bc8f3dd657aabc2a32e6979c1264.def(pybind11::init<  >());
    class_c6b4bc8f3dd657aabc2a32e6979c1264.def(pybind11::init< struct ::statiskit::glm::SequentialLink const & >());

}