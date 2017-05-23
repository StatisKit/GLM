#include "_glm.h"



namespace autowig
{
    class Wrap_7f8dfe1685845bf093f1964794c9c54b : public ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink >, public boost::python::wrapper< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > >
    {
        public:
            

        protected:
            
            virtual void  update(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) 
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_7f8dfe1685845bf093f1964794c9c54b const volatile * get_pointer<autowig::Wrap_7f8dfe1685845bf093f1964794c9c54b const volatile >(autowig::Wrap_7f8dfe1685845bf093f1964794c9c54b const volatile *c) { return c; }
    template <> struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > const volatile * get_pointer<struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > const volatile >(struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7f8dfe1685845bf093f1964794c9c54b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< autowig::Wrap_7f8dfe1685845bf093f1964794c9c54b, autowig::Held< autowig::Wrap_7f8dfe1685845bf093f1964794c9c54b >::Type, boost::python::bases< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > >, boost::noncopyable > class_7f8dfe1685845bf093f1964794c9c54b("_CategoricalGeneralizedLinearModel_7f8dfe1685845bf093f1964794c9c54b", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7f8dfe1685845bf093f1964794c9c54b >::Type, autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::OrdinalLink > >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::OrdinalLink > >::Type >();
    }

}