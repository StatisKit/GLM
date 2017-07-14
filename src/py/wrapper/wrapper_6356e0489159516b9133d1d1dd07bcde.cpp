#include "_glm.h"



namespace autowig
{
    class Wrap_6356e0489159516b9133d1d1dd07bcde : public ::statiskit::glm::VectorPredictor, public boost::python::wrapper< class ::statiskit::glm::VectorPredictor >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > >  copy() const
            {
                 ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > > (result);
            }
                        
            virtual void  set_beta(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) 
            { this->get_override("set_beta")(param_0); }
                        
            virtual ::std::size_t  size() const
            { return this->get_override("size")(); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  operator()(struct ::statiskit::MultivariateEvent const & param_0) const
            { return this->get_override("operator()")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_6356e0489159516b9133d1d1dd07bcde const volatile * get_pointer<autowig::Wrap_6356e0489159516b9133d1d1dd07bcde const volatile >(autowig::Wrap_6356e0489159516b9133d1d1dd07bcde const volatile *c) { return c; }
    template <> class ::statiskit::glm::VectorPredictor const volatile * get_pointer<class ::statiskit::glm::VectorPredictor const volatile >(class ::statiskit::glm::VectorPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6356e0489159516b9133d1d1dd07bcde()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::VectorPredictor::*method_pointer_c3265cf8b91853b5be3de8d2e1879f08)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::glm::VectorPredictor::operator();
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::glm::VectorPredictor::*method_pointer_d457448609cf54998618eecd892d2cf0)() const = &::statiskit::glm::VectorPredictor::get_explanatory_space;
    ::std::size_t  (::statiskit::glm::VectorPredictor::*method_pointer_1c449a959dbb552caddfd4ed914dff0e)() const = &::statiskit::glm::VectorPredictor::size;
    void  (::statiskit::glm::VectorPredictor::*method_pointer_3b104098b01953909fdd9bee65b43fb3)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::VectorPredictor::set_beta;
    class ::std::unique_ptr< class ::statiskit::glm::VectorPredictor, struct ::std::default_delete< class ::statiskit::glm::VectorPredictor > >  (::statiskit::glm::VectorPredictor::*method_pointer_9842cd621fa45643b5653484f01bd2e0)() const = &::statiskit::glm::VectorPredictor::copy;
    boost::python::class_< autowig::Wrap_6356e0489159516b9133d1d1dd07bcde, autowig::Held< autowig::Wrap_6356e0489159516b9133d1d1dd07bcde >::Type, boost::noncopyable > class_6356e0489159516b9133d1d1dd07bcde("VectorPredictor", "", boost::python::no_init);
    class_6356e0489159516b9133d1d1dd07bcde.def("__call__", boost::python::pure_virtual(method_pointer_c3265cf8b91853b5be3de8d2e1879f08), "");
    class_6356e0489159516b9133d1d1dd07bcde.def("get_explanatory_space", method_pointer_d457448609cf54998618eecd892d2cf0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6356e0489159516b9133d1d1dd07bcde.def("__len__", boost::python::pure_virtual(method_pointer_1c449a959dbb552caddfd4ed914dff0e), "");
    class_6356e0489159516b9133d1d1dd07bcde.def("set_beta", boost::python::pure_virtual(method_pointer_3b104098b01953909fdd9bee65b43fb3), "");
    class_6356e0489159516b9133d1d1dd07bcde.def("copy", boost::python::pure_virtual(method_pointer_9842cd621fa45643b5653484f01bd2e0), "");
    if(autowig::Held< class ::statiskit::glm::VectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6356e0489159516b9133d1d1dd07bcde >::Type, autowig::Held< class ::statiskit::glm::VectorPredictor >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::VectorPredictor >::Type >();
    }    

}