#include "_glm.h"



namespace autowig
{
    class Wrap_5a7465666fb150699d01c97b5ecb977a : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

        protected:
            
            virtual void  update(double const & param_0) const
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_5a7465666fb150699d01c97b5ecb977a const volatile * get_pointer<autowig::Wrap_5a7465666fb150699d01c97b5ecb977a const volatile >(autowig::Wrap_5a7465666fb150699d01c97b5ecb977a const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5a7465666fb150699d01c97b5ecb977a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::ScalarPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::PoissonLink >::*method_pointer_a0f19176e9d05a1e844da267a50b9fa6)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::PoissonLink >::*method_pointer_79f9de59ab7855028b40986060e7c00d)(class ::statiskit::ScalarPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink >::set_predictor;
    struct ::statiskit::PoissonLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::PoissonLink >::*method_pointer_2d93a6270b0b5d918ed5dc05f008689b)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::PoissonLink >::*method_pointer_c86adbc8e79c5ab4ac9d40bab9fe563d)(struct ::statiskit::PoissonLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink >::set_link;
    boost::python::class_< autowig::Wrap_5a7465666fb150699d01c97b5ecb977a, autowig::Held< autowig::Wrap_5a7465666fb150699d01c97b5ecb977a >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistribution >, boost::noncopyable > class_5a7465666fb150699d01c97b5ecb977a("_GeneralizedLinearModel_5a7465666fb150699d01c97b5ecb977a", "", boost::python::no_init);
    class_5a7465666fb150699d01c97b5ecb977a.def("get_predictor", method_pointer_a0f19176e9d05a1e844da267a50b9fa6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5a7465666fb150699d01c97b5ecb977a.def("set_predictor", method_pointer_79f9de59ab7855028b40986060e7c00d, "");
    class_5a7465666fb150699d01c97b5ecb977a.def("get_link", method_pointer_2d93a6270b0b5d918ed5dc05f008689b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5a7465666fb150699d01c97b5ecb977a.def("set_link", method_pointer_c86adbc8e79c5ab4ac9d40bab9fe563d, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5a7465666fb150699d01c97b5ecb977a >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::PoissonLink > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistribution >::Type >();
    }

}