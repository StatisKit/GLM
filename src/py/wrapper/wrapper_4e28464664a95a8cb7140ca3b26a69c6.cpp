#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink > const volatile * get_pointer<struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink > const volatile >(struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4e28464664a95a8cb7140ca3b26a69c6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink >, autowig::Held< struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink > >::Type, boost::python::bases< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > > > class_4e28464664a95a8cb7140ca3b26a69c6("_BinFLink_4e28464664a95a8cb7140ca3b26a69c6", "", boost::python::no_init);
    class_4e28464664a95a8cb7140ca3b26a69c6.def(boost::python::init<  >(""));
    class_4e28464664a95a8cb7140ca3b26a69c6.def(boost::python::init< struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink > const & >(""));

    if(autowig::Held< struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::BinFLink< struct ::statiskit::glm::BinaryLink > >::Type, autowig::Held< struct ::statiskit::glm::FLink< struct ::statiskit::glm::BinaryLink > >::Type >();
    }

}