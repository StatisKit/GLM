#include "_glm.h"



namespace autowig
{
    class Wrap_2bbb0f40a3495bd49cb7207564267c6a : public ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::NominalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
            { return this->get_override("build_estimated")(param_0, param_1, param_2); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_2bbb0f40a3495bd49cb7207564267c6a const volatile * get_pointer<autowig::Wrap_2bbb0f40a3495bd49cb7207564267c6a const volatile >(autowig::Wrap_2bbb0f40a3495bd49cb7207564267c6a const volatile *c) { return c; }
    template <> class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile >(class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2bbb0f40a3495bd49cb7207564267c6a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_fa2072e0d0ec5b58bff711c509f5d5e0 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__constrained_fisher_estimation_fa2072e0d0ec5b58bff711c509f5d5e0");
    boost::python::object module_fa2072e0d0ec5b58bff711c509f5d5e0(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa2072e0d0ec5b58bff711c509f5d5e0.c_str()))));
    boost::python::scope().attr("__constrained_fisher_estimation_fa2072e0d0ec5b58bff711c509f5d5e0") = module_fa2072e0d0ec5b58bff711c509f5d5e0;
    boost::python::scope scope_fa2072e0d0ec5b58bff711c509f5d5e0 = module_fa2072e0d0ec5b58bff711c509f5d5e0;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_4fb4a4a7e94f5cc1ae65bdaaf0af7d0f)() const = &::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_intercept_constraint;
    void  (::statiskit::glm::ConstrainedFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_0211afe0f1715f9baf1d08087934b976)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_intercept_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const (::statiskit::glm::ConstrainedFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_64e398e6d9e351b7b5ffeef91eb6180a)() const = &::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_slope_constraint;
    void  (::statiskit::glm::ConstrainedFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_6ec098f44c245e999a83b41cd10c10da)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_slope_constraint;
    boost::python::class_< autowig::Wrap_2bbb0f40a3495bd49cb7207564267c6a, autowig::Held< autowig::Wrap_2bbb0f40a3495bd49cb7207564267c6a >::Type, boost::python::bases< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >, boost::noncopyable > class_2bbb0f40a3495bd49cb7207564267c6a("Estimator", "", boost::python::no_init);
    class_2bbb0f40a3495bd49cb7207564267c6a.def("get_intercept_constraint", method_pointer_4fb4a4a7e94f5cc1ae65bdaaf0af7d0f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2bbb0f40a3495bd49cb7207564267c6a.def("set_intercept_constraint", method_pointer_0211afe0f1715f9baf1d08087934b976, "");
    class_2bbb0f40a3495bd49cb7207564267c6a.def("get_slope_constraint", method_pointer_64e398e6d9e351b7b5ffeef91eb6180a, "");
    class_2bbb0f40a3495bd49cb7207564267c6a.def("set_slope_constraint", method_pointer_6ec098f44c245e999a83b41cd10c10da, "");

    if(autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_2bbb0f40a3495bd49cb7207564267c6a >::Type, autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > > >();
    }

}