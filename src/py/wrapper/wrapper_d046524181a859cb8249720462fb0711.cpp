#include "_glm.h"



namespace autowig
{
    class Wrap_d046524181a859cb8249720462fb0711 : public ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink >, public boost::python::wrapper< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > >
    {
        public:
            

        protected:
            
            virtual void  update(double const & param_0) 
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_d046524181a859cb8249720462fb0711 const volatile * get_pointer<autowig::Wrap_d046524181a859cb8249720462fb0711 const volatile >(autowig::Wrap_d046524181a859cb8249720462fb0711 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > const volatile * get_pointer<struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > const volatile >(struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d046524181a859cb8249720462fb0711()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< autowig::Wrap_d046524181a859cb8249720462fb0711, autowig::Held< autowig::Wrap_d046524181a859cb8249720462fb0711 >::Type, boost::python::bases< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::BinomialLink > >, boost::noncopyable > class_d046524181a859cb8249720462fb0711("_DiscreteGeneralizedLinearModel_d046524181a859cb8249720462fb0711", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d046524181a859cb8249720462fb0711 >::Type, autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::DiscreteGeneralizedLinearModel< struct ::statiskit::BinomialLink > >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::BinomialLink > >::Type >();
    }

}