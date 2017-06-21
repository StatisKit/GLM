#include "_glm.h"



namespace autowig
{
    class Wrap_ab1a47a0d0c35de199c791da80fd401f : public ::statiskit::NominalLink, public boost::python::wrapper< struct ::statiskit::NominalLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > > (result);
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
    template <> autowig::Wrap_ab1a47a0d0c35de199c791da80fd401f const volatile * get_pointer<autowig::Wrap_ab1a47a0d0c35de199c791da80fd401f const volatile >(autowig::Wrap_ab1a47a0d0c35de199c791da80fd401f const volatile *c) { return c; }
    template <> struct ::statiskit::NominalLink const volatile * get_pointer<struct ::statiskit::NominalLink const volatile >(struct ::statiskit::NominalLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ab1a47a0d0c35de199c791da80fd401f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > >  (::statiskit::NominalLink::*method_pointer_2abcf4dab04552b69cfa1a28e330edcd)() const = &::statiskit::NominalLink::copy;
    boost::python::class_< autowig::Wrap_ab1a47a0d0c35de199c791da80fd401f, autowig::Held< autowig::Wrap_ab1a47a0d0c35de199c791da80fd401f >::Type, boost::python::bases< struct ::statiskit::VectorLink >, boost::noncopyable > class_ab1a47a0d0c35de199c791da80fd401f("NominalLink", "", boost::python::no_init);
    class_ab1a47a0d0c35de199c791da80fd401f.def("copy", boost::python::pure_virtual(method_pointer_2abcf4dab04552b69cfa1a28e330edcd), "");

    if(autowig::Held< struct ::statiskit::NominalLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ab1a47a0d0c35de199c791da80fd401f >::Type, autowig::Held< struct ::statiskit::NominalLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::NominalLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NominalLink >::Type, autowig::Held< struct ::statiskit::VectorLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::NominalLink >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::NominalLink, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::NominalLink >::Type, struct ::statiskit::NominalLink > > >();
    }

}