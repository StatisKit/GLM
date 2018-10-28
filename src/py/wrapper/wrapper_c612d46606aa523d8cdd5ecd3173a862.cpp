#include "_glm.h"



namespace autowig
{
    class Wrap_c612d46606aa523d8cdd5ecd3173a862 : public ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink >, public boost::python::wrapper< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::BinaryLink, struct ::std::default_delete< struct ::statiskit::glm::BinaryLink > > (result);
            }
                        
            virtual double  inverse_derivative(double const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
                        
            virtual double  inverse(double const & param_0) const
            { return this->get_override("inverse")(param_0); }
                        
            virtual double  evaluate(double const & param_0) const
            { return this->get_override("evaluate")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_c612d46606aa523d8cdd5ecd3173a862 const volatile * get_pointer<autowig::Wrap_c612d46606aa523d8cdd5ecd3173a862 const volatile >(autowig::Wrap_c612d46606aa523d8cdd5ecd3173a862 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > const volatile * get_pointer<struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > const volatile >(struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c612d46606aa523d8cdd5ecd3173a862()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::BinaryLink >::*method_pointer_262348fe1e9b5280965551aad7cdfdd1)() = &::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink >::get_distribution;
    void  (::statiskit::glm::FLink< ::statiskit::glm::BinaryLink >::*method_pointer_77562c7ab60d51cf92ebcafb5ece6aff)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink >::set_distribution;
    boost::python::class_< autowig::Wrap_c612d46606aa523d8cdd5ecd3173a862, autowig::Held< autowig::Wrap_c612d46606aa523d8cdd5ecd3173a862 >::Type, boost::python::bases< struct ::statiskit::glm::BinaryLink >, boost::noncopyable > class_c612d46606aa523d8cdd5ecd3173a862("_FLink_c612d46606aa523d8cdd5ecd3173a862", "", boost::python::no_init);
    class_c612d46606aa523d8cdd5ecd3173a862.def("get_distribution", method_pointer_262348fe1e9b5280965551aad7cdfdd1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c612d46606aa523d8cdd5ecd3173a862.def("set_distribution", method_pointer_77562c7ab60d51cf92ebcafb5ece6aff, "");

    if(autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c612d46606aa523d8cdd5ecd3173a862 >::Type, autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > >::Type, autowig::Held< struct ::statiskit::glm::BinaryLink >::Type >();
    }

}