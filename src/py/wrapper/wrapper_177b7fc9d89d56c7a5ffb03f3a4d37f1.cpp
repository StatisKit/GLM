#include "_glm.h"



namespace autowig
{
    class Wrap_177b7fc9d89d56c7a5ffb03f3a4d37f1 : public ::statiskit::glm::Design, public boost::python::wrapper< struct ::statiskit::glm::Design >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > (result);
            }
                        
            virtual class ::statiskit::glm::VectorPredictor * build_predictor(struct ::statiskit::MultivariateSampleSpace const & param_0, ::statiskit::Index const & param_1) const
            { return this->get_override("build_predictor")(param_0, param_1); }
                        
            virtual ::statiskit::Index  beta_size(class ::statiskit::UnivariateConditionalData const & param_0) const
            { return this->get_override("beta_size")(param_0); }
                        
            virtual class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >  Z_init(class ::statiskit::UnivariateConditionalData const & param_0) const
            { return this->get_override("Z_init")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_177b7fc9d89d56c7a5ffb03f3a4d37f1 const volatile * get_pointer<autowig::Wrap_177b7fc9d89d56c7a5ffb03f3a4d37f1 const volatile >(autowig::Wrap_177b7fc9d89d56c7a5ffb03f3a4d37f1 const volatile *c) { return c; }
    template <> struct ::statiskit::glm::Design const volatile * get_pointer<struct ::statiskit::glm::Design const volatile >(struct ::statiskit::glm::Design const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_177b7fc9d89d56c7a5ffb03f3a4d37f1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::vector< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > > >  (::statiskit::glm::Design::*method_pointer_e4bff1767d4c5024943c6a3e34c37298)(class ::statiskit::UnivariateConditionalData const &) const = &::statiskit::glm::Design::Z_init;
    ::statiskit::Index  (::statiskit::glm::Design::*method_pointer_03749ad541855dfdb16bf974f84e692d)(class ::statiskit::UnivariateConditionalData const &) const = &::statiskit::glm::Design::beta_size;
    class ::statiskit::glm::VectorPredictor * (::statiskit::glm::Design::*method_pointer_ca02a0be11a256df81e12e7e45b9eb90)(struct ::statiskit::MultivariateSampleSpace const &, ::statiskit::Index const &) const = &::statiskit::glm::Design::build_predictor;
    class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >  (::statiskit::glm::Design::*method_pointer_23d863b31f4659699b1bdce91783ce4d)() const = &::statiskit::glm::Design::copy;
    boost::python::class_< autowig::Wrap_177b7fc9d89d56c7a5ffb03f3a4d37f1, autowig::Held< autowig::Wrap_177b7fc9d89d56c7a5ffb03f3a4d37f1 >::Type, boost::noncopyable > class_177b7fc9d89d56c7a5ffb03f3a4d37f1("Design", "", boost::python::no_init);
    class_177b7fc9d89d56c7a5ffb03f3a4d37f1.def("z__init", boost::python::pure_virtual(method_pointer_e4bff1767d4c5024943c6a3e34c37298), "");
    class_177b7fc9d89d56c7a5ffb03f3a4d37f1.def("beta_size", boost::python::pure_virtual(method_pointer_03749ad541855dfdb16bf974f84e692d), "");
    class_177b7fc9d89d56c7a5ffb03f3a4d37f1.def("build_predictor", boost::python::pure_virtual(method_pointer_ca02a0be11a256df81e12e7e45b9eb90), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_177b7fc9d89d56c7a5ffb03f3a4d37f1.def("copy", boost::python::pure_virtual(method_pointer_23d863b31f4659699b1bdce91783ce4d), "");
    if(autowig::Held< struct ::statiskit::glm::Design >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_177b7fc9d89d56c7a5ffb03f3a4d37f1 >::Type, autowig::Held< struct ::statiskit::glm::Design >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::Design >::Type >();
    }    

}