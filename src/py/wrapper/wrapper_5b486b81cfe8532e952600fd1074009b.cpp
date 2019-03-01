#include "_glm.h"

void  (::statiskit::glm::NominalRegression::*method_pointer_b1ddd1dcfef75d47abb29720f8de0b39)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)= &::statiskit::glm::NominalRegression::set_reference;

namespace autowig {
}

void wrapper_5b486b81cfe8532e952600fd1074009b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::NominalRegression, autowig::HolderType< class ::statiskit::glm::NominalRegression >::Type, struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::NominalLink > > class_5b486b81cfe8532e952600fd1074009b(module, "NominalRegression", "");
    class_5b486b81cfe8532e952600fd1074009b.def(pybind11::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const &, class ::statiskit::glm::VectorPredictor const &, struct ::statiskit::glm::NominalLink const & >());
    class_5b486b81cfe8532e952600fd1074009b.def("set_reference", method_pointer_b1ddd1dcfef75d47abb29720f8de0b39, "");

}