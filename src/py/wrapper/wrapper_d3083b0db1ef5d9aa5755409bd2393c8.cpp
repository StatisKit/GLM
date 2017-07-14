#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::ProportionalVectorPredictor const volatile * get_pointer<class ::statiskit::glm::ProportionalVectorPredictor const volatile >(class ::statiskit::glm::ProportionalVectorPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d3083b0db1ef5d9aa5755409bd2393c8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::ProportionalVectorPredictor::*method_pointer_c59726ba34845d2eb19a7926f019d92c)() const = &::statiskit::glm::ProportionalVectorPredictor::get_alpha;
    void  (::statiskit::glm::ProportionalVectorPredictor::*method_pointer_ca85b94ec46256e1bb341ad0c8d4f3da)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::ProportionalVectorPredictor::set_alpha;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::glm::ProportionalVectorPredictor::*method_pointer_6b3e8f8e162c5a8aa23f3d84d1122cfa)() const = &::statiskit::glm::ProportionalVectorPredictor::get_delta;
    void  (::statiskit::glm::ProportionalVectorPredictor::*method_pointer_e77ccd01afbb5ff89d8d94b3eff5fb60)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::ProportionalVectorPredictor::set_delta;
    boost::python::class_< class ::statiskit::glm::ProportionalVectorPredictor, autowig::Held< class ::statiskit::glm::ProportionalVectorPredictor >::Type, boost::python::bases< class ::statiskit::glm::VectorPredictor > > class_d3083b0db1ef5d9aa5755409bd2393c8("ProportionalVectorPredictor", "", boost::python::no_init);
    class_d3083b0db1ef5d9aa5755409bd2393c8.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const & >(""));
    class_d3083b0db1ef5d9aa5755409bd2393c8.def(boost::python::init< class ::statiskit::glm::ProportionalVectorPredictor const & >(""));
    class_d3083b0db1ef5d9aa5755409bd2393c8.def("get_alpha", method_pointer_c59726ba34845d2eb19a7926f019d92c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d3083b0db1ef5d9aa5755409bd2393c8.def("set_alpha", method_pointer_ca85b94ec46256e1bb341ad0c8d4f3da, "");
    class_d3083b0db1ef5d9aa5755409bd2393c8.def("get_delta", method_pointer_6b3e8f8e162c5a8aa23f3d84d1122cfa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d3083b0db1ef5d9aa5755409bd2393c8.def("set_delta", method_pointer_e77ccd01afbb5ff89d8d94b3eff5fb60, "");

    if(autowig::Held< class ::statiskit::glm::ProportionalVectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ProportionalVectorPredictor >::Type, autowig::Held< class ::statiskit::glm::VectorPredictor >::Type >();
    }

}