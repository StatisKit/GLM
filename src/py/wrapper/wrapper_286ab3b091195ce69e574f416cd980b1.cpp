#include "_glm.h"



namespace autowig
{
    class Wrap_286ab3b091195ce69e574f416cd980b1 : public ::statiskit::FLink< struct ::statiskit::PoissonLink >, public boost::python::wrapper< struct ::statiskit::FLink< struct ::statiskit::PoissonLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > > (result);
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
    template <> autowig::Wrap_286ab3b091195ce69e574f416cd980b1 const volatile * get_pointer<autowig::Wrap_286ab3b091195ce69e574f416cd980b1 const volatile >(autowig::Wrap_286ab3b091195ce69e574f416cd980b1 const volatile *c) { return c; }
    template <> struct ::statiskit::FLink< struct ::statiskit::PoissonLink > const volatile * get_pointer<struct ::statiskit::FLink< struct ::statiskit::PoissonLink > const volatile >(struct ::statiskit::FLink< struct ::statiskit::PoissonLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_286ab3b091195ce69e574f416cd980b1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::FLink< ::statiskit::PoissonLink >::*method_pointer_1bea7827d228587db295797247890d6d)() = &::statiskit::FLink< struct ::statiskit::PoissonLink >::get_distribution;
    void  (::statiskit::FLink< ::statiskit::PoissonLink >::*method_pointer_4fe707e42b1f585c88092e9afaa4e8ca)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::FLink< struct ::statiskit::PoissonLink >::set_distribution;
    boost::python::class_< autowig::Wrap_286ab3b091195ce69e574f416cd980b1, autowig::Held< autowig::Wrap_286ab3b091195ce69e574f416cd980b1 >::Type, boost::python::bases< struct ::statiskit::PoissonLink >, boost::noncopyable > class_286ab3b091195ce69e574f416cd980b1("_FLink_286ab3b091195ce69e574f416cd980b1", "", boost::python::no_init);
    class_286ab3b091195ce69e574f416cd980b1.def("get_distribution", method_pointer_1bea7827d228587db295797247890d6d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_286ab3b091195ce69e574f416cd980b1.def("set_distribution", method_pointer_4fe707e42b1f585c88092e9afaa4e8ca, "");

    if(autowig::Held< struct ::statiskit::FLink< struct ::statiskit::PoissonLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_286ab3b091195ce69e574f416cd980b1 >::Type, autowig::Held< struct ::statiskit::FLink< struct ::statiskit::PoissonLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::PoissonLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::FLink< struct ::statiskit::PoissonLink > >::Type, autowig::Held< struct ::statiskit::PoissonLink >::Type >();
    }

}