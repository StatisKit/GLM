#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator const volatile * get_pointer<class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator const volatile >(class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7eb065eb327454469a8865456c264b9d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_b623f04a299c511b9c552307457bcda7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._constrained_ordinal_fisher_estimation");
    boost::python::object module_b623f04a299c511b9c552307457bcda7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b623f04a299c511b9c552307457bcda7.c_str()))));
    boost::python::scope().attr("_constrained_ordinal_fisher_estimation") = module_b623f04a299c511b9c552307457bcda7;
    boost::python::scope scope_b623f04a299c511b9c552307457bcda7 = module_b623f04a299c511b9c552307457bcda7;
    boost::python::class_< class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator, autowig::Held< class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator >::Type, boost::python::bases< class ::statiskit::glm::OrdinalFisherEstimation::Estimator > > class_7eb065eb327454469a8865456c264b9d("Estimator", "", boost::python::no_init);
    class_7eb065eb327454469a8865456c264b9d.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, ::statiskit::Index const & >(""));
    class_7eb065eb327454469a8865456c264b9d.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_7eb065eb327454469a8865456c264b9d.def(boost::python::init< class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator >::Type, autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator >::Type, class ::statiskit::glm::ConstrainedOrdinalFisherEstimation::Estimator > > >();
    }

}