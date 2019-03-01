#include "_glm.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::glm::NominalRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_834a1b79643a5127bcc4e0c978cd776e)()const= &::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_cca053704b1954389d77198ecac1cc90(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_cca053704b1954389d77198ecac1cc90(module, "_ActiveEstimation_cca053704b1954389d77198ecac1cc90", "");
    class_cca053704b1954389d77198ecac1cc90.def(pybind11::init<  >());
    class_cca053704b1954389d77198ecac1cc90.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_cca053704b1954389d77198ecac1cc90.def(pybind11::init< class ::statiskit::glm::NominalRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_cca053704b1954389d77198ecac1cc90.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_cca053704b1954389d77198ecac1cc90.def("get_data", method_pointer_834a1b79643a5127bcc4e0c978cd776e, pybind11::return_value_policy::reference_internal, "");

}