#include "_glm.h"

unsigned int  (::statiskit::glm::HierarchicalRegression::HierarchicalDistribution::*method_pointer_cab26779bbd35073ac44a2f7905c30fa)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &)const= &::statiskit::glm::HierarchicalRegression::HierarchicalDistribution::index;

namespace autowig {
}

void wrapper_eb2204261e585db28339a149d1570064(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution, autowig::HolderType< class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution >::Type, class ::statiskit::HierarchicalDistribution > class_eb2204261e585db28339a149d1570064(module, "HierarchicalDistribution", "");
    class_eb2204261e585db28339a149d1570064.def(pybind11::init< class ::statiskit::HierarchicalSampleSpace const & >());
    class_eb2204261e585db28339a149d1570064.def(pybind11::init< class ::statiskit::glm::HierarchicalRegression::HierarchicalDistribution const & >());
    class_eb2204261e585db28339a149d1570064.def("index", method_pointer_cab26779bbd35073ac44a2f7905c30fa, "");

}