#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SequentialLink const volatile * get_pointer<class ::statiskit::SequentialLink const volatile >(class ::statiskit::SequentialLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8710766d04e4526aa7aee6d6d637db3d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::SequentialLink::*method_pointer_fd9d82624f2857ccaf9be5732001c0b1)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::SequentialLink::inverse;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::SequentialLink::*method_pointer_5a7e736730835810b709258c2b14c52b)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::SequentialLink::inverse_derivative;
    void  (::statiskit::SequentialLink::*method_pointer_1376c6017c6253b0aa86a01f23413256)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::SequentialLink::set_distribution;
    class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > >  (::statiskit::SequentialLink::*method_pointer_2d9942f502d25ed5806e665b0a6ccf47)() const = &::statiskit::SequentialLink::copy;
    boost::python::class_< class ::statiskit::SequentialLink, autowig::Held< class ::statiskit::SequentialLink >::Type, boost::python::bases< struct ::statiskit::OrdinalLink > > class_8710766d04e4526aa7aee6d6d637db3d("SequentialLink", "", boost::python::no_init);
    class_8710766d04e4526aa7aee6d6d637db3d.def(boost::python::init<  >(""));
    class_8710766d04e4526aa7aee6d6d637db3d.def("inverse", method_pointer_fd9d82624f2857ccaf9be5732001c0b1, "");
    class_8710766d04e4526aa7aee6d6d637db3d.def("inverse_derivative", method_pointer_5a7e736730835810b709258c2b14c52b, "");
    class_8710766d04e4526aa7aee6d6d637db3d.def("set_distribution", method_pointer_1376c6017c6253b0aa86a01f23413256, "");
    class_8710766d04e4526aa7aee6d6d637db3d.def("copy", method_pointer_2d9942f502d25ed5806e665b0a6ccf47, "");

    if(autowig::Held< class ::statiskit::SequentialLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SequentialLink >::Type, autowig::Held< struct ::statiskit::OrdinalLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::SequentialLink >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::SequentialLink, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::SequentialLink >::Type, class ::statiskit::SequentialLink > > >();
    }

}