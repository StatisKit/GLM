#include "_glm.h"

struct ::statiskit::glm::Design & (::std::unique_ptr< ::statiskit::glm::Design, ::std::default_delete< ::statiskit::glm::Design > >::*method_pointer_968e11dc339e5a459f2eee491aa13606)()const= &::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >::operator*;
::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >::pointer  (::std::unique_ptr< ::statiskit::glm::Design, ::std::default_delete< ::statiskit::glm::Design > >::*method_pointer_66eff9af5f315f6e99453e7157db4478)()const= &::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >::get;
::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >::pointer  (::std::unique_ptr< ::statiskit::glm::Design, ::std::default_delete< ::statiskit::glm::Design > >::*method_pointer_094d50a326a05d7e849add0f57375899)()= &::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >::release;
void  (::std::unique_ptr< ::statiskit::glm::Design, ::std::default_delete< ::statiskit::glm::Design > >::*method_pointer_7ae79f963b51514f9fcde61f3adc8e0e)(::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >::pointer )= &::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >::reset;
void  (::std::unique_ptr< ::statiskit::glm::Design, ::std::default_delete< ::statiskit::glm::Design > >::*method_pointer_59ee40f71d7854dcba787511f6668051)(class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > &)= &::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > >::swap;

namespace autowig {
    void method_decorator_968e11dc339e5a459f2eee491aa13606(class ::std::unique_ptr< struct ::statiskit::glm::Design, struct ::std::default_delete< struct ::statiskit::glm::Design > > const & instance, const struct ::statiskit::glm::Design & param_out) { instance.operator*() = param_out; }
}

void wrapper_460c3506527053a78f54ef6fd5c435ac(pybind11::module& module)
{

}