#include "_glm.h"


namespace autowig {
}

void wrapper_9bb2ab51e67958b5bc367d4af03aca04(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::OrdinalRegression, autowig::HolderType< class ::statiskit::glm::OrdinalRegression >::Type, struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::OrdinalLink > > class_9bb2ab51e67958b5bc367d4af03aca04(module, "OrdinalRegression", "");
    class_9bb2ab51e67958b5bc367d4af03aca04.def(pybind11::init< class ::statiskit::OrdinalSampleSpace const &, class ::statiskit::glm::VectorPredictor const &, struct ::statiskit::glm::OrdinalLink const & >());

}