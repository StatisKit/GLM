#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::CompleteScalarPredictor const volatile * get_pointer<class ::statiskit::CompleteScalarPredictor const volatile >(class ::statiskit::CompleteScalarPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_afddcdbd80ea56e09493646cf5c3e5b0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::CompleteScalarPredictor::*method_pointer_b9b6b11511b85531984ee6397f1ece45)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::CompleteScalarPredictor::operator();
    ::std::size_t  (::statiskit::CompleteScalarPredictor::*method_pointer_29aa1108e396573490a234f8f4c4ab95)() const = &::statiskit::CompleteScalarPredictor::size;
    void  (::statiskit::CompleteScalarPredictor::*method_pointer_05658094bfe450298eb8b24d2b46162b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::CompleteScalarPredictor::set_beta;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::CompleteScalarPredictor::*method_pointer_a9656ec7e27d5fb38864e90489d3a864)() const = &::statiskit::CompleteScalarPredictor::get_delta;
    class ::std::unique_ptr< class ::statiskit::ScalarPredictor, struct ::std::default_delete< class ::statiskit::ScalarPredictor > >  (::statiskit::CompleteScalarPredictor::*method_pointer_24468a09485a55ebab1bbc77d2940aea)() const = &::statiskit::CompleteScalarPredictor::copy;
    boost::python::class_< class ::statiskit::CompleteScalarPredictor, autowig::Held< class ::statiskit::CompleteScalarPredictor >::Type, boost::python::bases< class ::statiskit::ScalarPredictor > > class_afddcdbd80ea56e09493646cf5c3e5b0("CompleteScalarPredictor", "", boost::python::no_init);
    class_afddcdbd80ea56e09493646cf5c3e5b0.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const & >(""));
    class_afddcdbd80ea56e09493646cf5c3e5b0.def(boost::python::init< class ::statiskit::CompleteScalarPredictor const & >(""));
    class_afddcdbd80ea56e09493646cf5c3e5b0.def("__call__", method_pointer_b9b6b11511b85531984ee6397f1ece45, "");
    class_afddcdbd80ea56e09493646cf5c3e5b0.def("__len__", method_pointer_29aa1108e396573490a234f8f4c4ab95, "");
    class_afddcdbd80ea56e09493646cf5c3e5b0.def("set_beta", method_pointer_05658094bfe450298eb8b24d2b46162b, "");
    class_afddcdbd80ea56e09493646cf5c3e5b0.def("get_delta", method_pointer_a9656ec7e27d5fb38864e90489d3a864, boost::python::return_value_policy< boost::python::return_by_value >(), ":Return Type:\n    :cpp:any:`::Eigen::Matrix<` double, -1, 1, 0, -1, 1 >\n\n");
    class_afddcdbd80ea56e09493646cf5c3e5b0.def("copy", method_pointer_24468a09485a55ebab1bbc77d2940aea, "");
    class_afddcdbd80ea56e09493646cf5c3e5b0.def_readwrite("alpha", &::statiskit::CompleteScalarPredictor::alpha, "");

    if(autowig::Held< class ::statiskit::CompleteScalarPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::CompleteScalarPredictor >::Type, autowig::Held< class ::statiskit::ScalarPredictor >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::CompleteScalarPredictor >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::CompleteScalarPredictor, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::CompleteScalarPredictor >::Type, class ::statiskit::CompleteScalarPredictor > > >();
    }

}