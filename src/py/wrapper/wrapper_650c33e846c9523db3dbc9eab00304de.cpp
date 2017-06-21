#include "_glm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ConstrainedScalarPredictor const volatile * get_pointer<class ::statiskit::ConstrainedScalarPredictor const volatile >(class ::statiskit::ConstrainedScalarPredictor const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_650c33e846c9523db3dbc9eab00304de()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::ConstrainedScalarPredictor::*method_pointer_61fa90f9308c5836997540d837dc0063)() const = &::statiskit::ConstrainedScalarPredictor::get_constraint;
    void  (::statiskit::ConstrainedScalarPredictor::*method_pointer_7ac5fc23ca9e518db0fd732a900a6af7)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::ConstrainedScalarPredictor::set_constraint;
    boost::python::class_< class ::statiskit::ConstrainedScalarPredictor, autowig::Held< class ::statiskit::ConstrainedScalarPredictor >::Type, boost::python::bases< class ::statiskit::CompleteScalarPredictor > > class_650c33e846c9523db3dbc9eab00304de("ConstrainedScalarPredictor", "", boost::python::no_init);
    class_650c33e846c9523db3dbc9eab00304de.def(boost::python::init< struct ::statiskit::MultivariateSampleSpace const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_650c33e846c9523db3dbc9eab00304de.def(boost::python::init< class ::statiskit::ConstrainedScalarPredictor const & >(""));
    class_650c33e846c9523db3dbc9eab00304de.def("get_constraint", method_pointer_61fa90f9308c5836997540d837dc0063, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_650c33e846c9523db3dbc9eab00304de.def("set_constraint", method_pointer_7ac5fc23ca9e518db0fd732a900a6af7, "");

    if(autowig::Held< class ::statiskit::ConstrainedScalarPredictor >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ConstrainedScalarPredictor >::Type, autowig::Held< class ::statiskit::CompleteScalarPredictor >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ConstrainedScalarPredictor >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ConstrainedScalarPredictor, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ConstrainedScalarPredictor >::Type, class ::statiskit::ConstrainedScalarPredictor > > >();
    }

}