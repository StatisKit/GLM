#include "_glm.h"



namespace autowig
{
    class Wrap_881b37e12e075b58becfdabd3cfa7b71 : public ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink >, public boost::python::wrapper< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::BinomialLink, struct ::std::default_delete< struct ::statiskit::glm::BinomialLink > > (result);
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
    template <> autowig::Wrap_881b37e12e075b58becfdabd3cfa7b71 const volatile * get_pointer<autowig::Wrap_881b37e12e075b58becfdabd3cfa7b71 const volatile >(autowig::Wrap_881b37e12e075b58becfdabd3cfa7b71 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > const volatile * get_pointer<struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > const volatile >(struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_881b37e12e075b58becfdabd3cfa7b71()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::glm::FLink< ::statiskit::glm::BinomialLink >::*method_pointer_41a55f69b9fa5c2abc2cf1d613b570d1)() = &::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink >::get_distribution;
    void  (::statiskit::glm::FLink< ::statiskit::glm::BinomialLink >::*method_pointer_7845a8bbe90f55478bb988e9a2f5525d)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink >::set_distribution;
    boost::python::class_< autowig::Wrap_881b37e12e075b58becfdabd3cfa7b71, autowig::Held< autowig::Wrap_881b37e12e075b58becfdabd3cfa7b71 >::Type, boost::python::bases< struct ::statiskit::glm::BinomialLink >, boost::noncopyable > class_881b37e12e075b58becfdabd3cfa7b71("_FLink_881b37e12e075b58becfdabd3cfa7b71", "", boost::python::no_init);
    class_881b37e12e075b58becfdabd3cfa7b71.def("get_distribution", method_pointer_41a55f69b9fa5c2abc2cf1d613b570d1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_881b37e12e075b58becfdabd3cfa7b71.def("set_distribution", method_pointer_7845a8bbe90f55478bb988e9a2f5525d, "");

    if(autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_881b37e12e075b58becfdabd3cfa7b71 >::Type, autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinomialLink > >::Type, autowig::Held< struct ::statiskit::glm::BinomialLink >::Type >();
    }

}