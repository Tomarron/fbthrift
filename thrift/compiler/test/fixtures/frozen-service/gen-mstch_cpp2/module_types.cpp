/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/frozen-service/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/frozen-service/gen-cpp2/module_types.tcc"

#include <algorithm>

#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/frozen-service/gen-cpp2/module_data.h"



namespace some { namespace ns {

void ModuleA::__clear() {
  // clear all fields
  i32Field = 0;
  strField = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  listField.clear();
  mapField.clear();
  __isset.__clear();
}

bool ModuleA::operator==(const ModuleA& rhs) const {
  if (!((i32Field == rhs.i32Field))) {
    return false;
  }
  if (!((strField == rhs.strField))) {
    return false;
  }
  if (!((listField == rhs.listField))) {
    return false;
  }
  if (!((mapField == rhs.mapField))) {
    return false;
  }
  return true;
}

const std::vector<int16_t>& ModuleA::get_listField() const& {
  return listField;
}

std::vector<int16_t> ModuleA::get_listField() && {
  return std::move(listField);
}

const std::map<std::string, int32_t>& ModuleA::get_mapField() const& {
  return mapField;
}

std::map<std::string, int32_t> ModuleA::get_mapField() && {
  return std::move(mapField);
}

void swap(ModuleA& a, ModuleA& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.strField, b.strField);
  swap(a.listField, b.listField);
  swap(a.mapField, b.mapField);
  swap(a.__isset, b.__isset);
}

template uint32_t ModuleA::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleA::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace ns {

void ModuleB::__clear() {
  // clear all fields
  i32Field = 0;
  __isset.__clear();
}

bool ModuleB::operator==(const ModuleB& rhs) const {
  if (!((i32Field == rhs.i32Field))) {
    return false;
  }
  return true;
}

void swap(ModuleB& a, ModuleB& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.__isset, b.__isset);
}

template uint32_t ModuleB::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ModuleB::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ModuleB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ModuleB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ModuleB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace ns {

void ExceptionA::__clear() {
  // clear all fields
  code = 0;
  msg = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset.__clear();
}

bool ExceptionA::operator==(const ExceptionA& rhs) const {
  if (!((code == rhs.code))) {
    return false;
  }
  if (!((msg == rhs.msg))) {
    return false;
  }
  return true;
}

void swap(ExceptionA& a, ExceptionA& b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.msg, b.msg);
  swap(a.__isset, b.__isset);
}

template uint32_t ExceptionA::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ExceptionA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ExceptionA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ExceptionA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ExceptionA::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ExceptionA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ExceptionA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ExceptionA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace ns {

void ExceptionB::__clear() {
  // clear all fields
  code = 0;
  msg = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset.__clear();
}

bool ExceptionB::operator==(const ExceptionB& rhs) const {
  if (!((code == rhs.code))) {
    return false;
  }
  if (!((msg == rhs.msg))) {
    return false;
  }
  return true;
}

void swap(ExceptionB& a, ExceptionB& b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.msg, b.msg);
  swap(a.__isset, b.__isset);
}

template uint32_t ExceptionB::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ExceptionB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ExceptionB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ExceptionB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ExceptionB::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ExceptionB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ExceptionB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ExceptionB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace ns {

}} // some::ns
