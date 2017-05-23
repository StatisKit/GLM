#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ce8284ec03105edbb735746a7823d980()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::glm::NominalRegression, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_df6d7df1c20a51b994cb6117689a4109)() const = &::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_ce8284ec03105edbb735746a7823d980("_ActiveEstimation_ce8284ec03105edbb735746a7823d980", "", boost::python::no_init);
    class_ce8284ec03105edbb735746a7823d980.def(boost::python::init<  >(""));
    class_ce8284ec03105edbb735746a7823d980.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_ce8284ec03105edbb735746a7823d980.def(boost::python::init< class ::statiskit::glm::NominalRegression const *, struct ::statiskit::MultivariateData const * >(""));
    class_ce8284ec03105edbb735746a7823d980.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >(""));
    class_ce8284ec03105edbb735746a7823d980.def("get_data", method_pointer_df6d7df1c20a51b994cb6117689a4109, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::NominalRegression, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}