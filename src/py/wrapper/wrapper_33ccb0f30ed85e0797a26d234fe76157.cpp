#include "_glm.h"


namespace autowig {
}

void wrapper_33ccb0f30ed85e0797a26d234fe76157(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::BinaryRegression, autowig::HolderType< class ::statiskit::glm::BinaryRegression >::Type, struct ::statiskit::glm::CategoricalGeneralizedLinearModel< struct ::statiskit::glm::BinaryLink > > class_33ccb0f30ed85e0797a26d234fe76157(module, "BinaryRegression", "");
    class_33ccb0f30ed85e0797a26d234fe76157.def(pybind11::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &, class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const, class ::statiskit::glm::ScalarPredictor const &, struct ::statiskit::glm::BinaryLink const & >());

}