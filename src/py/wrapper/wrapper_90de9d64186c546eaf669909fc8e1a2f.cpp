#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile >(class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_90de9d64186c546eaf669909fc8e1a2f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_e49b3f4b1f335f499b0061695cde8fef = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__cumulative_fisher_estimation_e49b3f4b1f335f499b0061695cde8fef");
    boost::python::object module_e49b3f4b1f335f499b0061695cde8fef(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e49b3f4b1f335f499b0061695cde8fef.c_str()))));
    boost::python::scope().attr("__cumulative_fisher_estimation_e49b3f4b1f335f499b0061695cde8fef") = module_e49b3f4b1f335f499b0061695cde8fef;
    boost::python::scope scope_e49b3f4b1f335f499b0061695cde8fef = module_e49b3f4b1f335f499b0061695cde8fef;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::CumulativeFisherEstimation< ::statiskit::glm::CompleteFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_fe72573b9e6f57df9e2a920923c4fa3d)() const = &::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::get_beta_init;
    void  (::statiskit::glm::CumulativeFisherEstimation< ::statiskit::glm::CompleteFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_0fdb18220971545b87676145babd6db8)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::set_beta_init;
    boost::python::class_< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::bases< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > class_90de9d64186c546eaf669909fc8e1a2f("Estimator", "", boost::python::no_init);
    class_90de9d64186c546eaf669909fc8e1a2f.def(boost::python::init<  >(""));
    class_90de9d64186c546eaf669909fc8e1a2f.def(boost::python::init< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const & >(""));
    class_90de9d64186c546eaf669909fc8e1a2f.def("get_beta_init", method_pointer_fe72573b9e6f57df9e2a920923c4fa3d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_90de9d64186c546eaf669909fc8e1a2f.def("set_beta_init", method_pointer_0fdb18220971545b87676145babd6db8, "");

    if(autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, class ::statiskit::glm::CumulativeFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > >();
    }

}