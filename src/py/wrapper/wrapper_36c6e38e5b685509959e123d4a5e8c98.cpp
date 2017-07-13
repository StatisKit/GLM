#include "_glm.h"



namespace autowig
{
    class Wrap_36c6e38e5b685509959e123d4a5e8c98 : public ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution >, public boost::python::wrapper< class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_36c6e38e5b685509959e123d4a5e8c98 const volatile * get_pointer<autowig::Wrap_36c6e38e5b685509959e123d4a5e8c98 const volatile >(autowig::Wrap_36c6e38e5b685509959e123d4a5e8c98 const volatile *c) { return c; }
    template <> class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > const volatile * get_pointer<class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > const volatile >(class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_36c6e38e5b685509959e123d4a5e8c98()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::DiscreteUnivariateConditionalDistribution const * (::statiskit::glm::SplittingRegressionIII< ::statiskit::MultinomialSplittingDistribution >::*method_pointer_1a1b130ed5315dd2849448bd9f614147)() const = &::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution >::get_sum;
    void  (::statiskit::glm::SplittingRegressionIII< ::statiskit::MultinomialSplittingDistribution >::*method_pointer_4531c8046cc4540db4e5810530361400)(struct ::statiskit::DiscreteUnivariateConditionalDistribution const &) = &::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution >::set_sum;
    boost::python::class_< autowig::Wrap_36c6e38e5b685509959e123d4a5e8c98, autowig::Held< autowig::Wrap_36c6e38e5b685509959e123d4a5e8c98 >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateConditionalDistribution >, boost::noncopyable > class_36c6e38e5b685509959e123d4a5e8c98("_SplittingRegressionIII_36c6e38e5b685509959e123d4a5e8c98", "", boost::python::no_init);
    class_36c6e38e5b685509959e123d4a5e8c98.def("get_sum", method_pointer_1a1b130ed5315dd2849448bd9f614147, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_36c6e38e5b685509959e123d4a5e8c98.def("set_sum", method_pointer_4531c8046cc4540db4e5810530361400, "");

    if(autowig::Held< class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_36c6e38e5b685509959e123d4a5e8c98 >::Type, autowig::Held< class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::SplittingRegressionIII< class ::statiskit::MultinomialSplittingDistribution > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistribution >::Type >();
    }

}