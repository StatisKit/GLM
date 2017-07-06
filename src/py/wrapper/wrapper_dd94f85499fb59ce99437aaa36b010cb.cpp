#include "_glm.h"



namespace autowig
{
    class Wrap_dd94f85499fb59ce99437aaa36b010cb : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > >
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
    template <> autowig::Wrap_dd94f85499fb59ce99437aaa36b010cb const volatile * get_pointer<autowig::Wrap_dd94f85499fb59ce99437aaa36b010cb const volatile >(autowig::Wrap_dd94f85499fb59ce99437aaa36b010cb const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dd94f85499fb59ce99437aaa36b010cb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_dd94f85499fb59ce99437aaa36b010cb, autowig::Held< autowig::Wrap_dd94f85499fb59ce99437aaa36b010cb >::Type, boost::python::bases< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >, boost::noncopyable > class_dd94f85499fb59ce99437aaa36b010cb("_PolymorphicCopy_dd94f85499fb59ce99437aaa36b010cb", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_dd94f85499fb59ce99437aaa36b010cb >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::NominalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > >::Type, autowig::Held< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
    }

}