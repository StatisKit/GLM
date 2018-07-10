#include "_glm.h"



namespace autowig
{
    class Wrap_4a056e37beb953c9b99f495e2e8f5433 : public ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink >, public boost::python::wrapper< struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::OrdinalLink, struct ::std::default_delete< struct ::statiskit::glm::OrdinalLink > > (result);
            }
                        
            virtual class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  inverse_derivative(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  inverse(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse")(param_0); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  evaluate(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("evaluate")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_4a056e37beb953c9b99f495e2e8f5433 const volatile * get_pointer<autowig::Wrap_4a056e37beb953c9b99f495e2e8f5433 const volatile >(autowig::Wrap_4a056e37beb953c9b99f495e2e8f5433 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > const volatile * get_pointer<struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > const volatile >(struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4a056e37beb953c9b99f495e2e8f5433()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::OrdinalLink >::*method_pointer_6460f82441fb50d18c98930791ceb190)() = &::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink >::get_distribution;
    void  (::statiskit::glm::FLink< ::statiskit::glm::OrdinalLink >::*method_pointer_26d7f62f7b185b83881a44caa1e8e93c)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink >::set_distribution;
    boost::python::class_< autowig::Wrap_4a056e37beb953c9b99f495e2e8f5433, autowig::Held< autowig::Wrap_4a056e37beb953c9b99f495e2e8f5433 >::Type, boost::python::bases< struct ::statiskit::glm::OrdinalLink >, boost::noncopyable > class_4a056e37beb953c9b99f495e2e8f5433("_FLink_4a056e37beb953c9b99f495e2e8f5433", "", boost::python::no_init);
    class_4a056e37beb953c9b99f495e2e8f5433.def("get_distribution", method_pointer_6460f82441fb50d18c98930791ceb190, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_4a056e37beb953c9b99f495e2e8f5433.def("set_distribution", method_pointer_26d7f62f7b185b83881a44caa1e8e93c, "");

    if(autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_4a056e37beb953c9b99f495e2e8f5433 >::Type, autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::OrdinalLink > >::Type, autowig::Held< struct ::statiskit::glm::OrdinalLink >::Type >();
    }

}