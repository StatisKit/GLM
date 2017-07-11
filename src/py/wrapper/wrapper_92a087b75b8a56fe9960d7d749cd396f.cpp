#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::ConstrainedVectorPredictor const volatile * get_pointer<class ::statiskit::glm::ConstrainedVectorPredictor const volatile >(class ::statiskit::glm::ConstrainedVectorPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_92a087b75b8a56fe9960d7d749cd396f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedVectorPredictor::*method_pointer_e7406976ecd9527c9e6ee9c506281ab9)() const = &::statiskit::glm::ConstrainedVectorPredictor::get_constraint;
    void  (::statiskit::glm::ConstrainedVectorPredictor::*method_pointer_0f3cf473fd1c56b4b33aca9f1bf18799)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedVectorPredictor::set_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::glm::ConstrainedVectorPredictor::*method_pointer_586b6e0052fd58849ee8f551e52a675a)() const = &::statiskit::glm::ConstrainedVectorPredictor::get_intercept_constraint;
    void  (::statiskit::glm::ConstrainedVectorPredictor::*method_pointer_febf3dbfd300546f9ef36267d6aff29d)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::glm::ConstrainedVectorPredictor::set_intercept_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (*method_pointer_f330143727055738b56fd94fe526819d)(struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const &, ::statiskit::Indices const &) = ::statiskit::glm::ConstrainedVectorPredictor::partial_proportional_constraint;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (*method_pointer_eabff1b478015790be8452cf80eaedeb)(class ::statiskit::UnivariateConditionalData const &, ::statiskit::Indices const &) = ::statiskit::glm::ConstrainedVectorPredictor::partial_proportional_constraint;
    boost::python::class_< class ::statiskit::glm::ConstrainedVectorPredictor, autowig::Held< class ::statiskit::glm::ConstrainedVectorPredictor >::Type, boost::python::bases< class ::statiskit::glm::ProportionalVectorPredictor > > class_92a087b75b8a56fe9960d7d749cd396f("ConstrainedVectorPredictor", "", boost::python::no_init);
    class_92a087b75b8a56fe9960d7d749cd396f.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_92a087b75b8a56fe9960d7d749cd396f.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_92a087b75b8a56fe9960d7d749cd396f.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, ::std::size_t const &, ::statiskit::Indices const & >(""));
    class_92a087b75b8a56fe9960d7d749cd396f.def(boost::python::init< class ::statiskit::glm::ConstrainedVectorPredictor const & >(""));
    class_92a087b75b8a56fe9960d7d749cd396f.def("get_constraint", method_pointer_e7406976ecd9527c9e6ee9c506281ab9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_92a087b75b8a56fe9960d7d749cd396f.def("set_constraint", method_pointer_0f3cf473fd1c56b4b33aca9f1bf18799, "");
    class_92a087b75b8a56fe9960d7d749cd396f.def("get_intercept_constraint", method_pointer_586b6e0052fd58849ee8f551e52a675a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_92a087b75b8a56fe9960d7d749cd396f.def("set_intercept_constraint", method_pointer_febf3dbfd300546f9ef36267d6aff29d, "");
    class_92a087b75b8a56fe9960d7d749cd396f.def("partial_proportional_constraint", method_pointer_f330143727055738b56fd94fe526819d, "");
    class_92a087b75b8a56fe9960d7d749cd396f.def("partial_proportional_constraint", method_pointer_eabff1b478015790be8452cf80eaedeb, "");
    class_92a087b75b8a56fe9960d7d749cd396f.staticmethod("partial_proportional_constraint");

    if(autowig::Held< class ::statiskit::glm::ConstrainedVectorPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::ConstrainedVectorPredictor >::Type, autowig::Held< class ::statiskit::glm::ProportionalVectorPredictor >::Type >();
    }

}