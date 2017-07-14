#include "_glm.h"



namespace autowig
{
    class Wrap_e540d7ab4b2b537a9d831cad24583a81 : public ::statiskit::glm::DirichletMultinomialSplittingOperator, public boost::python::wrapper< class ::statiskit::glm::DirichletMultinomialSplittingOperator >
    {
        public:
            
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_e540d7ab4b2b537a9d831cad24583a81 const volatile * get_pointer<autowig::Wrap_e540d7ab4b2b537a9d831cad24583a81 const volatile >(autowig::Wrap_e540d7ab4b2b537a9d831cad24583a81 const volatile *c) { return c; }
    template <> class ::statiskit::glm::DirichletMultinomialSplittingOperator const volatile * get_pointer<class ::statiskit::glm::DirichletMultinomialSplittingOperator const volatile >(class ::statiskit::glm::DirichletMultinomialSplittingOperator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e540d7ab4b2b537a9d831cad24583a81()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< autowig::Wrap_e540d7ab4b2b537a9d831cad24583a81, autowig::Held< autowig::Wrap_e540d7ab4b2b537a9d831cad24583a81 >::Type, boost::python::bases< struct ::statiskit::glm::MultivariateGeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > >, boost::noncopyable > class_e540d7ab4b2b537a9d831cad24583a81("DirichletMultinomialSplittingOperator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::glm::DirichletMultinomialSplittingOperator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e540d7ab4b2b537a9d831cad24583a81 >::Type, autowig::Held< class ::statiskit::glm::DirichletMultinomialSplittingOperator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::DirichletMultinomialSplittingOperator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::DirichletMultinomialSplittingOperator >::Type, autowig::Held< struct ::statiskit::glm::MultivariateGeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > >::Type >();
    }

}