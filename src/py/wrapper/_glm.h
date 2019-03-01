#pragma once

#include <pybind11/pybind11.h>

#include <memory>
#include <statiskit/glm/base.h>
#include <statiskit/glm/estimator.h>
#include <statiskit/glm/link.h>
#include <statiskit/glm/predictor.h>
#include <statiskit/glm/regression.h>

#define PYBIND11_OVERLOAD_UNIQUE_PTR_INT(ret_type, cname, name, ...) { \
        pybind11::gil_scoped_acquire gil; \
        pybind11::function overload = pybind11::get_overload(static_cast<const cname *>(this), name); \
        if (overload) { \
            auto o = overload(__VA_ARGS__); \
            if (pybind11::detail::cast_is_temporary_value_reference<ret_type::pointer>::value) { \
                static pybind11::detail::overload_caster_t<ret_type::pointer> caster; \
                return std::unique_ptr< ret_type::element_type >(pybind11::detail::cast_ref<ret_type::pointer>(std::move(o), caster)); \
            } \
            else return std::unique_ptr< ret_type::element_type >(pybind11::detail::cast_safe<ret_type::pointer>(std::move(o))); \
        } \
    }

#define PYBIND11_OVERLOAD_UNIQUE_PTR_NAME(ret_type, cname, name, fn, ...) \
    PYBIND11_OVERLOAD_UNIQUE_PTR_INT(ret_type, cname, name, __VA_ARGS__) \
    return cname::fn(__VA_ARGS__)

#define PYBIND11_OVERLOAD_PURE_UNIQUE_PTR_NAME(ret_type, cname, name, fn, ...) \
    PYBIND11_OVERLOAD_UNIQUE_PTR_INT(ret_type, cname, name, __VA_ARGS__) \
    pybind11::pybind11_fail("Tried to call pure virtual function \"" #cname "::" name "\"");

#define PYBIND11_OVERLOAD_UNIQUE_PTR(ret_type, cname, fn, ...) \
    PYBIND11_OVERLOAD_UNIQUE_PTR_NAME(ret_type, cname, #fn, fn, __VA_ARGS__)

#define PYBIND11_OVERLOAD_PURE_UNIQUE_PTR(ret_type, cname, fn, ...) \
    PYBIND11_OVERLOAD_PURE_UNIQUE_PTR_NAME(ret_type, cname, #fn, fn, __VA_ARGS__)

namespace autowig
{
    template<class T> struct HolderType {
        typedef std::unique_ptr< T > Type;
    };

    template<class T> struct NoDeleteHolderType {
        typedef std::unique_ptr< T, pybind11::nodelete > Type;
    };
}