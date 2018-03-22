#include "_glm.h"


/*
namespace autowig
{
    class Wrap_28f80f898e6c584a93311df12cd2a744 : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::glm::SplittingOperator, struct ::std::default_delete< struct ::statiskit::glm::SplittingOperator > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        

        protected:
            
            virtual void  update(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_28f80f898e6c584a93311df12cd2a744 const volatile * get_pointer<autowig::Wrap_28f80f898e6c584a93311df12cd2a744 const volatile >(autowig::Wrap_28f80f898e6c584a93311df12cd2a744 const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > const volatile *c) { return c; }
}
    #endif
#endif
*/


void wrapper_28f80f898e6c584a93311df12cd2a744()
{

    /* std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::glm::VectorPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, ::statiskit::glm::DirichletMultinomialSplittingLink >::*method_pointer_b9df5073c20958c19345bce133345ba9)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, ::statiskit::glm::DirichletMultinomialSplittingLink >::*method_pointer_8c8bc6da1ebb5f1f89b2a7da87c96b30)(class ::statiskit::glm::VectorPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink >::set_predictor;
    struct ::statiskit::glm::DirichletMultinomialSplittingLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, ::statiskit::glm::DirichletMultinomialSplittingLink >::*method_pointer_f28e08f5bab256caa2ccb52ab7e06a7d)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, ::statiskit::glm::DirichletMultinomialSplittingLink >::*method_pointer_1c0828e755525804a0fd3b4756650cf6)(struct ::statiskit::glm::DirichletMultinomialSplittingLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink >::set_link;
    boost::python::class_< autowig::Wrap_28f80f898e6c584a93311df12cd2a744, autowig::Held< autowig::Wrap_28f80f898e6c584a93311df12cd2a744 >::Type, boost::python::bases< struct ::statiskit::glm::SplittingOperator >, boost::noncopyable > class_28f80f898e6c584a93311df12cd2a744("_GeneralizedLinearModel_28f80f898e6c584a93311df12cd2a744", "", boost::python::no_init);
    class_28f80f898e6c584a93311df12cd2a744.def("get_predictor", method_pointer_b9df5073c20958c19345bce133345ba9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_28f80f898e6c584a93311df12cd2a744.def("set_predictor", method_pointer_8c8bc6da1ebb5f1f89b2a7da87c96b30, "");
    class_28f80f898e6c584a93311df12cd2a744.def("get_link", method_pointer_f28e08f5bab256caa2ccb52ab7e06a7d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_28f80f898e6c584a93311df12cd2a744.def("set_link", method_pointer_1c0828e755525804a0fd3b4756650cf6, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_28f80f898e6c584a93311df12cd2a744 >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::DirichletMultinomialSplittingLink > >::Type, autowig::Held< struct ::statiskit::glm::SplittingOperator >::Type >();
    }*/

}