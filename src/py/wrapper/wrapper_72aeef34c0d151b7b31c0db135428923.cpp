#include "_glm.h"

/*

namespace autowig
{
    class Wrap_72aeef34c0d151b7b31c0db135428923 : public ::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink >, public boost::python::wrapper< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink > >
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
    template <> autowig::Wrap_72aeef34c0d151b7b31c0db135428923 const volatile * get_pointer<autowig::Wrap_72aeef34c0d151b7b31c0db135428923 const volatile >(autowig::Wrap_72aeef34c0d151b7b31c0db135428923 const volatile *c) { return c; }
    template <> class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink > const volatile * get_pointer<class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink > const volatile >(class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink > const volatile *c) { return c; }
}
    #endif
#endif

*/

void wrapper_72aeef34c0d151b7b31c0db135428923()
{

    /* std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::statiskit::glm::VectorPredictor * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_222d2a26bb0c56bd970df237aff6d23a)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink >::get_predictor;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_20bb10401e3c5f67915079a5c4eb3846)(class ::statiskit::glm::VectorPredictor const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink >::set_predictor;
    struct ::statiskit::glm::MultinomialSplittingLink * (::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_6f2f5b9eeff95d9aba3611daee5aa3b2)() const = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink >::get_link;
    void  (::statiskit::glm::GeneralizedLinearModel< ::statiskit::glm::SplittingOperator, ::statiskit::glm::MultinomialSplittingLink >::*method_pointer_36325dbf480e5ea199212d8ad59f23ea)(struct ::statiskit::glm::MultinomialSplittingLink const &) = &::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink >::set_link;
    boost::python::class_< autowig::Wrap_72aeef34c0d151b7b31c0db135428923, autowig::Held< autowig::Wrap_72aeef34c0d151b7b31c0db135428923 >::Type, boost::python::bases< struct ::statiskit::glm::SplittingOperator >, boost::noncopyable > class_72aeef34c0d151b7b31c0db135428923("_GeneralizedLinearModel_72aeef34c0d151b7b31c0db135428923", "", boost::python::no_init);
    class_72aeef34c0d151b7b31c0db135428923.def("get_predictor", method_pointer_222d2a26bb0c56bd970df237aff6d23a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72aeef34c0d151b7b31c0db135428923.def("set_predictor", method_pointer_20bb10401e3c5f67915079a5c4eb3846, "");
    class_72aeef34c0d151b7b31c0db135428923.def("get_link", method_pointer_6f2f5b9eeff95d9aba3611daee5aa3b2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_72aeef34c0d151b7b31c0db135428923.def("set_link", method_pointer_36325dbf480e5ea199212d8ad59f23ea, "");

    if(autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_72aeef34c0d151b7b31c0db135428923 >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::glm::SplittingOperator, struct ::statiskit::glm::MultinomialSplittingLink > >::Type, autowig::Held< struct ::statiskit::glm::SplittingOperator >::Type >();
    }*/

}