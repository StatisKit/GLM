#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator const volatile >(class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_005f0bc8ac17550c9ebd4bde092d469a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_efd514cec17059debd45ea87f68b9065 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._constrained_nominal_fisher_estimation");
    boost::python::object module_efd514cec17059debd45ea87f68b9065(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_efd514cec17059debd45ea87f68b9065.c_str()))));
    boost::python::scope().attr("_constrained_nominal_fisher_estimation") = module_efd514cec17059debd45ea87f68b9065;
    boost::python::scope scope_efd514cec17059debd45ea87f68b9065 = module_efd514cec17059debd45ea87f68b9065;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator::*method_pointer_be709e62be965b809d2cd5736d4221a3)() const = &::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator::get_intercept_constraint;
    void  (::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator::*method_pointer_fe915edbd1fd5be28a49788f6702d04f)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator::set_intercept_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const (::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator::*method_pointer_5ef5c4e41a0652c596467caaa5ffd13a)() const = &::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator::get_slope_constraint;
    void  (::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator::*method_pointer_834210bf384258a39d7a9bfebc40674d)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator::set_slope_constraint;
    boost::python::class_< class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::NominalFisherEstimation::Estimator > > class_005f0bc8ac17550c9ebd4bde092d469a("Estimator", "", boost::python::no_init);
    class_005f0bc8ac17550c9ebd4bde092d469a.def(boost::python::init<  >(""));
    class_005f0bc8ac17550c9ebd4bde092d469a.def(boost::python::init< class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator const & >(""));
    class_005f0bc8ac17550c9ebd4bde092d469a.def("get_intercept_constraint", method_pointer_be709e62be965b809d2cd5736d4221a3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_005f0bc8ac17550c9ebd4bde092d469a.def("set_intercept_constraint", method_pointer_fe915edbd1fd5be28a49788f6702d04f, "");
    class_005f0bc8ac17550c9ebd4bde092d469a.def("get_slope_constraint", method_pointer_5ef5c4e41a0652c596467caaa5ffd13a, "");
    class_005f0bc8ac17550c9ebd4bde092d469a.def("set_slope_constraint", method_pointer_834210bf384258a39d7a9bfebc40674d, "");

    if(autowig::Held< class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::NominalFisherEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator >::Type, class ::statiskit::glm::ConstrainedNominalFisherEstimation::Estimator > > >();
    }

}