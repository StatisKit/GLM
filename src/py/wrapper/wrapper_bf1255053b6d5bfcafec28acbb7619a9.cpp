#include "_glm.h"



namespace autowig
{
    class Wrap_bf1255053b6d5bfcafec28acbb7619a9 : public ::statiskit::FLink< struct ::statiskit::OrdinalLink >, public boost::python::wrapper< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > (result);
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
    template <> autowig::Wrap_bf1255053b6d5bfcafec28acbb7619a9 const volatile * get_pointer<autowig::Wrap_bf1255053b6d5bfcafec28acbb7619a9 const volatile >(autowig::Wrap_bf1255053b6d5bfcafec28acbb7619a9 const volatile *c) { return c; }
    template <> struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > const volatile * get_pointer<struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > const volatile >(struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bf1255053b6d5bfcafec28acbb7619a9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::FLink< ::statiskit::OrdinalLink >::*method_pointer_946c585cdcec5e15b26e1966fe8aaec1)() = &::statiskit::FLink< struct ::statiskit::OrdinalLink >::get_distribution;
    void  (::statiskit::FLink< ::statiskit::OrdinalLink >::*method_pointer_aa48e133210b5c8ea717f30129235e2e)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::FLink< struct ::statiskit::OrdinalLink >::set_distribution;
    boost::python::class_< autowig::Wrap_bf1255053b6d5bfcafec28acbb7619a9, autowig::Held< autowig::Wrap_bf1255053b6d5bfcafec28acbb7619a9 >::Type, boost::python::bases< struct ::statiskit::OrdinalLink >, boost::noncopyable > class_bf1255053b6d5bfcafec28acbb7619a9("_FLink_bf1255053b6d5bfcafec28acbb7619a9", "", boost::python::no_init);
    class_bf1255053b6d5bfcafec28acbb7619a9.def("get_distribution", method_pointer_946c585cdcec5e15b26e1966fe8aaec1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_bf1255053b6d5bfcafec28acbb7619a9.def("set_distribution", method_pointer_aa48e133210b5c8ea717f30129235e2e, "");

    if(autowig::Held< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_bf1255053b6d5bfcafec28acbb7619a9 >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >::Type, autowig::Held< struct ::statiskit::OrdinalLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > >::Type, struct ::statiskit::FLink< struct ::statiskit::OrdinalLink > > > >();
    }

}