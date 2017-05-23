#include "_glm.h"



namespace autowig
{
    class Wrap_26958fd133075148a6dbc1f869e7823c : public ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::BinomialRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1) const
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
    template <> autowig::Wrap_26958fd133075148a6dbc1f869e7823c const volatile * get_pointer<autowig::Wrap_26958fd133075148a6dbc1f869e7823c const volatile >(autowig::Wrap_26958fd133075148a6dbc1f869e7823c const volatile *c) { return c; }
    template <> class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile >(class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_26958fd133075148a6dbc1f869e7823c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_29177155d47a5d41b6480030d8e5265e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__scalar_fisher_estimation_29177155d47a5d41b6480030d8e5265e");
    boost::python::object module_29177155d47a5d41b6480030d8e5265e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_29177155d47a5d41b6480030d8e5265e.c_str()))));
    boost::python::scope().attr("__scalar_fisher_estimation_29177155d47a5d41b6480030d8e5265e") = module_29177155d47a5d41b6480030d8e5265e;
    boost::python::scope scope_29177155d47a5d41b6480030d8e5265e = module_29177155d47a5d41b6480030d8e5265e;
    struct ::statiskit::BinomialLink const * (::statiskit::glm::ScalarFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_21dd5ab2393f531495d46f159f84706e)() const = &::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::get_link;
    void  (::statiskit::glm::ScalarFisherEstimation< ::statiskit::glm::BinomialRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::*method_pointer_4de68bf1aaa15b89b48ce946e53c3948)(struct ::statiskit::BinomialLink const &) = &::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator::set_link;
    boost::python::class_< autowig::Wrap_26958fd133075148a6dbc1f869e7823c, autowig::Held< autowig::Wrap_26958fd133075148a6dbc1f869e7823c >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_26958fd133075148a6dbc1f869e7823c("Estimator", "", boost::python::no_init);
    class_26958fd133075148a6dbc1f869e7823c.def("get_link", method_pointer_21dd5ab2393f531495d46f159f84706e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_26958fd133075148a6dbc1f869e7823c.def("set_link", method_pointer_4de68bf1aaa15b89b48ce946e53c3948, "");

    if(autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_26958fd133075148a6dbc1f869e7823c >::Type, autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ScalarFisherEstimation< class ::statiskit::glm::BinomialRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}