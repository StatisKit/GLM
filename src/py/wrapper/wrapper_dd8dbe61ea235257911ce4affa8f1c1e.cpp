#include "_glm.h"


namespace autowig {
}

void wrapper_dd8dbe61ea235257911ce4affa8f1c1e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::ReferenceLink, autowig::HolderType< struct ::statiskit::glm::ReferenceLink >::Type, struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > > class_dd8dbe61ea235257911ce4affa8f1c1e(module, "ReferenceLink", "");
    class_dd8dbe61ea235257911ce4affa8f1c1e.def(pybind11::init<  >());
    class_dd8dbe61ea235257911ce4affa8f1c1e.def(pybind11::init< struct ::statiskit::glm::ReferenceLink const & >());

}