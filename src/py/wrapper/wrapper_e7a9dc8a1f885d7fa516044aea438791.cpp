#include "_glm.h"



namespace autowig
{
    class Wrap_e7a9dc8a1f885d7fa516044aea438791 : public ::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  operator()(::statiskit::UnivariateConditionalDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_e7a9dc8a1f885d7fa516044aea438791 const volatile * get_pointer<autowig::Wrap_e7a9dc8a1f885d7fa516044aea438791 const volatile >(autowig::Wrap_e7a9dc8a1f885d7fa516044aea438791 const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e7a9dc8a1f885d7fa516044aea438791()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_d4f577b3d83a5ba2a1173c7e92ae56af)() const = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_c06e92ca269a5a03ab0e27dc44995121)(double const &) = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_36778e935ac35c7595e8b322a68306b0)() const = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_2f290d8728335379872400a59a9db937)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_2d6b96bd255b5aabbad1426895b50b7f)() const = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_af2f3f7662175f1aad66febca1054ec4)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_e7a9dc8a1f885d7fa516044aea438791, autowig::Held< autowig::Wrap_e7a9dc8a1f885d7fa516044aea438791 >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_e7a9dc8a1f885d7fa516044aea438791("_Optimization_e7a9dc8a1f885d7fa516044aea438791", "", boost::python::no_init);
    class_e7a9dc8a1f885d7fa516044aea438791.def("get_mindiff", method_pointer_d4f577b3d83a5ba2a1173c7e92ae56af, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("set_mindiff", method_pointer_c06e92ca269a5a03ab0e27dc44995121, "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("get_minits", method_pointer_36778e935ac35c7595e8b322a68306b0, "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("set_minits", method_pointer_2f290d8728335379872400a59a9db937, "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("get_maxits", method_pointer_2d6b96bd255b5aabbad1426895b50b7f, "");
    class_e7a9dc8a1f885d7fa516044aea438791.def("set_maxits", method_pointer_af2f3f7662175f1aad66febca1054ec4, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e7a9dc8a1f885d7fa516044aea438791 >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}