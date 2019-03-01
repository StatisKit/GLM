#include "_glm.h"


namespace autowig {
}

void wrapper_d12ffc468a2450d2907dd045664c2cba(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::glm::NominalCanonicalLink, autowig::HolderType< struct ::statiskit::glm::NominalCanonicalLink >::Type, struct ::statiskit::glm::NominalLink > class_d12ffc468a2450d2907dd045664c2cba(module, "NominalCanonicalLink", "");
    class_d12ffc468a2450d2907dd045664c2cba.def(pybind11::init<  >());

}