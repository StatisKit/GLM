#include "_glm.h"



namespace autowig
{
    class Wrap_38c14bdcf2585318bf8d4b6f049ff4eb : public ::statiskit::ScalarPredictor, public boost::python::wrapper< class ::statiskit::ScalarPredictor >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > >  copy() const
            {
                 ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > > (result);
            }
                        
            virtual void  set_beta(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) 
            { this->get_override("set_beta")(param_0); }
                        
            virtual ::std::size_t  size() const
            { return this->get_override("size")(); }
                        
            virtual double  operator()(struct ::statiskit::MultivariateEvent const & param_0) const
            { return this->get_override("operator()")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_38c14bdcf2585318bf8d4b6f049ff4eb const volatile * get_pointer<autowig::Wrap_38c14bdcf2585318bf8d4b6f049ff4eb const volatile >(autowig::Wrap_38c14bdcf2585318bf8d4b6f049ff4eb const volatile *c) { return c; }
    template <> class ::statiskit::ScalarPredictor const volatile * get_pointer<class ::statiskit::ScalarPredictor const volatile >(class ::statiskit::ScalarPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_38c14bdcf2585318bf8d4b6f049ff4eb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::ScalarPredictor::*method_pointer_9a01faeda47f5759a05af1e616c1f129)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::ScalarPredictor::operator();
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::ScalarPredictor::*method_pointer_de95c08e8e775e3a93e207eb56fd6681)() const = &::statiskit::ScalarPredictor::get_explanatory_space;
    ::std::size_t  (::statiskit::ScalarPredictor::*method_pointer_f53209947dd75469bfacdbb6b6b5b031)() const = &::statiskit::ScalarPredictor::size;
    void  (::statiskit::ScalarPredictor::*method_pointer_379ff6797392528bb8439f015c964433)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::ScalarPredictor::set_beta;
    class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > >  (::statiskit::ScalarPredictor::*method_pointer_bfa539fde77a5caaa4c146e1dd6ed831)() const = &::statiskit::ScalarPredictor::copy;
    boost::python::class_< autowig::Wrap_38c14bdcf2585318bf8d4b6f049ff4eb, autowig::Held< autowig::Wrap_38c14bdcf2585318bf8d4b6f049ff4eb >::Type, boost::noncopyable > class_38c14bdcf2585318bf8d4b6f049ff4eb("ScalarPredictor", "", boost::python::no_init);
    class_38c14bdcf2585318bf8d4b6f049ff4eb.def("__call__", boost::python::pure_virtual(method_pointer_9a01faeda47f5759a05af1e616c1f129), ":Parameter:\n    `event` (:py:class:`statiskit.core.statiskit.MultivariateEvent`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_38c14bdcf2585318bf8d4b6f049ff4eb.def("get_explanatory_space", method_pointer_de95c08e8e775e3a93e207eb56fd6681, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`statiskit.core.statiskit.MultivariateSampleSpace`\n\n");
    class_38c14bdcf2585318bf8d4b6f049ff4eb.def("__len__", boost::python::pure_virtual(method_pointer_f53209947dd75469bfacdbb6b6b5b031), ":Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_38c14bdcf2585318bf8d4b6f049ff4eb.def("set_beta", boost::python::pure_virtual(method_pointer_379ff6797392528bb8439f015c964433), ":Parameter:\n    `beta` (:cpp:any:`::Eigen::Matrix<` double, -1, 1, 0, -1, 1 >) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_38c14bdcf2585318bf8d4b6f049ff4eb.def("copy", boost::python::pure_virtual(method_pointer_bfa539fde77a5caaa4c146e1dd6ed831), "");
    if(autowig::Held< class ::statiskit::ScalarPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_38c14bdcf2585318bf8d4b6f049ff4eb >::Type, autowig::Held< class ::statiskit::ScalarPredictor >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::ScalarPredictor >::Type >();
    }    

}