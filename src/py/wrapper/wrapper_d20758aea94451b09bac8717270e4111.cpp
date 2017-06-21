#include "_glm.h"



namespace autowig
{
    class Wrap_d20758aea94451b09bac8717270e4111 : public ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::NominalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
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
    template <> autowig::Wrap_d20758aea94451b09bac8717270e4111 const volatile * get_pointer<autowig::Wrap_d20758aea94451b09bac8717270e4111 const volatile >(autowig::Wrap_d20758aea94451b09bac8717270e4111 const volatile *c) { return c; }
    template <> class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile >(class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d20758aea94451b09bac8717270e4111()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_301ae8508a4250e781ad5c2205068a0a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__categorical_fisher_estimation_301ae8508a4250e781ad5c2205068a0a");
    boost::python::object module_301ae8508a4250e781ad5c2205068a0a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_301ae8508a4250e781ad5c2205068a0a.c_str()))));
    boost::python::scope().attr("__categorical_fisher_estimation_301ae8508a4250e781ad5c2205068a0a") = module_301ae8508a4250e781ad5c2205068a0a;
    boost::python::scope scope_301ae8508a4250e781ad5c2205068a0a = module_301ae8508a4250e781ad5c2205068a0a;
    struct ::statiskit::NominalLink const * (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_bb29d2308f78532b87a36b5e5020f416)() const = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::get_link;
    void  (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::NominalRegression >::Estimator::*method_pointer_76eb6e222afd520bbdbd9ffdaf9fc350)(struct ::statiskit::NominalLink const &) = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_d20758aea94451b09bac8717270e4111, autowig::Held< autowig::Wrap_d20758aea94451b09bac8717270e4111 >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_d20758aea94451b09bac8717270e4111("Estimator", "", boost::python::no_init);
    class_d20758aea94451b09bac8717270e4111.def("get_link", method_pointer_bb29d2308f78532b87a36b5e5020f416, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d20758aea94451b09bac8717270e4111.def("set_link", method_pointer_76eb6e222afd520bbdbd9ffdaf9fc350, "");

    if(autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d20758aea94451b09bac8717270e4111 >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > > >();
    }

}