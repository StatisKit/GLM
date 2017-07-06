#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile >(class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4342be3e13a0560b89cecd3546178608()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_d719df240ee35eb29a433f245da357b2 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__cumulative_regression_fisher_estimation_d719df240ee35eb29a433f245da357b2");
    boost::python::object module_d719df240ee35eb29a433f245da357b2(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d719df240ee35eb29a433f245da357b2.c_str()))));
    boost::python::scope().attr("__cumulative_regression_fisher_estimation_d719df240ee35eb29a433f245da357b2") = module_d719df240ee35eb29a433f245da357b2;
    boost::python::scope scope_d719df240ee35eb29a433f245da357b2 = module_d719df240ee35eb29a433f245da357b2;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::CumulativeRegressionFisherEstimation< ::statiskit::glm::CompleteRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_28f59a96c4be52f7b7f9cef96961be46)() const = &::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::get_beta_init;
    void  (::statiskit::glm::CumulativeRegressionFisherEstimation< ::statiskit::glm::CompleteRegressionFisherEstimation< ::statiskit::glm::OrdinalRegression > >::Estimator::*method_pointer_10d387e5d67a537c98fbaf54b0f8ec59)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator::set_beta_init;
    boost::python::class_< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::bases< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > class_4342be3e13a0560b89cecd3546178608("Estimator", "", boost::python::no_init);
    class_4342be3e13a0560b89cecd3546178608.def(boost::python::init<  >(""));
    class_4342be3e13a0560b89cecd3546178608.def(boost::python::init< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const & >(""));
    class_4342be3e13a0560b89cecd3546178608.def("get_beta_init", method_pointer_28f59a96c4be52f7b7f9cef96961be46, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4342be3e13a0560b89cecd3546178608.def("set_beta_init", method_pointer_10d387e5d67a537c98fbaf54b0f8ec59, "");

    if(autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CumulativeRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, autowig::Held< class ::statiskit::glm::OrdinalRegressionFisherEstimation< class ::statiskit::glm::CompleteRegressionFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type >();
    }

}