#include "_glm.h"



namespace autowig
{
    class Wrap_11a82026598355d99de816a8ba4a8f69 : public ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::PoissonRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1) const
            { return this->get_override("build_estimated")(param_0, param_1); }
                        
            virtual double  sigma_square(double const & param_0) const
            { return this->get_override("sigma_square")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_11a82026598355d99de816a8ba4a8f69 const volatile * get_pointer<autowig::Wrap_11a82026598355d99de816a8ba4a8f69 const volatile >(autowig::Wrap_11a82026598355d99de816a8ba4a8f69 const volatile *c) { return c; }
    template <> class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_11a82026598355d99de816a8ba4a8f69()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_02a47eb9248051ae967e0842b8ae4d44 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__scalar_fisher_estimation_02a47eb9248051ae967e0842b8ae4d44");
    boost::python::object module_02a47eb9248051ae967e0842b8ae4d44(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_02a47eb9248051ae967e0842b8ae4d44.c_str()))));
    boost::python::scope().attr("__scalar_fisher_estimation_02a47eb9248051ae967e0842b8ae4d44") = module_02a47eb9248051ae967e0842b8ae4d44;
    boost::python::scope scope_02a47eb9248051ae967e0842b8ae4d44 = module_02a47eb9248051ae967e0842b8ae4d44;
    double const & (::statiskit::glm::ScalarFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_bb88413a205157ddbf94d8a5b659b7c6)() const = &::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_epsilon;
    void  (::statiskit::glm::ScalarFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_972dc8f46ea154208110360e639354de)(double const &) = &::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_epsilon;
    unsigned int const & (::statiskit::glm::ScalarFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_2a4d6d4c16cb5622b3f82b7d20de5ea3)() const = &::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_maxits;
    void  (::statiskit::glm::ScalarFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_103986bb29ba5d3a87fc39c53812aa1d)(unsigned int const &) = &::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_maxits;
    struct ::statiskit::PoissonLink const * (::statiskit::glm::ScalarFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_d6a9a3363c8b50fa855d05696aea8ccb)() const = &::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_link;
    void  (::statiskit::glm::ScalarFisherEstimation< ::statiskit::glm::PoissonRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_c05ddd570d5f5ae58b1bc4cc80ac2ce7)(struct ::statiskit::PoissonLink const &) = &::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_11a82026598355d99de816a8ba4a8f69, autowig::Held< autowig::Wrap_11a82026598355d99de816a8ba4a8f69 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_11a82026598355d99de816a8ba4a8f69("Estimator", "", boost::python::no_init);
    class_11a82026598355d99de816a8ba4a8f69.def("get_epsilon", method_pointer_bb88413a205157ddbf94d8a5b659b7c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_11a82026598355d99de816a8ba4a8f69.def("set_epsilon", method_pointer_972dc8f46ea154208110360e639354de, "");
    class_11a82026598355d99de816a8ba4a8f69.def("get_maxits", method_pointer_2a4d6d4c16cb5622b3f82b7d20de5ea3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_11a82026598355d99de816a8ba4a8f69.def("set_maxits", method_pointer_103986bb29ba5d3a87fc39c53812aa1d, "");
    class_11a82026598355d99de816a8ba4a8f69.def("get_link", method_pointer_d6a9a3363c8b50fa855d05696aea8ccb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_11a82026598355d99de816a8ba4a8f69.def("set_link", method_pointer_c05ddd570d5f5ae58b1bc4cc80ac2ce7, "");

    if(autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_11a82026598355d99de816a8ba4a8f69 >::Type, autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::PoissonRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > >();
    }

}