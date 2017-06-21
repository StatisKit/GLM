#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const volatile * get_pointer<class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const volatile >(class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8b900e04542d5c558346daafa6055486()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_2a8d25586cce5d199a3ab79a83e4381e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__nominal_fisher_estimation_2a8d25586cce5d199a3ab79a83e4381e");
    boost::python::object module_2a8d25586cce5d199a3ab79a83e4381e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_2a8d25586cce5d199a3ab79a83e4381e.c_str()))));
    boost::python::scope().attr("__nominal_fisher_estimation_2a8d25586cce5d199a3ab79a83e4381e") = module_2a8d25586cce5d199a3ab79a83e4381e;
    boost::python::scope scope_2a8d25586cce5d199a3ab79a83e4381e = module_2a8d25586cce5d199a3ab79a83e4381e;
    boost::python::class_< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, boost::python::bases< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > > class_8b900e04542d5c558346daafa6055486("Estimator", "", boost::python::no_init);
    class_8b900e04542d5c558346daafa6055486.def(boost::python::init<  >(""));
    class_8b900e04542d5c558346daafa6055486.def(boost::python::init< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator >::Type, class ::statiskit::glm::NominalFisherEstimation< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression > >::Estimator > > >();
    }

}