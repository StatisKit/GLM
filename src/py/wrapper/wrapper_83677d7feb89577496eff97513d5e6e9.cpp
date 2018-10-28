#include "_glm.h"



namespace autowig
{
    class Wrap_83677d7feb89577496eff97513d5e6e9 : public ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  operator()(::statiskit::UnivariateConditionalDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_83677d7feb89577496eff97513d5e6e9 const volatile * get_pointer<autowig::Wrap_83677d7feb89577496eff97513d5e6e9 const volatile >(autowig::Wrap_83677d7feb89577496eff97513d5e6e9 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_83677d7feb89577496eff97513d5e6e9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_83677d7feb89577496eff97513d5e6e9, autowig::Held< autowig::Wrap_83677d7feb89577496eff97513d5e6e9 >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_83677d7feb89577496eff97513d5e6e9("_PolymorphicCopy_83677d7feb89577496eff97513d5e6e9", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_83677d7feb89577496eff97513d5e6e9 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::glm::HierarchicalRegressionEstimation::Estimator, struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}