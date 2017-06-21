#include "_glm.h"



namespace autowig
{
    class Wrap_b3f3897cb2a75497b93cd1e0cfbb43e1 : public ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::OrdinalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
            { return this->get_override("build_estimated")(param_0, param_1, param_2); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  beta_init(struct ::statiskit::MultivariateData const & param_0, ::statiskit::Index const & param_1, ::statiskit::Indices const & param_2) const
            { return this->get_override("beta_init")(param_0, param_1, param_2); }
                        
            virtual class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >  Z_init(struct ::statiskit::MultivariateData const & param_0, ::statiskit::Index const & param_1, ::statiskit::Indices const & param_2) const
            { return this->get_override("Z_init")(param_0, param_1, param_2); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_b3f3897cb2a75497b93cd1e0cfbb43e1 const volatile * get_pointer<autowig::Wrap_b3f3897cb2a75497b93cd1e0cfbb43e1 const volatile >(autowig::Wrap_b3f3897cb2a75497b93cd1e0cfbb43e1 const volatile *c) { return c; }
    template <> class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile >(class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b3f3897cb2a75497b93cd1e0cfbb43e1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_350d63bb2d0f543ca4ffce92378f4456 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__categorical_fisher_estimation_350d63bb2d0f543ca4ffce92378f4456");
    boost::python::object module_350d63bb2d0f543ca4ffce92378f4456(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_350d63bb2d0f543ca4ffce92378f4456.c_str()))));
    boost::python::scope().attr("__categorical_fisher_estimation_350d63bb2d0f543ca4ffce92378f4456") = module_350d63bb2d0f543ca4ffce92378f4456;
    boost::python::scope scope_350d63bb2d0f543ca4ffce92378f4456 = module_350d63bb2d0f543ca4ffce92378f4456;
    struct ::statiskit::OrdinalLink const * (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_68538bfb02da5ddba8b5122f40a00279)() const = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::get_link;
    void  (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::OrdinalRegression >::Estimator::*method_pointer_eed75773b554572485750b2443065329)(struct ::statiskit::OrdinalLink const &) = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_b3f3897cb2a75497b93cd1e0cfbb43e1, autowig::Held< autowig::Wrap_b3f3897cb2a75497b93cd1e0cfbb43e1 >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_b3f3897cb2a75497b93cd1e0cfbb43e1("Estimator", "", boost::python::no_init);
    class_b3f3897cb2a75497b93cd1e0cfbb43e1.def("get_link", method_pointer_68538bfb02da5ddba8b5122f40a00279, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b3f3897cb2a75497b93cd1e0cfbb43e1.def("set_link", method_pointer_eed75773b554572485750b2443065329, "");

    if(autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b3f3897cb2a75497b93cd1e0cfbb43e1 >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type, class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > > >();
    }

}