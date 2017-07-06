#include "_glm.h"



namespace autowig
{
    class Wrap_545687efcf9f526d878857acd5ecb84d : public ::statiskit::VectorPredictor, public boost::python::wrapper< class ::statiskit::VectorPredictor >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > >  copy() const
            {
                 ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > > (result);
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
    template <> autowig::Wrap_545687efcf9f526d878857acd5ecb84d const volatile * get_pointer<autowig::Wrap_545687efcf9f526d878857acd5ecb84d const volatile >(autowig::Wrap_545687efcf9f526d878857acd5ecb84d const volatile *c) { return c; }
    template <> class ::statiskit::VectorPredictor const volatile * get_pointer<class ::statiskit::VectorPredictor const volatile >(class ::statiskit::VectorPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_545687efcf9f526d878857acd5ecb84d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::VectorPredictor::*method_pointer_74f9c984ef39596c891bf040f2f3fe35)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::VectorPredictor::operator();
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::VectorPredictor::*method_pointer_de0a3ade0f5056399eacb29973c37062)() const = &::statiskit::VectorPredictor::get_explanatory_space;
    ::std::size_t  (::statiskit::VectorPredictor::*method_pointer_3ccdd593e7b4512daec6ac6417a7b5cd)() const = &::statiskit::VectorPredictor::size;
    void  (::statiskit::VectorPredictor::*method_pointer_c0ab051f12f65e2da75bd3a5e9230bf3)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::VectorPredictor::set_beta;
    class ::std::unique_ptr< class ::statiskit::VectorPredictor, struct ::std::default_delete< class ::statiskit::VectorPredictor > >  (::statiskit::VectorPredictor::*method_pointer_d47c4bc259d651218fdc3becc1f17553)() const = &::statiskit::VectorPredictor::copy;
    boost::python::class_< autowig::Wrap_545687efcf9f526d878857acd5ecb84d, autowig::Held< autowig::Wrap_545687efcf9f526d878857acd5ecb84d >::Type, boost::noncopyable > class_545687efcf9f526d878857acd5ecb84d("VectorPredictor", "", boost::python::no_init);
    class_545687efcf9f526d878857acd5ecb84d.def("__call__", boost::python::pure_virtual(method_pointer_74f9c984ef39596c891bf040f2f3fe35), "");
    class_545687efcf9f526d878857acd5ecb84d.def("get_explanatory_space", method_pointer_de0a3ade0f5056399eacb29973c37062, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_545687efcf9f526d878857acd5ecb84d.def("__len__", boost::python::pure_virtual(method_pointer_3ccdd593e7b4512daec6ac6417a7b5cd), "");
    class_545687efcf9f526d878857acd5ecb84d.def("set_beta", boost::python::pure_virtual(method_pointer_c0ab051f12f65e2da75bd3a5e9230bf3), "");
    class_545687efcf9f526d878857acd5ecb84d.def("copy", boost::python::pure_virtual(method_pointer_d47c4bc259d651218fdc3becc1f17553), "");
    if(autowig::Held< class ::statiskit::VectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_545687efcf9f526d878857acd5ecb84d >::Type, autowig::Held< class ::statiskit::VectorPredictor >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::VectorPredictor >::Type >();
    }    

}