#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CompleteVectorPredictor const volatile * get_pointer<class ::statiskit::glm::CompleteVectorPredictor const volatile >(class ::statiskit::glm::CompleteVectorPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_10d7efc77a715351ba65ce521e188db9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::CompleteVectorPredictor::*method_pointer_d00d96d9a66b51f5a23da884f81521f3)() const = &::statiskit::glm::CompleteVectorPredictor::get_alpha;
    void  (::statiskit::glm::CompleteVectorPredictor::*method_pointer_500b818cf2845da1b876ce668465f93b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::CompleteVectorPredictor::set_alpha;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::CompleteVectorPredictor::*method_pointer_7365fdf694795151a65906255392d595)() const = &::statiskit::glm::CompleteVectorPredictor::get_delta;
    void  (::statiskit::glm::CompleteVectorPredictor::*method_pointer_b2732aa6ebdd5067bcb0ea88e444f517)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::CompleteVectorPredictor::set_delta;
    boost::python::class_< class ::statiskit::glm::CompleteVectorPredictor, autowig::Held< class ::statiskit::glm::CompleteVectorPredictor >::Type, boost::python::bases< class ::statiskit::glm::VectorPredictor > > class_10d7efc77a715351ba65ce521e188db9("CompleteVectorPredictor", "", boost::python::no_init);
    class_10d7efc77a715351ba65ce521e188db9.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const & >(""));
    class_10d7efc77a715351ba65ce521e188db9.def(boost::python::init< class ::statiskit::glm::CompleteVectorPredictor const & >(""));
    class_10d7efc77a715351ba65ce521e188db9.def("get_alpha", method_pointer_d00d96d9a66b51f5a23da884f81521f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_10d7efc77a715351ba65ce521e188db9.def("set_alpha", method_pointer_500b818cf2845da1b876ce668465f93b, "");
    class_10d7efc77a715351ba65ce521e188db9.def("get_delta", method_pointer_7365fdf694795151a65906255392d595, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_10d7efc77a715351ba65ce521e188db9.def("set_delta", method_pointer_b2732aa6ebdd5067bcb0ea88e444f517, "");

    if(autowig::Held< class ::statiskit::glm::CompleteVectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CompleteVectorPredictor >::Type, autowig::Held< class ::statiskit::glm::VectorPredictor >::Type >();
    }

}