#include "_glm.h"



namespace autowig
{
    class Wrap_a6c64393f4485dc4a9c35c09f28b98bb : public ::statiskit::glm::DirichletMultinomialSplittingLink, public boost::python::wrapper< struct ::statiskit::glm::DirichletMultinomialSplittingLink >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::DirichletMultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::DirichletMultinomialSplittingLink > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::DirichletMultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::DirichletMultinomialSplittingLink > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::DirichletMultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::DirichletMultinomialSplittingLink > > (result);
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
    template <> autowig::Wrap_a6c64393f4485dc4a9c35c09f28b98bb const volatile * get_pointer<autowig::Wrap_a6c64393f4485dc4a9c35c09f28b98bb const volatile >(autowig::Wrap_a6c64393f4485dc4a9c35c09f28b98bb const volatile *c) { return c; }
    template <> struct ::statiskit::glm::DirichletMultinomialSplittingLink const volatile * get_pointer<struct ::statiskit::glm::DirichletMultinomialSplittingLink const volatile >(struct ::statiskit::glm::DirichletMultinomialSplittingLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a6c64393f4485dc4a9c35c09f28b98bb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::std::unique_ptr< struct ::statiskit::glm::DirichletMultinomialSplittingLink, struct ::std::default_delete< struct ::statiskit::glm::DirichletMultinomialSplittingLink > >  (::statiskit::glm::DirichletMultinomialSplittingLink::*method_pointer_42d8151ddacd54dd9788698be10245bf)() const = &::statiskit::glm::DirichletMultinomialSplittingLink::copy;
    boost::python::class_< autowig::Wrap_a6c64393f4485dc4a9c35c09f28b98bb, autowig::Held< autowig::Wrap_a6c64393f4485dc4a9c35c09f28b98bb >::Type, boost::python::bases< struct ::statiskit::glm::VectorLink >, boost::noncopyable > class_a6c64393f4485dc4a9c35c09f28b98bb("DirichletMultinomialSplittingLink", "", boost::python::no_init);
    class_a6c64393f4485dc4a9c35c09f28b98bb.def("copy", boost::python::pure_virtual(method_pointer_42d8151ddacd54dd9788698be10245bf), "");

    if(autowig::Held< struct ::statiskit::glm::DirichletMultinomialSplittingLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a6c64393f4485dc4a9c35c09f28b98bb >::Type, autowig::Held< struct ::statiskit::glm::DirichletMultinomialSplittingLink >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::DirichletMultinomialSplittingLink >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::DirichletMultinomialSplittingLink >::Type, autowig::Held< struct ::statiskit::glm::VectorLink >::Type >();
    }

}