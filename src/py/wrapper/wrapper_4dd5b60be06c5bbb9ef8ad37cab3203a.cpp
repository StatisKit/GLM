#include "_glm.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::glm::CategoricalFisherCustomInitialization::*method_pointer_5ce73ae257d05b9d9a32d8a57e556f12)()const= &::statiskit::glm::CategoricalFisherCustomInitialization::get_beta;
void  (::statiskit::glm::CategoricalFisherCustomInitialization::*method_pointer_bfb71a16ee11501284359815b4b8b1ab)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &)= &::statiskit::glm::CategoricalFisherCustomInitialization::set_beta;

namespace autowig {
}

void wrapper_4dd5b60be06c5bbb9ef8ad37cab3203a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::glm::CategoricalFisherCustomInitialization, autowig::HolderType< class ::statiskit::glm::CategoricalFisherCustomInitialization >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::glm::CategoricalFisherInitialization, class ::statiskit::glm::CategoricalFisherCustomInitialization, struct ::statiskit::glm::CategoricalFisherInitialization > > class_4dd5b60be06c5bbb9ef8ad37cab3203a(module, "CategoricalFisherCustomInitialization", "");
    class_4dd5b60be06c5bbb9ef8ad37cab3203a.def(pybind11::init<  >());
    class_4dd5b60be06c5bbb9ef8ad37cab3203a.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_4dd5b60be06c5bbb9ef8ad37cab3203a.def("get_beta", method_pointer_5ce73ae257d05b9d9a32d8a57e556f12, "");
    class_4dd5b60be06c5bbb9ef8ad37cab3203a.def("set_beta", method_pointer_bfb71a16ee11501284359815b4b8b1ab, "");

}