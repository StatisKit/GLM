#include "_glm.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_217e5a91003150f99a23b9226ce5cdd4)()const= &::statiskit::ActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_751cf71d0988517fb4a1ae9331e931ea(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > class_751cf71d0988517fb4a1ae9331e931ea(module, "_ActiveEstimation_751cf71d0988517fb4a1ae9331e931ea", "");
    class_751cf71d0988517fb4a1ae9331e931ea.def(pybind11::init<  >());
    class_751cf71d0988517fb4a1ae9331e931ea.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_751cf71d0988517fb4a1ae9331e931ea.def(pybind11::init< class ::statiskit::glm::PoissonRegression const *, class ::statiskit::UnivariateConditionalData const * >());
    class_751cf71d0988517fb4a1ae9331e931ea.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >());
    class_751cf71d0988517fb4a1ae9331e931ea.def("get_data", method_pointer_217e5a91003150f99a23b9226ce5cdd4, pybind11::return_value_policy::reference_internal, "");

}