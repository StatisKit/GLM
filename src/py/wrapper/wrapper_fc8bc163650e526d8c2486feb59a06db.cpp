#include "_glm.h"



namespace autowig
{
    class Wrap_fc8bc163650e526d8c2486feb59a06db : public ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, public boost::python::wrapper< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >
    {
        public:
            

        protected:
            
            virtual class ::statiskit::glm::NominalRegression * build_estimated(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_0, struct ::statiskit::MultivariateSampleSpace const & param_1, struct ::statiskit::UnivariateSampleSpace const & param_2) const
            { return this->get_override("build_estimated")(param_0, param_1, param_2); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_fc8bc163650e526d8c2486feb59a06db const volatile * get_pointer<autowig::Wrap_fc8bc163650e526d8c2486feb59a06db const volatile >(autowig::Wrap_fc8bc163650e526d8c2486feb59a06db const volatile *c) { return c; }
    template <> class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile * get_pointer<class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile >(class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fc8bc163650e526d8c2486feb59a06db()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dfc470f00ed658a8838b0d698570f3bc = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".glm");
    boost::python::object module_dfc470f00ed658a8838b0d698570f3bc(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dfc470f00ed658a8838b0d698570f3bc.c_str()))));
    boost::python::scope().attr("glm") = module_dfc470f00ed658a8838b0d698570f3bc;
    boost::python::scope scope_dfc470f00ed658a8838b0d698570f3bc = module_dfc470f00ed658a8838b0d698570f3bc;
    std::string name_060360333aea52068963ef5446ff4512 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__complete_fisher_estimation_060360333aea52068963ef5446ff4512");
    boost::python::object module_060360333aea52068963ef5446ff4512(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_060360333aea52068963ef5446ff4512.c_str()))));
    boost::python::scope().attr("__complete_fisher_estimation_060360333aea52068963ef5446ff4512") = module_060360333aea52068963ef5446ff4512;
    boost::python::scope scope_060360333aea52068963ef5446ff4512 = module_060360333aea52068963ef5446ff4512;
    boost::python::class_< autowig::Wrap_fc8bc163650e526d8c2486feb59a06db, autowig::Held< autowig::Wrap_fc8bc163650e526d8c2486feb59a06db >::Type, boost::python::bases< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >, boost::noncopyable > class_fc8bc163650e526d8c2486feb59a06db("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_fc8bc163650e526d8c2486feb59a06db >::Type, autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, autowig::Held< class ::statiskit::glm::CategoricalFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator >::Type, class ::statiskit::glm::CompleteFisherEstimation< class ::statiskit::glm::NominalRegression >::Estimator > > >();
    }

}