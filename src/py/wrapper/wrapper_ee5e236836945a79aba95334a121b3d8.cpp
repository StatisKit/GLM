#include "_glm.h"



namespace autowig
{
    class Wrap_ee5e236836945a79aba95334a121b3d8 : public ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink >, public boost::python::wrapper< struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::PoissonLink, struct ::std::default_delete< struct ::statiskit::glm::PoissonLink > > (result);
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
    template <> autowig::Wrap_ee5e236836945a79aba95334a121b3d8 const volatile * get_pointer<autowig::Wrap_ee5e236836945a79aba95334a121b3d8 const volatile >(autowig::Wrap_ee5e236836945a79aba95334a121b3d8 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > const volatile * get_pointer<struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > const volatile >(struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ee5e236836945a79aba95334a121b3d8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::PoissonLink >::*method_pointer_0553a078f4de54368105d6e614cd7c39)() = &::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink >::get_distribution;
    void  (::statiskit::glm::FLink< ::statiskit::glm::PoissonLink >::*method_pointer_bf5074ce80df5917b94ce7add6f1f77b)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink >::set_distribution;
    boost::python::class_< autowig::Wrap_ee5e236836945a79aba95334a121b3d8, autowig::Held< autowig::Wrap_ee5e236836945a79aba95334a121b3d8 >::Type, boost::python::bases< struct ::statiskit::glm::PoissonLink >, boost::noncopyable > class_ee5e236836945a79aba95334a121b3d8("_FLink_ee5e236836945a79aba95334a121b3d8", "", boost::python::no_init);
    class_ee5e236836945a79aba95334a121b3d8.def("get_distribution", method_pointer_0553a078f4de54368105d6e614cd7c39, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ee5e236836945a79aba95334a121b3d8.def("set_distribution", method_pointer_bf5074ce80df5917b94ce7add6f1f77b, "");

    if(autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ee5e236836945a79aba95334a121b3d8 >::Type, autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::PoissonLink > >::Type, autowig::Held< struct ::statiskit::glm::PoissonLink >::Type >();
    }

}