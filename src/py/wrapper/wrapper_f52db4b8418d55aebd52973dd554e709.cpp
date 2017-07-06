#include "_glm.h"



namespace autowig
{
    class Wrap_f52db4b8418d55aebd52973dd554e709 : public ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >
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
    template <> autowig::Wrap_f52db4b8418d55aebd52973dd554e709 const volatile * get_pointer<autowig::Wrap_f52db4b8418d55aebd52973dd554e709 const volatile >(autowig::Wrap_f52db4b8418d55aebd52973dd554e709 const volatile *c) { return c; }
    template <> class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile >(class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f52db4b8418d55aebd52973dd554e709()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_ae116f9f463b590c93c675104ae53433 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__constrained_regression_fisher_estimation_ae116f9f463b590c93c675104ae53433");
    boost::python::object module_ae116f9f463b590c93c675104ae53433(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_ae116f9f463b590c93c675104ae53433.c_str()))));
    boost::python::scope().attr("__constrained_regression_fisher_estimation_ae116f9f463b590c93c675104ae53433") = module_ae116f9f463b590c93c675104ae53433;
    boost::python::scope scope_ae116f9f463b590c93c675104ae53433 = module_ae116f9f463b590c93c675104ae53433;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_4b0f1c61c4d157aca25f0a60d4772879)() const = &::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_intercept_constraint;
    void  (::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_8e227b88f0f45e0dba7c691169ac9409)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_intercept_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const (::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_367f455c5a4a522397e18a68cf2dbb15)() const = &::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_slope_constraint;
    void  (::statiskit::glm::ConstrainedRegressionFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_b6cae7b26dac52ba94f6a31ac87d4e2f)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_slope_constraint;
    boost::python::class_< autowig::Wrap_f52db4b8418d55aebd52973dd554e709, autowig::Held< autowig::Wrap_f52db4b8418d55aebd52973dd554e709 >::Type, boost::python::bases< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >, boost::noncopyable > class_f52db4b8418d55aebd52973dd554e709("Estimator", "", boost::python::no_init);
    class_f52db4b8418d55aebd52973dd554e709.def("get_intercept_constraint", method_pointer_4b0f1c61c4d157aca25f0a60d4772879, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f52db4b8418d55aebd52973dd554e709.def("set_intercept_constraint", method_pointer_8e227b88f0f45e0dba7c691169ac9409, "");
    class_f52db4b8418d55aebd52973dd554e709.def("get_slope_constraint", method_pointer_367f455c5a4a522397e18a68cf2dbb15, "");
    class_f52db4b8418d55aebd52973dd554e709.def("set_slope_constraint", method_pointer_b6cae7b26dac52ba94f6a31ac87d4e2f, "");

    if(autowig::Held< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f52db4b8418d55aebd52973dd554e709 >::Type, autowig::Held< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
    }

}