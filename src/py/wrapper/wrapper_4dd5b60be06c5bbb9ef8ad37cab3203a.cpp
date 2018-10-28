#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::glm::CategoricalFisherCustomInitialization const volatile * get_pointer<class ::statiskit::glm::CategoricalFisherCustomInitialization const volatile >(class ::statiskit::glm::CategoricalFisherCustomInitialization const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4dd5b60be06c5bbb9ef8ad37cab3203a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::CategoricalFisherCustomInitialization::*method_pointer_5ce73ae257d05b9d9a32d8a57e556f12)() const = &::statiskit::glm::CategoricalFisherCustomInitialization::get_beta;
    void  (::statiskit::glm::CategoricalFisherCustomInitialization::*method_pointer_bfb71a16ee11501284359815b4b8b1ab)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::glm::CategoricalFisherCustomInitialization::set_beta;
    boost::python::class_< class ::statiskit::glm::CategoricalFisherCustomInitialization, autowig::Held< class ::statiskit::glm::CategoricalFisherCustomInitialization >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > > > class_4dd5b60be06c5bbb9ef8ad37cab3203a("CategoricalFisherCustomInitialization", "", boost::python::no_init);
    class_4dd5b60be06c5bbb9ef8ad37cab3203a.def(boost::python::init<  >(""));
    class_4dd5b60be06c5bbb9ef8ad37cab3203a.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_4dd5b60be06c5bbb9ef8ad37cab3203a.def("get_beta", method_pointer_5ce73ae257d05b9d9a32d8a57e556f12, "");
    class_4dd5b60be06c5bbb9ef8ad37cab3203a.def("set_beta", method_pointer_bfb71a16ee11501284359815b4b8b1ab, "");

    if(autowig::Held< class ::statiskit::glm::CategoricalFisherCustomInitialization >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CategoricalFisherCustomInitialization >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > >::Type >();
    }

}