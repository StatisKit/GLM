#include "_glm.h"



namespace autowig
{
    class Wrap_f40a7b30b47658729713ceb9ec73f8eb : public ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::NominalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
            { return this->get_override("build_estimated")(param_0, param_1, param_2); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_f40a7b30b47658729713ceb9ec73f8eb const volatile * get_pointer<autowig::Wrap_f40a7b30b47658729713ceb9ec73f8eb const volatile >(autowig::Wrap_f40a7b30b47658729713ceb9ec73f8eb const volatile *c) { return c; }
    template <> class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile >(class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f40a7b30b47658729713ceb9ec73f8eb()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_6858442483075290b486c3d606cb0c54 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__proportional_fisher_estimation_6858442483075290b486c3d606cb0c54");
    boost::python::object module_6858442483075290b486c3d606cb0c54(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6858442483075290b486c3d606cb0c54.c_str()))));
    boost::python::scope().attr("__proportional_fisher_estimation_6858442483075290b486c3d606cb0c54") = module_6858442483075290b486c3d606cb0c54;
    boost::python::scope scope_6858442483075290b486c3d606cb0c54 = module_6858442483075290b486c3d606cb0c54;
    boost::python::class_< autowig::Wrap_f40a7b30b47658729713ceb9ec73f8eb, autowig::Held< autowig::Wrap_f40a7b30b47658729713ceb9ec73f8eb >::Type, boost::python::bases< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >, boost::noncopyable > class_f40a7b30b47658729713ceb9ec73f8eb("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f40a7b30b47658729713ceb9ec73f8eb >::Type, autowig::Held< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, class ::statiskit::glm::ProportionalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > > >();
    }

}