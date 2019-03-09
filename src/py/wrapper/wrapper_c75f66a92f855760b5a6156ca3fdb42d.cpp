#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Optimization;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_e0fab2db391a546591b690a17ebe80ff;
            virtual return_type_e0fab2db391a546591b690a17ebe80ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e0fab2db391a546591b690a17ebe80ff, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_bdacedd56eba5861a3003ac87a422cf6;
            typedef ::statiskit::UnivariateConditionalDistributionEstimation::data_type const & param_bdacedd56eba5861a3003ac87a422cf6_0_type;
            typedef bool const & param_bdacedd56eba5861a3003ac87a422cf6_1_type;
            virtual return_type_bdacedd56eba5861a3003ac87a422cf6 operator()(param_bdacedd56eba5861a3003ac87a422cf6_0_type param_0, param_bdacedd56eba5861a3003ac87a422cf6_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_bdacedd56eba5861a3003ac87a422cf6, class_type, operator(), param_0, param_1); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
            typedef class ::std::unordered_set< statiskit::Index, struct ::std::hash< statiskit::Index >, struct ::std::equal_to< statiskit::Index >, class ::std::allocator< statiskit::Index > >  return_type_7ba100805cd95f1cba468c9ce84eb72c;
            virtual return_type_7ba100805cd95f1cba468c9ce84eb72c children() const override { PYBIND11_OVERLOAD(return_type_7ba100805cd95f1cba468c9ce84eb72c, class_type, children, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::identifier;
            using class_type::children;
    };
}

double const & (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_f2b465036dfa56ff8913940fcca22350)()const= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_863e37976d285a889094820105e002f0)(double const &)= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_47a7a8e2b1b450bcb7bcc27a4ffc17e1)()const= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_0f1d5c89b9aa5bff92b608e54a7add28)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_13ac5a0eabb656d6b0791f42fbd2fc0d)()const= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_2d50e74ecbfd564385213f71fca423d9)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_c75f66a92f855760b5a6156ca3fdb42d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > >::Type, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > class_c75f66a92f855760b5a6156ca3fdb42d(module, "_Optimization_c75f66a92f855760b5a6156ca3fdb42d", "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def(pybind11::init<  >());
    class_c75f66a92f855760b5a6156ca3fdb42d.def("get_mindiff", method_pointer_f2b465036dfa56ff8913940fcca22350, pybind11::return_value_policy::copy, "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("set_mindiff", method_pointer_863e37976d285a889094820105e002f0, "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("get_minits", method_pointer_47a7a8e2b1b450bcb7bcc27a4ffc17e1, "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("set_minits", method_pointer_0f1d5c89b9aa5bff92b608e54a7add28, "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("get_maxits", method_pointer_13ac5a0eabb656d6b0791f42fbd2fc0d, "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("set_maxits", method_pointer_2d50e74ecbfd564385213f71fca423d9, "");

}