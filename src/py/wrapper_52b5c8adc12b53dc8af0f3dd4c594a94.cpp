#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::AdjacentLink const volatile * get_pointer<class ::statiskit::AdjacentLink const volatile >(class ::statiskit::AdjacentLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_52b5c8adc12b53dc8af0f3dd4c594a94()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::AdjacentLink::*method_pointer_32919b98aa2259139b8be6b92c3901b0)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::AdjacentLink::inverse;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::AdjacentLink::*method_pointer_63981f84511d5064843415bbab461a5b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::AdjacentLink::inverse_derivative;
    void  (::statiskit::AdjacentLink::*method_pointer_cd7323bfa9315980b232e2dc790254b3)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::AdjacentLink::set_distribution;
    class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > >  (::statiskit::AdjacentLink::*method_pointer_e27e5b49406c56c79220aa43e7cdaa38)() const = &::statiskit::AdjacentLink::copy;
    boost::python::class_< class ::statiskit::AdjacentLink, autowig::Held< class ::statiskit::AdjacentLink >::Type, boost::python::bases< struct ::statiskit::OrdinalLink > > class_52b5c8adc12b53dc8af0f3dd4c594a94("AdjacentLink", "", boost::python::no_init);
    class_52b5c8adc12b53dc8af0f3dd4c594a94.def(boost::python::init<  >(""));
    class_52b5c8adc12b53dc8af0f3dd4c594a94.def("inverse", method_pointer_32919b98aa2259139b8be6b92c3901b0, "");
    class_52b5c8adc12b53dc8af0f3dd4c594a94.def("inverse_derivative", method_pointer_63981f84511d5064843415bbab461a5b, "");
    class_52b5c8adc12b53dc8af0f3dd4c594a94.def("set_distribution", method_pointer_cd7323bfa9315980b232e2dc790254b3, "");
    class_52b5c8adc12b53dc8af0f3dd4c594a94.def("copy", method_pointer_e27e5b49406c56c79220aa43e7cdaa38, "");

    if(autowig::Held< class ::statiskit::AdjacentLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::AdjacentLink >::Type, autowig::Held< struct ::statiskit::OrdinalLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::AdjacentLink >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::AdjacentLink, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::AdjacentLink >::Type, class ::statiskit::AdjacentLink > > >();
    }

}