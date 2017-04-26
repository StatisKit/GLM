#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::PoissonFLink const volatile * get_pointer<class ::statiskit::PoissonFLink const volatile >(class ::statiskit::PoissonFLink const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_643a11471b1958fab6802df1ec299008()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::PoissonFLink::*method_pointer_0476e19021265da994ec41fb5495b23a)(double const &) const = &::statiskit::PoissonFLink::inverse;
    double  (::statiskit::PoissonFLink::*method_pointer_28f2a375fd875c3b95e7a4300099113a)(double const &) const = &::statiskit::PoissonFLink::inverse_derivative;
    void  (::statiskit::PoissonFLink::*method_pointer_54b47956705d590795edeea4a9ba40d0)(struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::PoissonFLink::set_distribution;
    class ::std::unique_ptr< struct ::statiskit::PoissonLink, struct ::std::default_delete< struct ::statiskit::PoissonLink > >  (::statiskit::PoissonFLink::*method_pointer_f4a1851d8a075c989ddef61980664351)() const = &::statiskit::PoissonFLink::copy;
    boost::python::class_< class ::statiskit::PoissonFLink, autowig::Held< class ::statiskit::PoissonFLink >::Type, boost::python::bases< struct ::statiskit::PoissonLink > > class_643a11471b1958fab6802df1ec299008("PoissonFLink", "", boost::python::no_init);
    class_643a11471b1958fab6802df1ec299008.def(boost::python::init<  >(""));
    class_643a11471b1958fab6802df1ec299008.def("inverse", method_pointer_0476e19021265da994ec41fb5495b23a, "");
    class_643a11471b1958fab6802df1ec299008.def("inverse_derivative", method_pointer_28f2a375fd875c3b95e7a4300099113a, "");
    class_643a11471b1958fab6802df1ec299008.def("set_distribution", method_pointer_54b47956705d590795edeea4a9ba40d0, "");
    class_643a11471b1958fab6802df1ec299008.def("copy", method_pointer_f4a1851d8a075c989ddef61980664351, "");

    if(autowig::Held< class ::statiskit::PoissonFLink >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::PoissonFLink >::Type, autowig::Held< struct ::statiskit::PoissonLink >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::PoissonFLink >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::PoissonFLink, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::PoissonFLink >::Type, class ::statiskit::PoissonFLink > > >();
    }

}