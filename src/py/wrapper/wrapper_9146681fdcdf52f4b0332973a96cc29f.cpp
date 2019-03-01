#include "_glm.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::glm::NegativeBinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_b14deeb6674557c39e804e516e455540)()const= &::statiskit::ActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_9146681fdcdf52f4b0332973a96cc29f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_9146681fdcdf52f4b0332973a96cc29f(module, "_ActiveEstimation_9146681fdcdf52f4b0332973a96cc29f", "");
    class_9146681fdcdf52f4b0332973a96cc29f.def(pybind11::init<  >());
    class_9146681fdcdf52f4b0332973a96cc29f.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_9146681fdcdf52f4b0332973a96cc29f.def(pybind11::init< class ::statiskit::glm::NegativeBinomialRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_9146681fdcdf52f4b0332973a96cc29f.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NegativeBinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_9146681fdcdf52f4b0332973a96cc29f.def("get_data", method_pointer_b14deeb6674557c39e804e516e455540, pybind11::return_value_policy::reference_internal, "");

}