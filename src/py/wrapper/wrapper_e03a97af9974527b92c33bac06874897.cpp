#include "_glm.h"



namespace autowig
{
    class Wrap_e03a97af9974527b92c33bac06874897 : public ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink >, public boost::python::wrapper< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::NominalLink, struct ::std::default_delete< struct ::statiskit::glm::NominalLink > > (result);
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
    template <> autowig::Wrap_e03a97af9974527b92c33bac06874897 const volatile * get_pointer<autowig::Wrap_e03a97af9974527b92c33bac06874897 const volatile >(autowig::Wrap_e03a97af9974527b92c33bac06874897 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > const volatile * get_pointer<struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > const volatile >(struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e03a97af9974527b92c33bac06874897()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::NominalLink >::*method_pointer_2b28e8b4fcad5baeb40e9bace151aa1e)() = &::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink >::get_distribution;
    void  (::statiskit::glm::FLink< ::statiskit::glm::NominalLink >::*method_pointer_8da8a94c47d35abb9e32cc184e03791e)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink >::set_distribution;
    boost::python::class_< autowig::Wrap_e03a97af9974527b92c33bac06874897, autowig::Held< autowig::Wrap_e03a97af9974527b92c33bac06874897 >::Type, boost::python::bases< struct ::statiskit::glm::NominalLink >, boost::noncopyable > class_e03a97af9974527b92c33bac06874897("_FLink_e03a97af9974527b92c33bac06874897", "", boost::python::no_init);
    class_e03a97af9974527b92c33bac06874897.def("get_distribution", method_pointer_2b28e8b4fcad5baeb40e9bace151aa1e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e03a97af9974527b92c33bac06874897.def("set_distribution", method_pointer_8da8a94c47d35abb9e32cc184e03791e, "");

    if(autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e03a97af9974527b92c33bac06874897 >::Type, autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::NominalLink > >::Type, autowig::Held< struct ::statiskit::glm::NominalLink >::Type >();
    }

}