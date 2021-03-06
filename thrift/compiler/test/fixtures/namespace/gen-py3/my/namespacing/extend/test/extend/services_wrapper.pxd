#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.memory cimport shared_ptr
from thrift.py3.server cimport cServerInterface
from folly cimport cFollyExecutor

cimport hsmodule.services_wrapper


cdef extern from "src/gen-cpp2/ExtendTestService.h" namespace "cpp2":
    cdef cppclass cExtendTestServiceSvAsyncIf "cpp2::ExtendTestServiceSvAsyncIf":
      pass

    cdef cppclass cExtendTestServiceSvIf "cpp2::ExtendTestServiceSvIf"(
            cExtendTestServiceSvAsyncIf,
            hsmodule.services_wrapper.cHsTestServiceSvIf,
            cServerInterface):
        pass



cdef extern from "src/gen-py3/extend/services_wrapper.h" namespace "cpp2":
    cdef cppclass cExtendTestServiceWrapper "cpp2::ExtendTestServiceWrapper"(
        cExtendTestServiceSvIf,
        hsmodule.services_wrapper.cHsTestServiceWrapper
    ):
        pass

    shared_ptr[cServerInterface] cExtendTestServiceInterface "cpp2::ExtendTestServiceInterface"(PyObject *if_object, cFollyExecutor* Q)
