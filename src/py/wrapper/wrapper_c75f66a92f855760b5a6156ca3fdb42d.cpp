#include "_glm.h"



namespace autowig
{
    class Wrap_c75f66a92f855760b5a6156ca3fdb42d : public ::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > >
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
    template <> autowig::Wrap_c75f66a92f855760b5a6156ca3fdb42d const volatile * get_pointer<autowig::Wrap_c75f66a92f855760b5a6156ca3fdb42d const volatile >(autowig::Wrap_c75f66a92f855760b5a6156ca3fdb42d const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c75f66a92f855760b5a6156ca3fdb42d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_f2b465036dfa56ff8913940fcca22350)() const = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_863e37976d285a889094820105e002f0)(double const &) = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_47a7a8e2b1b450bcb7bcc27a4ffc17e1)() const = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_0f1d5c89b9aa5bff92b608e54a7add28)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_13ac5a0eabb656d6b0791f42fbd2fc0d)() const = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::*method_pointer_2d50e74ecbfd564385213f71fca423d9)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_c75f66a92f855760b5a6156ca3fdb42d, autowig::Held< autowig::Wrap_c75f66a92f855760b5a6156ca3fdb42d >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_c75f66a92f855760b5a6156ca3fdb42d("_Optimization_c75f66a92f855760b5a6156ca3fdb42d", "", boost::python::no_init);
    class_c75f66a92f855760b5a6156ca3fdb42d.def("get_mindiff", method_pointer_f2b465036dfa56ff8913940fcca22350, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("set_mindiff", method_pointer_863e37976d285a889094820105e002f0, "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("get_minits", method_pointer_47a7a8e2b1b450bcb7bcc27a4ffc17e1, "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("set_minits", method_pointer_0f1d5c89b9aa5bff92b608e54a7add28, "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("get_maxits", method_pointer_13ac5a0eabb656d6b0791f42fbd2fc0d, "");
    class_c75f66a92f855760b5a6156ca3fdb42d.def("set_maxits", method_pointer_2d50e74ecbfd564385213f71fca423d9, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c75f66a92f855760b5a6156ca3fdb42d >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}