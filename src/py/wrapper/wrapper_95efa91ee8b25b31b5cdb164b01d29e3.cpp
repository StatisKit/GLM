#include "_glm.h"



namespace autowig
{
    class Wrap_95efa91ee8b25b31b5cdb164b01d29e3 : public ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_95efa91ee8b25b31b5cdb164b01d29e3 const volatile * get_pointer<autowig::Wrap_95efa91ee8b25b31b5cdb164b01d29e3 const volatile >(autowig::Wrap_95efa91ee8b25b31b5cdb164b01d29e3 const volatile *c) { return c; }
    template <> class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_95efa91ee8b25b31b5cdb164b01d29e3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_10aec7d3ae63513c9bdeafc3ccf6d48a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__categorical_fisher_estimation_10aec7d3ae63513c9bdeafc3ccf6d48a");
    boost::python::object module_10aec7d3ae63513c9bdeafc3ccf6d48a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_10aec7d3ae63513c9bdeafc3ccf6d48a.c_str()))));
    boost::python::scope().attr("__categorical_fisher_estimation_10aec7d3ae63513c9bdeafc3ccf6d48a") = module_10aec7d3ae63513c9bdeafc3ccf6d48a;
    boost::python::scope scope_10aec7d3ae63513c9bdeafc3ccf6d48a = module_10aec7d3ae63513c9bdeafc3ccf6d48a;
    struct ::statiskit::OrdinalLink const * (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::OrdinalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_c4a4c8270d675697b73364a1672e64a8)() const = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_link;
    void  (::statiskit::glm::CategoricalFisherEstimation< ::statiskit::glm::OrdinalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_10fe92df19835c5488c73e184512aa9c)(struct ::statiskit::OrdinalLink const &) = &::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_95efa91ee8b25b31b5cdb164b01d29e3, autowig::Held< autowig::Wrap_95efa91ee8b25b31b5cdb164b01d29e3 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_95efa91ee8b25b31b5cdb164b01d29e3("Estimator", "", boost::python::no_init);
    class_95efa91ee8b25b31b5cdb164b01d29e3.def("get_link", method_pointer_c4a4c8270d675697b73364a1672e64a8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_95efa91ee8b25b31b5cdb164b01d29e3.def("set_link", method_pointer_10fe92df19835c5488c73e184512aa9c, "");

    if(autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_95efa91ee8b25b31b5cdb164b01d29e3 >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > >();
    }

}