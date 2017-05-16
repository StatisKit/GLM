#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7b5a041425ee50edaad585dd1252cfa5()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::glm::OrdinalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_b9621762074b53a5bdb191f0eeb9d8c8)() const = &::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_7b5a041425ee50edaad585dd1252cfa5("_ActiveEstimation_7b5a041425ee50edaad585dd1252cfa5", "", boost::python::no_init);
    class_7b5a041425ee50edaad585dd1252cfa5.def(boost::python::init<  >(""));
    class_7b5a041425ee50edaad585dd1252cfa5.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_7b5a041425ee50edaad585dd1252cfa5.def(boost::python::init< class ::statiskit::glm::OrdinalRegression const *, struct ::statiskit::MultivariateData const * >(""));
    class_7b5a041425ee50edaad585dd1252cfa5.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >(""));
    class_7b5a041425ee50edaad585dd1252cfa5.def("get_data", method_pointer_b9621762074b53a5bdb191f0eeb9d8c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::glm::OrdinalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > >();
    }

}