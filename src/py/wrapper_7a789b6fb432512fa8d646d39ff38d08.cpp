#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ReferenceLink const volatile * get_pointer<class ::statiskit::ReferenceLink const volatile >(class ::statiskit::ReferenceLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7a789b6fb432512fa8d646d39ff38d08()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::ReferenceLink::*method_pointer_87028d687faa5af683c61ac529a6e68e)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::ReferenceLink::inverse;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::ReferenceLink::*method_pointer_2990c46478525ceaa6c4e87c71b8af16)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::ReferenceLink::inverse_derivative;
    void  (::statiskit::ReferenceLink::*method_pointer_d4b010cb67cd5349b857de44b1528d55)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::ReferenceLink::set_distribution;
    class ::std::unique_ptr< struct ::statiskit::NominalLink, struct ::std::default_delete< struct ::statiskit::NominalLink > >  (::statiskit::ReferenceLink::*method_pointer_9569a0aee64f59a4a4ef71beed05395b)() const = &::statiskit::ReferenceLink::copy;
    boost::python::class_< class ::statiskit::ReferenceLink, autowig::Held< class ::statiskit::ReferenceLink >::Type, boost::python::bases< struct ::statiskit::NominalLink > > class_7a789b6fb432512fa8d646d39ff38d08("ReferenceLink", "", boost::python::no_init);
    class_7a789b6fb432512fa8d646d39ff38d08.def(boost::python::init<  >(""));
    class_7a789b6fb432512fa8d646d39ff38d08.def("inverse", method_pointer_87028d687faa5af683c61ac529a6e68e, "");
    class_7a789b6fb432512fa8d646d39ff38d08.def("inverse_derivative", method_pointer_2990c46478525ceaa6c4e87c71b8af16, "");
    class_7a789b6fb432512fa8d646d39ff38d08.def("set_distribution", method_pointer_d4b010cb67cd5349b857de44b1528d55, "");
    class_7a789b6fb432512fa8d646d39ff38d08.def("copy", method_pointer_9569a0aee64f59a4a4ef71beed05395b, "");

    if(autowig::Held< class ::statiskit::ReferenceLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ReferenceLink >::Type, autowig::Held< struct ::statiskit::NominalLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ReferenceLink >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ReferenceLink, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ReferenceLink >::Type, class ::statiskit::ReferenceLink > > >();
    }

}