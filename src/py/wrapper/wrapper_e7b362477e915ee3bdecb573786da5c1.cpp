#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile >(class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e7b362477e915ee3bdecb573786da5c1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_bd5e1077c5de561c836dc6e9be56f97b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__ordinal_fisher_estimation_bd5e1077c5de561c836dc6e9be56f97b");
    boost::python::object module_bd5e1077c5de561c836dc6e9be56f97b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_bd5e1077c5de561c836dc6e9be56f97b.c_str()))));
    boost::python::scope().attr("__ordinal_fisher_estimation_bd5e1077c5de561c836dc6e9be56f97b") = module_bd5e1077c5de561c836dc6e9be56f97b;
    boost::python::scope scope_bd5e1077c5de561c836dc6e9be56f97b = module_bd5e1077c5de561c836dc6e9be56f97b;
    boost::python::class_< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::bases< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator > > class_e7b362477e915ee3bdecb573786da5c1("Estimator", "", boost::python::no_init);
    class_e7b362477e915ee3bdecb573786da5c1.def(boost::python::init<  >(""));
    class_e7b362477e915ee3bdecb573786da5c1.def(boost::python::init< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, autowig::Held< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator >::Type, class ::statiskit::glm::OrdinalFisherEstimation< class ::statiskit::glm::ConstrainedFisherEstimation< class ::statiskit::glm::OrdinalRegression > >::Estimator > > >();
    }

}