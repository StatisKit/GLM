#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::CumulativeLink const volatile * get_pointer<class ::statiskit::CumulativeLink const volatile >(class ::statiskit::CumulativeLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7ad6b88dbc19591ab5b8e52343114976()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::CumulativeLink::*method_pointer_43e9770614785066b2985a8da89a1629)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::CumulativeLink::inverse;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::CumulativeLink::*method_pointer_bf4f5a727de85887914c5fa23d7cf677)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::CumulativeLink::inverse_derivative;
    void  (::statiskit::CumulativeLink::*method_pointer_fd482fb376eb52c3a831a48c863f30d0)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::CumulativeLink::set_distribution;
    class ::std::unique_ptr< struct ::statiskit::OrdinalLink, struct ::std::default_delete< struct ::statiskit::OrdinalLink > >  (::statiskit::CumulativeLink::*method_pointer_1fa2ca2633415643b26cd6fffe0b8e6b)() const = &::statiskit::CumulativeLink::copy;
    boost::python::class_< class ::statiskit::CumulativeLink, autowig::Held< class ::statiskit::CumulativeLink >::Type, boost::python::bases< struct ::statiskit::OrdinalLink > > class_7ad6b88dbc19591ab5b8e52343114976("CumulativeLink", "", boost::python::no_init);
    class_7ad6b88dbc19591ab5b8e52343114976.def(boost::python::init<  >(""));
    class_7ad6b88dbc19591ab5b8e52343114976.def("inverse", method_pointer_43e9770614785066b2985a8da89a1629, "");
    class_7ad6b88dbc19591ab5b8e52343114976.def("inverse_derivative", method_pointer_bf4f5a727de85887914c5fa23d7cf677, "");
    class_7ad6b88dbc19591ab5b8e52343114976.def("set_distribution", method_pointer_fd482fb376eb52c3a831a48c863f30d0, "");
    class_7ad6b88dbc19591ab5b8e52343114976.def("copy", method_pointer_1fa2ca2633415643b26cd6fffe0b8e6b, "");

    if(autowig::Held< class ::statiskit::CumulativeLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::CumulativeLink >::Type, autowig::Held< struct ::statiskit::OrdinalLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::CumulativeLink >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::CumulativeLink, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::CumulativeLink >::Type, class ::statiskit::CumulativeLink > > >();
    }

}