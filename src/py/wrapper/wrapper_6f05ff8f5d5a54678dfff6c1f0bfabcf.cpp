#include "_glm.h"



namespace autowig
{
    class Wrap_6f05ff8f5d5a54678dfff6c1f0bfabcf : public ::statiskit::glm::CategoricalFisherInitialization, public boost::python::wrapper< struct ::statiskit::glm::CategoricalFisherInitialization >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > > (result);
            }
                        
            virtual void  operator()(class ::statiskit::UnivariateConditionalData const & param_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > & param_1, struct ::statiskit::glm::VectorLink const & param_2) const
            { this->get_override("operator()")(param_0, param_1, param_2); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_6f05ff8f5d5a54678dfff6c1f0bfabcf const volatile * get_pointer<autowig::Wrap_6f05ff8f5d5a54678dfff6c1f0bfabcf const volatile >(autowig::Wrap_6f05ff8f5d5a54678dfff6c1f0bfabcf const volatile *c) { return c; }
    template <> struct ::statiskit::glm::CategoricalFisherInitialization const volatile * get_pointer<struct ::statiskit::glm::CategoricalFisherInitialization const volatile >(struct ::statiskit::glm::CategoricalFisherInitialization const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6f05ff8f5d5a54678dfff6c1f0bfabcf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    void  (::statiskit::glm::CategoricalFisherInitialization::*method_pointer_f020b7c9271f52fe84de964f8f02d96e)(class ::statiskit::UnivariateConditionalData const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &, struct ::statiskit::glm::VectorLink const &) const = &::statiskit::glm::CategoricalFisherInitialization::operator();
    class ::std::unique_ptr< struct ::statiskit::glm::CategoricalFisherInitialization, struct ::std::default_delete< struct ::statiskit::glm::CategoricalFisherInitialization > >  (::statiskit::glm::CategoricalFisherInitialization::*method_pointer_4a291218403b561b85dc84e998ca397f)() const = &::statiskit::glm::CategoricalFisherInitialization::copy;
    boost::python::class_< autowig::Wrap_6f05ff8f5d5a54678dfff6c1f0bfabcf, autowig::Held< autowig::Wrap_6f05ff8f5d5a54678dfff6c1f0bfabcf >::Type, boost::noncopyable > class_6f05ff8f5d5a54678dfff6c1f0bfabcf("CategoricalFisherInitialization", "", boost::python::no_init);
    class_6f05ff8f5d5a54678dfff6c1f0bfabcf.def("__call__", boost::python::pure_virtual(method_pointer_f020b7c9271f52fe84de964f8f02d96e), "");
    class_6f05ff8f5d5a54678dfff6c1f0bfabcf.def("copy", boost::python::pure_virtual(method_pointer_4a291218403b561b85dc84e998ca397f), "");
    if(autowig::Held< struct ::statiskit::glm::CategoricalFisherInitialization >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6f05ff8f5d5a54678dfff6c1f0bfabcf >::Type, autowig::Held< struct ::statiskit::glm::CategoricalFisherInitialization >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::CategoricalFisherInitialization >::Type >();
    }    

}