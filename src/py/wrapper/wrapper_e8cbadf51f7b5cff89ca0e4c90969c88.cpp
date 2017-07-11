#include "_glm.h"



namespace autowig
{
    class Wrap_e8cbadf51f7b5cff89ca0e4c90969c88 : public ::statiskit::glm::ScalarPredictor, public boost::python::wrapper< class ::statiskit::glm::ScalarPredictor >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > >  copy() const
            {
                 ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > > (result);
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
    template <> autowig::Wrap_e8cbadf51f7b5cff89ca0e4c90969c88 const volatile * get_pointer<autowig::Wrap_e8cbadf51f7b5cff89ca0e4c90969c88 const volatile >(autowig::Wrap_e8cbadf51f7b5cff89ca0e4c90969c88 const volatile *c) { return c; }
    template <> class ::statiskit::glm::ScalarPredictor const volatile * get_pointer<class ::statiskit::glm::ScalarPredictor const volatile >(class ::statiskit::glm::ScalarPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e8cbadf51f7b5cff89ca0e4c90969c88()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    double  (::statiskit::glm::ScalarPredictor::*method_pointer_ddc10ab20902504cbf4b89f77023cf3f)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::glm::ScalarPredictor::operator();
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::glm::ScalarPredictor::*method_pointer_73d58e5e98e456229ea416694ebb0309)() const = &::statiskit::glm::ScalarPredictor::get_explanatory_space;
    ::std::size_t  (::statiskit::glm::ScalarPredictor::*method_pointer_7f0b50af37a55104a0d518733c75a7d6)() const = &::statiskit::glm::ScalarPredictor::size;
    void  (::statiskit::glm::ScalarPredictor::*method_pointer_e195a23dc69c5ffeb4668af9d5027215)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::ScalarPredictor::set_beta;
    class ::std::unique_ptr< class ::statiskit::glm::ScalarPredictor, struct ::std::default_delete< class ::statiskit::glm::ScalarPredictor > >  (::statiskit::glm::ScalarPredictor::*method_pointer_0f660bb3ff275656a2cbd86751fe4a16)() const = &::statiskit::glm::ScalarPredictor::copy;
    boost::python::class_< autowig::Wrap_e8cbadf51f7b5cff89ca0e4c90969c88, autowig::Held< autowig::Wrap_e8cbadf51f7b5cff89ca0e4c90969c88 >::Type, boost::noncopyable > class_e8cbadf51f7b5cff89ca0e4c90969c88("ScalarPredictor", "", boost::python::no_init);
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("__call__", boost::python::pure_virtual(method_pointer_ddc10ab20902504cbf4b89f77023cf3f), ":Parameter:\n    `event` (:py:class:`statiskit.core.statiskit.MultivariateEvent`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("get_explanatory_space", method_pointer_73d58e5e98e456229ea416694ebb0309, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`statiskit.core.statiskit.MultivariateSampleSpace`\n\n");
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("__len__", boost::python::pure_virtual(method_pointer_7f0b50af37a55104a0d518733c75a7d6), ":Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("set_beta", boost::python::pure_virtual(method_pointer_e195a23dc69c5ffeb4668af9d5027215), ":Parameter:\n    `beta` (:cpp:any:`::Eigen::Matrix<` double, -1, 1, 0, -1, 1 >) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_e8cbadf51f7b5cff89ca0e4c90969c88.def("copy", boost::python::pure_virtual(method_pointer_0f660bb3ff275656a2cbd86751fe4a16), "");
    if(autowig::Held< class ::statiskit::glm::ScalarPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e8cbadf51f7b5cff89ca0e4c90969c88 >::Type, autowig::Held< class ::statiskit::glm::ScalarPredictor >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ScalarPredictor >::Type >();
    }    

}