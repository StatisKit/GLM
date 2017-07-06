#include "_glm.h"



namespace autowig
{
    class Wrap_aca690ed73e75045afeca3c96d85b6ba : public ::statiskit::FLink< struct ::statiskit::NominalLink >, public boost::python::wrapper< struct ::statiskit::FLink< struct ::statiskit::NominalLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > (result);
            }
                        
            virtual class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  inverse_derivative(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  inverse(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_aca690ed73e75045afeca3c96d85b6ba const volatile * get_pointer<autowig::Wrap_aca690ed73e75045afeca3c96d85b6ba const volatile >(autowig::Wrap_aca690ed73e75045afeca3c96d85b6ba const volatile *c) { return c; }
    template <> struct ::statiskit::FLink< struct ::statiskit::NominalLink > const volatile * get_pointer<struct ::statiskit::FLink< struct ::statiskit::NominalLink > const volatile >(struct ::statiskit::FLink< struct ::statiskit::NominalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aca690ed73e75045afeca3c96d85b6ba()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::FLink< ::statiskit::NominalLink >::*method_pointer_c171ab2e3ff950089d3af24bd5b01eb1)() = &::statiskit::FLink< struct ::statiskit::NominalLink >::get_distribution;
    void  (::statiskit::FLink< ::statiskit::NominalLink >::*method_pointer_89d540a02256562db898592afd54d2ab)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::FLink< struct ::statiskit::NominalLink >::set_distribution;
    boost::python::class_< autowig::Wrap_aca690ed73e75045afeca3c96d85b6ba, autowig::Held< autowig::Wrap_aca690ed73e75045afeca3c96d85b6ba >::Type, boost::python::bases< struct ::statiskit::NominalLink >, boost::noncopyable > class_aca690ed73e75045afeca3c96d85b6ba("_FLink_aca690ed73e75045afeca3c96d85b6ba", "", boost::python::no_init);
    class_aca690ed73e75045afeca3c96d85b6ba.def("get_distribution", method_pointer_c171ab2e3ff950089d3af24bd5b01eb1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_aca690ed73e75045afeca3c96d85b6ba.def("set_distribution", method_pointer_89d540a02256562db898592afd54d2ab, "");

    if(autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NominalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_aca690ed73e75045afeca3c96d85b6ba >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NominalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NominalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NominalLink > >::Type, autowig::Held< struct ::statiskit::NominalLink >::Type >();
    }

}