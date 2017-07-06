#include "_glm.h"



namespace autowig
{
    class Wrap_364fe86468a95b2689a98d2ed3389e0d : public ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink >, public boost::python::wrapper< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > >
    {
        public:
            

        protected:
            
            virtual void  update(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0) const
            { this->get_override("update")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_364fe86468a95b2689a98d2ed3389e0d const volatile * get_pointer<autowig::Wrap_364fe86468a95b2689a98d2ed3389e0d const volatile >(autowig::Wrap_364fe86468a95b2689a98d2ed3389e0d const volatile *c) { return c; }
    template <> struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > const volatile * get_pointer<struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > const volatile >(struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_364fe86468a95b2689a98d2ed3389e0d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::class_< autowig::Wrap_364fe86468a95b2689a98d2ed3389e0d, autowig::Held< autowig::Wrap_364fe86468a95b2689a98d2ed3389e0d >::Type, boost::python::bases< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > >, boost::noncopyable > class_364fe86468a95b2689a98d2ed3389e0d("_CategoricalGeneralizedLinearModel_364fe86468a95b2689a98d2ed3389e0d", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_364fe86468a95b2689a98d2ed3389e0d >::Type, autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::NominalLink > >::Type, autowig::Held< class ::statiskit::glm::GeneralizedLinearModel< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::NominalLink > >::Type >();
    }

}