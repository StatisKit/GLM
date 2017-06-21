#include "_glm.h"



namespace autowig
{
    class Wrap_b28bb4508a6e56e880e3a4a3b8e15e45 : public ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::OrdinalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
            { return this->get_override("build_estimated")(param_0, param_1, param_2); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_b28bb4508a6e56e880e3a4a3b8e15e45 const volatile * get_pointer<autowig::Wrap_b28bb4508a6e56e880e3a4a3b8e15e45 const volatile >(autowig::Wrap_b28bb4508a6e56e880e3a4a3b8e15e45 const volatile *c) { return c; }
    template <> class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile >(class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b28bb4508a6e56e880e3a4a3b8e15e45()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_1a8d96bfbf6858af9a6c3a05f8a74ea7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__constrained_fisher_estimation_1a8d96bfbf6858af9a6c3a05f8a74ea7");
    boost::python::object module_1a8d96bfbf6858af9a6c3a05f8a74ea7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_1a8d96bfbf6858af9a6c3a05f8a74ea7.c_str()))));
    boost::python::scope().attr("__constrained_fisher_estimation_1a8d96bfbf6858af9a6c3a05f8a74ea7") = module_1a8d96bfbf6858af9a6c3a05f8a74ea7;
    boost::python::scope scope_1a8d96bfbf6858af9a6c3a05f8a74ea7 = module_1a8d96bfbf6858af9a6c3a05f8a74ea7;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_fdf5c53f0fbd5a7cb56842d4afe23bdf)() const = &::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::get_intercept_constraint;
    void  (::statiskit::glm::ConstrainedFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_f553b3ff7cf65bc0a46d342c8e1636cb)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::set_intercept_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const (::statiskit::glm::ConstrainedFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_a1a84adeb34c587ca0f9774ec58958f6)() const = &::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::get_slope_constraint;
    void  (::statiskit::glm::ConstrainedFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_b0ca0a4e5ef65ef7ac80a83ae209be0a)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::set_slope_constraint;
    boost::python::class_< autowig::Wrap_b28bb4508a6e56e880e3a4a3b8e15e45, autowig::Held< autowig::Wrap_b28bb4508a6e56e880e3a4a3b8e15e45 >::Type, boost::python::bases< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >, boost::noncopyable > class_b28bb4508a6e56e880e3a4a3b8e15e45("Estimator", "", boost::python::no_init);
    class_b28bb4508a6e56e880e3a4a3b8e15e45.def("get_intercept_constraint", method_pointer_fdf5c53f0fbd5a7cb56842d4afe23bdf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b28bb4508a6e56e880e3a4a3b8e15e45.def("set_intercept_constraint", method_pointer_f553b3ff7cf65bc0a46d342c8e1636cb, "");
    class_b28bb4508a6e56e880e3a4a3b8e15e45.def("get_slope_constraint", method_pointer_a1a84adeb34c587ca0f9774ec58958f6, "");
    class_b28bb4508a6e56e880e3a4a3b8e15e45.def("set_slope_constraint", method_pointer_b0ca0a4e5ef65ef7ac80a83ae209be0a, "");

    if(autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b28bb4508a6e56e880e3a4a3b8e15e45 >::Type, autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > > >();
    }

}