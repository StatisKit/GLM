#include "_glm.h"



namespace autowig
{
    class Wrap_233424e8e37257629fe9359f85722960 : public ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink >, public boost::python::wrapper< struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::NegativeBinomialLink, struct ::std::default_delete< struct ::statiskit::NegativeBinomialLink > > (result);
            }
                        
            virtual double  inverse_derivative(double const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
                        
            virtual double  inverse(double const & param_0) const
            { return this->get_override("inverse")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_233424e8e37257629fe9359f85722960 const volatile * get_pointer<autowig::Wrap_233424e8e37257629fe9359f85722960 const volatile >(autowig::Wrap_233424e8e37257629fe9359f85722960 const volatile *c) { return c; }
    template <> struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > const volatile * get_pointer<struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > const volatile >(struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_233424e8e37257629fe9359f85722960()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::FLink< ::statiskit::NegativeBinomialLink >::*method_pointer_692584db531351e286b0320b0cd8f8f6)() = &::statiskit::FLink< struct ::statiskit::NegativeBinomialLink >::get_distribution;
    void  (::statiskit::FLink< ::statiskit::NegativeBinomialLink >::*method_pointer_aea53b31d31f58d282c289b20f53f67a)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::FLink< struct ::statiskit::NegativeBinomialLink >::set_distribution;
    boost::python::class_< autowig::Wrap_233424e8e37257629fe9359f85722960, autowig::Held< autowig::Wrap_233424e8e37257629fe9359f85722960 >::Type, boost::python::bases< struct ::statiskit::NegativeBinomialLink >, boost::noncopyable > class_233424e8e37257629fe9359f85722960("_FLink_233424e8e37257629fe9359f85722960", "", boost::python::no_init);
    class_233424e8e37257629fe9359f85722960.def("get_distribution", method_pointer_692584db531351e286b0320b0cd8f8f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_233424e8e37257629fe9359f85722960.def("set_distribution", method_pointer_aea53b31d31f58d282c289b20f53f67a, "");

    if(autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_233424e8e37257629fe9359f85722960 >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::NegativeBinomialLink > >::Type, autowig::Held< struct ::statiskit::NegativeBinomialLink >::Type >();
    }

}