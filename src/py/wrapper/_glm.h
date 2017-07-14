#ifndef AUTOWIG__GLM
#define AUTOWIG__GLM

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/glm/link.h>
#include <statiskit/glm/predictor.h>
#include <statiskit/glm/base.h>
#include <statiskit/glm/regression.h>
#include <statiskit/glm/estimator.h>
#include <memory>

namespace autowig
{
     template<class T> struct Held {
        typedef std::shared_ptr< T > Type;
        static bool const is_class = true;
    };
}

#endif