#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_71dd9b2fc264533a985d4465f2aebe9a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::glm::BinaryRegression, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_1e4e093820745364b68cd96258121727)() const = &::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > > class_71dd9b2fc264533a985d4465f2aebe9a("_ActiveEstimation_71dd9b2fc264533a985d4465f2aebe9a", "", boost::python::no_init);
    class_71dd9b2fc264533a985d4465f2aebe9a.def(boost::python::init<  >(""));
    class_71dd9b2fc264533a985d4465f2aebe9a.def(boost::python::init< class ::statiskit::UnivariateConditionalData const * >(""));
    class_71dd9b2fc264533a985d4465f2aebe9a.def(boost::python::init< class ::statiskit::glm::BinaryRegression const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_71dd9b2fc264533a985d4465f2aebe9a.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >(""));
    class_71dd9b2fc264533a985d4465f2aebe9a.def("get_data", method_pointer_1e4e093820745364b68cd96258121727, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::glm::BinaryRegression, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type >();
    }

}