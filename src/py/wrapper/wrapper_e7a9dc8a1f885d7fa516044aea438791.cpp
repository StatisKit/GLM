#include "_glm.h"

namespace autowig
{
    typedef ::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Optimization;

            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  return_type_e0fab2db391a546591b690a17ebe80ff;
            virtual return_type_e0fab2db391a546591b690a17ebe80ff copy() const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_e0fab2db391a546591b690a17ebe80ff, class_type, copy, ); };
            typedef class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  return_type_bdacedd56eba5861a3003ac87a422cf6;
            typedef ::statiskit::UnivariateConditionalDistributionEstimation::data_type const & param_bdacedd56eba5861a3003ac87a422cf6_0_type;
            typedef bool const & param_bdacedd56eba5861a3003ac87a422cf6_1_type;
            virtual return_type_bdacedd56eba5861a3003ac87a422cf6 operator()(param_bdacedd56eba5861a3003ac87a422cf6_0_type param_0, param_bdacedd56eba5861a3003ac87a422cf6_1_type param_1) const override { PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(return_type_bdacedd56eba5861a3003ac87a422cf6, class_type, operator(), param_0, param_1); };
            typedef ::uintptr_t  return_type_ed723b56ee6d50838db979e102419f39;
            virtual return_type_ed723b56ee6d50838db979e102419f39 identifier() const override { PYBIND11_OVERLOAD(return_type_ed723b56ee6d50838db979e102419f39, class_type, identifier, ); };
            typedef class ::std::unordered_set< unsigned long int, struct ::std::hash< unsigned long int >, struct ::std::equal_to< unsigned long int >, class ::std::allocator< unsigned long int > >  return_type_7ba100805cd95f1cba468c9ce84eb72c;
            virtual return_type_7ba100805cd95f1cba468c9ce84eb72c children() const override { PYBIND11_OVERLOAD(return_type_7ba100805cd95f1cba468c9ce84eb72c, class_type, children, ); };
    };

    class Publicist : public class_type
    {
        public:
            using class_type::identifier;
            using class_type::children;
    };
}

double const & (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_d4f577b3d83a5ba2a1173c7e92ae56af)()const= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_c06e92ca269a5a03ab0e27dc44995121)(double const &)= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_36778e935ac35c7595e8b322a68306b0)()const= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_2f290d8728335379872400a59a9db937)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_2d6b96bd255b5aabbad1426895b50b7f)()const= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_af2f3f7662175f1aad66febca1054ec4)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_e7a9dc8a1f885d7fa516044aea438791(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >, autowig::Trampoline, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > class_e7a9dc8a1f885d7fa516044aea438791(module, "_Optimization_e7a9dc8a1f885d7fa516044aea438791", "");
    class_e7a9dc8a1f885d7fa516044aea438791.def(pybind11::init<  >());
    class_e7a9dc8a1f885d7fa516044aea438791.def("get_mindiff", method_pointer_d4f577b3d83a5ba2a1173c7e92ae56af, pybind11::return_value_policy::copy, "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("set_mindiff", method_pointer_c06e92ca269a5a03ab0e27dc44995121, "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("get_minits", method_pointer_36778e935ac35c7595e8b322a68306b0, "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("set_minits", method_pointer_2f290d8728335379872400a59a9db937, "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("get_maxits", method_pointer_2d6b96bd255b5aabbad1426895b50b7f, "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("set_maxits", method_pointer_af2f3f7662175f1aad66febca1054ec4, "");

}