#include "_glm.h"



namespace autowig
{
    class Wrap_57074d8828065e66b05234b9ebd90db1 : public ::statiskit::glm::SplittingRegressionI< ::statiskit::glm::MultinomialSplittingLink >, public boost::python::wrapper< class ::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > (result);
            }
                        

        protected:
            
            virtual void  update(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_57074d8828065e66b05234b9ebd90db1 const volatile * get_pointer<autowig::Wrap_57074d8828065e66b05234b9ebd90db1 const volatile >(autowig::Wrap_57074d8828065e66b05234b9ebd90db1 const volatile *c) { return c; }
    template <> class ::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink > const volatile * get_pointer<class ::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink > const volatile >(class ::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_57074d8828065e66b05234b9ebd90db1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::DiscreteUnivariateConditionalDistribution const * (::statiskit::glm::SplittingRegressionI< ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_961714c0a0ac5c1c9ec47e409fee39e6)() const = &::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink >::get_sum;
    void  (::statiskit::glm::SplittingRegressionI< ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_bdbfec1e9d46576e8cd3d9a66f18bcd3)(struct ::statiskit::DiscreteUnivariateConditionalDistribution const &) = &::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink >::set_sum;
    boost::python::class_< autowig::Wrap_57074d8828065e66b05234b9ebd90db1, autowig::Held< autowig::Wrap_57074d8828065e66b05234b9ebd90db1 >::Type, boost::python::bases< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > >, boost::noncopyable > class_57074d8828065e66b05234b9ebd90db1("_SplittingRegressionI_57074d8828065e66b05234b9ebd90db1", "", boost::python::no_init);
    class_57074d8828065e66b05234b9ebd90db1.def("get_sum", method_pointer_961714c0a0ac5c1c9ec47e409fee39e6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_57074d8828065e66b05234b9ebd90db1.def("set_sum", method_pointer_bdbfec1e9d46576e8cd3d9a66f18bcd3, "");

    if(autowig::Held< class ::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_57074d8828065e66b05234b9ebd90db1 >::Type, autowig::Held< class ::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::SplittingRegressionI< struct ::statiskit::glm::MultinomialSplittingLink > >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::glm::MultinomialSplittingLink > >::Type >();
    }

}