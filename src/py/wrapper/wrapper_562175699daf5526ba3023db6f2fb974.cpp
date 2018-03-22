#include "_glm.h"


/*
namespace autowig
{
    class Wrap_562175699daf5526ba3023db6f2fb974 : public ::statiskit::glm::SplittingOperator, public boost::python::wrapper< struct ::statiskit::glm::SplittingOperator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > > (result);
            }
                        
            virtual struct ::statiskit::MultivariateSampleSpace const * get_explanatory_space() const
            { return this->get_override("get_explanatory_space")(); }
                        
            virtual struct ::statiskit::SplittingOperator const * operator()(struct ::statiskit::MultivariateEvent const & param_0) const
            { return this->get_override("operator()")(param_0); }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_562175699daf5526ba3023db6f2fb974 const volatile * get_pointer<autowig::Wrap_562175699daf5526ba3023db6f2fb974 const volatile >(autowig::Wrap_562175699daf5526ba3023db6f2fb974 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::SplittingOperator const volatile * get_pointer<struct ::statiskit::glm::SplittingOperator const volatile >(struct ::statiskit::glm::SplittingOperator const volatile *c) { return c; }
}
    #endif
#endif
*/


void wrapper_562175699daf5526ba3023db6f2fb974()
{

    /*std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    ::statiskit::Index  (::statiskit::glm::SplittingOperator::*method_pointer_c0b76aefcd7a5bb59e360ec030aac4be)() const = &::statiskit::glm::SplittingOperator::get_nb_components;
    unsigned int  (::statiskit::glm::SplittingOperator::*method_pointer_a7436b06dfde5deb817883dccc879378)() const = &::statiskit::glm::SplittingOperator::get_nb_parameters;
    struct ::statiskit::SplittingOperator const * (::statiskit::glm::SplittingOperator::*method_pointer_90cfeb671bd551ffbb37c5461b93feb2)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::glm::SplittingOperator::operator();
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::glm::SplittingOperator::*method_pointer_fcb6360d26e659e992af77b52b47cf91)() const = &::statiskit::glm::SplittingOperator::get_explanatory_space;
    class ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > >  (::statiskit::glm::SplittingOperator::*method_pointer_272baa75fb055e6595d53cf321d840bb)() const = &::statiskit::glm::SplittingOperator::copy;
    boost::python::class_< autowig::Wrap_562175699daf5526ba3023db6f2fb974, autowig::Held< autowig::Wrap_562175699daf5526ba3023db6f2fb974 >::Type, boost::noncopyable > class_562175699daf5526ba3023db6f2fb974("SplittingOperator", "", boost::python::no_init);
    class_562175699daf5526ba3023db6f2fb974.def("get_nb_components", boost::python::pure_virtual(method_pointer_c0b76aefcd7a5bb59e360ec030aac4be), "");
    class_562175699daf5526ba3023db6f2fb974.def("get_nb_parameters", boost::python::pure_virtual(method_pointer_a7436b06dfde5deb817883dccc879378), "");
    class_562175699daf5526ba3023db6f2fb974.def("__call__", boost::python::pure_virtual(method_pointer_90cfeb671bd551ffbb37c5461b93feb2), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_562175699daf5526ba3023db6f2fb974.def("get_explanatory_space", boost::python::pure_virtual(method_pointer_fcb6360d26e659e992af77b52b47cf91), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_562175699daf5526ba3023db6f2fb974.def("copy", boost::python::pure_virtual(method_pointer_272baa75fb055e6595d53cf321d840bb), "");
    if(autowig::Held< struct ::statiskit::glm::SplittingOperator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_562175699daf5526ba3023db6f2fb974 >::Type, autowig::Held< struct ::statiskit::glm::SplittingOperator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::SplittingOperator >::Type >();
    }  */  

}