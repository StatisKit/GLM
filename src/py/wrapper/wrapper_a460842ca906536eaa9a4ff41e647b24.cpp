#include "_glm.h"



namespace autowig
{
    class Wrap_a460842ca906536eaa9a4ff41e647b24 : public ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_a460842ca906536eaa9a4ff41e647b24 const volatile * get_pointer<autowig::Wrap_a460842ca906536eaa9a4ff41e647b24 const volatile >(autowig::Wrap_a460842ca906536eaa9a4ff41e647b24 const volatile *c) { return c; }
    template <> class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a460842ca906536eaa9a4ff41e647b24()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_d495832bc4a352599e06de3dd80b2dfb = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__categorical_fisher_estimation_d495832bc4a352599e06de3dd80b2dfb");
    boost::python::object module_d495832bc4a352599e06de3dd80b2dfb(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d495832bc4a352599e06de3dd80b2dfb.c_str()))));
    boost::python::scope().attr("__categorical_fisher_estimation_d495832bc4a352599e06de3dd80b2dfb") = module_d495832bc4a352599e06de3dd80b2dfb;
    boost::python::scope scope_d495832bc4a352599e06de3dd80b2dfb = module_d495832bc4a352599e06de3dd80b2dfb;
    struct ::statiskit::NominalLink const * (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::NominalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_e4024fc8d1815268a3442fa127e135c0)() const = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_link;
    void  (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::NominalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_49b30c3c70195960bbe2c5455ba76e88)(struct ::statiskit::NominalLink const &) = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_a460842ca906536eaa9a4ff41e647b24, autowig::Held< autowig::Wrap_a460842ca906536eaa9a4ff41e647b24 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_a460842ca906536eaa9a4ff41e647b24("Estimator", "", boost::python::no_init);
    class_a460842ca906536eaa9a4ff41e647b24.def("get_link", method_pointer_e4024fc8d1815268a3442fa127e135c0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a460842ca906536eaa9a4ff41e647b24.def("set_link", method_pointer_49b30c3c70195960bbe2c5455ba76e88, "");

    if(autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a460842ca906536eaa9a4ff41e647b24 >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > >();
    }

}