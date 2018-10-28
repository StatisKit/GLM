#include "_glm.h"



namespace autowig
{
    class Wrap_025efe7e48555e478bf7609c68a39f12 : public ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > >
    {
        public:
            
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
    template <> autowig::Wrap_025efe7e48555e478bf7609c68a39f12 const volatile * get_pointer<autowig::Wrap_025efe7e48555e478bf7609c68a39f12 const volatile >(autowig::Wrap_025efe7e48555e478bf7609c68a39f12 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_025efe7e48555e478bf7609c68a39f12()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_025efe7e48555e478bf7609c68a39f12, autowig::Held< autowig::Wrap_025efe7e48555e478bf7609c68a39f12 >::Type, boost::python::bases< struct ::statiskit::glm::CategoricalFisherInitialization >, boost::noncopyable > class_025efe7e48555e478bf7609c68a39f12("_PolymorphicCopy_025efe7e48555e478bf7609c68a39f12", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_025efe7e48555e478bf7609c68a39f12 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > >::Type, autowig::Held< struct ::statiskit::glm::CategoricalFisherInitialization >::Type >();
    }

}