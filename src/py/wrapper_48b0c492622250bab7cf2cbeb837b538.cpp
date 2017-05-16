#include "_glm.h"



namespace autowig
{
    class Wrap_48b0c492622250bab7cf2cbeb837b538 : public ::statiskit::FLink< struct ::statiskit::BinomialLink >, public boost::python::wrapper< struct ::statiskit::FLink< struct ::statiskit::BinomialLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::BinomialLink, struct ::std::default_delete< struct ::statiskit::BinomialLink > > (result);
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
    template <> autowig::Wrap_48b0c492622250bab7cf2cbeb837b538 const volatile * get_pointer<autowig::Wrap_48b0c492622250bab7cf2cbeb837b538 const volatile >(autowig::Wrap_48b0c492622250bab7cf2cbeb837b538 const volatile *c) { return c; }
    template <> struct ::statiskit::FLink< struct ::statiskit::BinomialLink > const volatile * get_pointer<struct ::statiskit::FLink< struct ::statiskit::BinomialLink > const volatile >(struct ::statiskit::FLink< struct ::statiskit::BinomialLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_48b0c492622250bab7cf2cbeb837b538()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::FLink< ::statiskit::BinomialLink >::*method_pointer_2fb9dcf3a09453798a91c77be2ee1056)() = &::statiskit::FLink< struct ::statiskit::BinomialLink >::get_distribution;
    void  (::statiskit::FLink< ::statiskit::BinomialLink >::*method_pointer_b826d7cf153c56ecb474a7abc4f792c7)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::FLink< struct ::statiskit::BinomialLink >::set_distribution;
    boost::python::class_< autowig::Wrap_48b0c492622250bab7cf2cbeb837b538, autowig::Held< autowig::Wrap_48b0c492622250bab7cf2cbeb837b538 >::Type, boost::python::bases< struct ::statiskit::BinomialLink >, boost::noncopyable > class_48b0c492622250bab7cf2cbeb837b538("_FLink_48b0c492622250bab7cf2cbeb837b538", "", boost::python::no_init);
    class_48b0c492622250bab7cf2cbeb837b538.def("get_distribution", method_pointer_2fb9dcf3a09453798a91c77be2ee1056, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_48b0c492622250bab7cf2cbeb837b538.def("set_distribution", method_pointer_b826d7cf153c56ecb474a7abc4f792c7, "");

    if(autowig::Held< struct ::statiskit::FLink< struct ::statiskit::BinomialLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_48b0c492622250bab7cf2cbeb837b538 >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::BinomialLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::BinomialLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::BinomialLink > >::Type, autowig::Held< struct ::statiskit::BinomialLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::BinomialLink > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::FLink< struct ::statiskit::BinomialLink >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::BinomialLink > >::Type, struct ::statiskit::FLink< struct ::statiskit::BinomialLink > > > >();
    }

}