#include "_glm.h"



namespace autowig
{
    class Wrap_8510686a608159948096dea78e55e4f7 : public ::statiskit::OrdinalLink, public boost::python::wrapper< struct ::statiskit::OrdinalLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > > (result);
            }
                        
            virtual class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  inverse_derivative(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse_derivative")(param_0); }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  inverse(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { return this->get_override("inverse")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_8510686a608159948096dea78e55e4f7 const volatile * get_pointer<autowig::Wrap_8510686a608159948096dea78e55e4f7 const volatile >(autowig::Wrap_8510686a608159948096dea78e55e4f7 const volatile *c) { return c; }
    template <> struct ::statiskit::OrdinalLink const volatile * get_pointer<struct ::statiskit::OrdinalLink const volatile >(struct ::statiskit::OrdinalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8510686a608159948096dea78e55e4f7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > >  (::statiskit::OrdinalLink::*method_pointer_6508823fb5bd5d6da411112ddb1569db)() const = &::statiskit::OrdinalLink::copy;
    boost::python::class_< autowig::Wrap_8510686a608159948096dea78e55e4f7, autowig::Held< autowig::Wrap_8510686a608159948096dea78e55e4f7 >::Type, boost::python::bases< struct ::statiskit::VectorLink >, boost::noncopyable > class_8510686a608159948096dea78e55e4f7("OrdinalLink", "", boost::python::no_init);
    class_8510686a608159948096dea78e55e4f7.def("copy", boost::python::pure_virtual(method_pointer_6508823fb5bd5d6da411112ddb1569db), "");

    if(autowig::Held< struct ::statiskit::OrdinalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_8510686a608159948096dea78e55e4f7 >::Type, autowig::Held< struct ::statiskit::OrdinalLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::OrdinalLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OrdinalLink >::Type, autowig::Held< struct ::statiskit::VectorLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OrdinalLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OrdinalLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OrdinalLink >::Type, struct ::statiskit::OrdinalLink > > >();
    }

}