#include "_glm.h"


namespace autowig {
}

void wrapper_3e7e5eaba9225d339f81fff56f0765bc(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::PoissonRegression, autowig::HolderType< class ::statiskit::glm::PoissonRegression >::Type, struct ::statiskit::glm::UnivariateDiscreteGeneralizedLinearModel< struct ::statiskit::glm::PoissonLink > > class_3e7e5eaba9225d339f81fff56f0765bc(module, "PoissonRegression", "");
    class_3e7e5eaba9225d339f81fff56f0765bc.def(pybind11::init< class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::PoissonLink const & >());

}