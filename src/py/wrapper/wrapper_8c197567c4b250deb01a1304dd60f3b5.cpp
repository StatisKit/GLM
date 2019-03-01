#include "_glm.h"


namespace autowig {
}

void wrapper_8c197567c4b250deb01a1304dd60f3b5(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::NegativeBinomialULink, autowig::HolderType< struct ::statiskit::glm::NegativeBinomialULink >::Type, struct ::statiskit::glm::FLink< struct ::statiskit::glm::NegativeBinomialLink > > class_8c197567c4b250deb01a1304dd60f3b5(module, "NegativeBinomialULink", "");
    class_8c197567c4b250deb01a1304dd60f3b5.def(pybind11::init<  >());
    class_8c197567c4b250deb01a1304dd60f3b5.def(pybind11::init< struct ::statiskit::glm::NegativeBinomialULink const & >());

}