/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace cpp2 {

class Internship;
class UnEnumStruct;
class Range;

enum class EmptyEnum {};

using _EmptyEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<EmptyEnum, EmptyEnum>;
extern const _EmptyEnum_EnumMapFactory::ValuesToNamesMapType _EmptyEnum_VALUES_TO_NAMES;
extern const _EmptyEnum_EnumMapFactory::NamesToValuesMapType _EmptyEnum_NAMES_TO_VALUES;

} // cpp2
namespace std {

template<> struct hash<typename  ::cpp2::EmptyEnum> : public apache::thrift::detail::enum_hash<typename  ::cpp2::EmptyEnum> {};
template<> struct equal_to<typename  ::cpp2::EmptyEnum> : public apache::thrift::detail::enum_equal_to<typename  ::cpp2::EmptyEnum> {};

} // std
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::cpp2::EmptyEnum>;
template <> const std::size_t TEnumTraitsBase< ::cpp2::EmptyEnum>::size;
template <> const folly::Range<const  ::cpp2::EmptyEnum*> TEnumTraitsBase< ::cpp2::EmptyEnum>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraitsBase< ::cpp2::EmptyEnum>::names;
template <> const char* TEnumTraitsBase< ::cpp2::EmptyEnum>::findName( ::cpp2::EmptyEnum value);
template <> bool TEnumTraitsBase< ::cpp2::EmptyEnum>::findValue(const char* name,  ::cpp2::EmptyEnum* outValue);

}} // apache::thrift
namespace cpp2 {

enum class City {
  NYC = 0,
  MPK = 1,
  SEA = 2,
  LON = 3
};

using _City_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<City, City>;
extern const _City_EnumMapFactory::ValuesToNamesMapType _City_VALUES_TO_NAMES;
extern const _City_EnumMapFactory::NamesToValuesMapType _City_NAMES_TO_VALUES;

} // cpp2
namespace std {

template<> struct hash<typename  ::cpp2::City> : public apache::thrift::detail::enum_hash<typename  ::cpp2::City> {};
template<> struct equal_to<typename  ::cpp2::City> : public apache::thrift::detail::enum_equal_to<typename  ::cpp2::City> {};

} // std
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::cpp2::City>;
template <> const std::size_t TEnumTraitsBase< ::cpp2::City>::size;
template <> const folly::Range<const  ::cpp2::City*> TEnumTraitsBase< ::cpp2::City>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraitsBase< ::cpp2::City>::names;
template <> const char* TEnumTraitsBase< ::cpp2::City>::findName( ::cpp2::City value);
template <> bool TEnumTraitsBase< ::cpp2::City>::findValue(const char* name,  ::cpp2::City* outValue);

template <> constexpr  ::cpp2::City TEnumTraits< ::cpp2::City>::min() {
  return  ::cpp2::City::NYC;
}

template <> constexpr  ::cpp2::City TEnumTraits< ::cpp2::City>::max() {
  return  ::cpp2::City::LON;
}

}} // apache::thrift
namespace cpp2 {

enum class Company {
  FACEBOOK = 0,
  WHATSAPP = 1,
  OCULUS = 2,
  INSTAGRAM = 3
};

using _Company_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Company, Company>;
extern const _Company_EnumMapFactory::ValuesToNamesMapType _Company_VALUES_TO_NAMES;
extern const _Company_EnumMapFactory::NamesToValuesMapType _Company_NAMES_TO_VALUES;

} // cpp2
namespace std {

template<> struct hash<typename  ::cpp2::Company> : public apache::thrift::detail::enum_hash<typename  ::cpp2::Company> {};
template<> struct equal_to<typename  ::cpp2::Company> : public apache::thrift::detail::enum_equal_to<typename  ::cpp2::Company> {};

} // std
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::cpp2::Company>;
template <> const std::size_t TEnumTraitsBase< ::cpp2::Company>::size;
template <> const folly::Range<const  ::cpp2::Company*> TEnumTraitsBase< ::cpp2::Company>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraitsBase< ::cpp2::Company>::names;
template <> const char* TEnumTraitsBase< ::cpp2::Company>::findName( ::cpp2::Company value);
template <> bool TEnumTraitsBase< ::cpp2::Company>::findValue(const char* name,  ::cpp2::Company* outValue);

template <> constexpr  ::cpp2::Company TEnumTraits< ::cpp2::Company>::min() {
  return  ::cpp2::Company::FACEBOOK;
}

template <> constexpr  ::cpp2::Company TEnumTraits< ::cpp2::Company>::max() {
  return  ::cpp2::Company::INSTAGRAM;
}

}} // apache::thrift
namespace cpp2 {

class Internship : private apache::thrift::detail::st::ComparisonOperators<Internship> {
 public:

  Internship() :
      weeks(0),
      employer( ::cpp2::Company::FACEBOOK) {}
  // FragileConstructor for use in initialization lists only

  Internship(apache::thrift::FragileConstructor, int32_t weeks__arg, std::string title__arg,  ::cpp2::Company employer__arg) :
      weeks(std::move(weeks__arg)),
      title(std::move(title__arg)),
      employer(std::move(employer__arg)) {
    __isset.title = true;
    __isset.employer = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Internship(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Internship(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    weeks = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Internship(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Internship(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    title = arg.move();
    __isset.title = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Internship(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Internship(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    employer = arg.move();
    __isset.employer = true;
  }

  Internship(Internship&&) = default;

  Internship(const Internship&) = default;

  Internship& operator=(Internship&&) = default;

  Internship& operator=(const Internship&) = default;
  void __clear();

  virtual ~Internship() throw() {}

  int32_t weeks;
  std::string title;
   ::cpp2::Company employer;

  struct __isset {
    void __clear() {
      title = false;
      employer = false;
    }

    bool title = false;
    bool employer = false;
  } __isset;
  bool operator==(const Internship& rhs) const;
  bool operator < (const Internship& rhs) const;

  int32_t get_weeks() const {
    return weeks;
  }

  int32_t& set_weeks(int32_t weeks_) {
    weeks = weeks_;
    return weeks;
  }

  const std::string& get_title() const& {
    return title;
  }

  std::string get_title() && {
    return std::move(title);
  }

  template <typename T_Internship_title_struct_setter>
  std::string& set_title(T_Internship_title_struct_setter&& title_) {
    title = std::forward<T_Internship_title_struct_setter>(title_);
    __isset.title = true;
    return title;
  }

  const  ::cpp2::Company* get_employer() const& {
    return __isset.employer ? std::addressof(employer) : nullptr;
  }

   ::cpp2::Company* get_employer() & {
    return __isset.employer ? std::addressof(employer) : nullptr;
  }
   ::cpp2::Company* get_employer() && = delete;

   ::cpp2::Company& set_employer( ::cpp2::Company employer_) {
    employer = employer_;
    __isset.employer = true;
    return employer;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Internship& a, Internship& b);
extern template uint32_t Internship::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Internship::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Internship::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Internship::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Internship::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Internship::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Internship::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Internship::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Internship>::clear( ::cpp2::Internship* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Internship>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Internship>::write(Protocol* proto,  ::cpp2::Internship const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Internship>::read(Protocol* proto,  ::cpp2::Internship* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Internship>::serializedSize(Protocol const* proto,  ::cpp2::Internship const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Internship>::serializedSizeZC(Protocol const* proto,  ::cpp2::Internship const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class UnEnumStruct : private apache::thrift::detail::st::ComparisonOperators<UnEnumStruct> {
 public:

  UnEnumStruct() :
      city(static_cast< ::cpp2::City>(-1)) {}
  // FragileConstructor for use in initialization lists only

  UnEnumStruct(apache::thrift::FragileConstructor,  ::cpp2::City city__arg) :
      city(std::move(city__arg)) {
    __isset.city = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  UnEnumStruct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    UnEnumStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    city = arg.move();
    __isset.city = true;
  }

  UnEnumStruct(UnEnumStruct&&) = default;

  UnEnumStruct(const UnEnumStruct&) = default;

  UnEnumStruct& operator=(UnEnumStruct&&) = default;

  UnEnumStruct& operator=(const UnEnumStruct&) = default;
  void __clear();

  virtual ~UnEnumStruct() throw() {}

   ::cpp2::City city;

  struct __isset {
    void __clear() {
      city = false;
    }

    bool city = false;
  } __isset;
  bool operator==(const UnEnumStruct& rhs) const;

  bool operator < (const UnEnumStruct& rhs) const {
    if (!(city == rhs.city)) {
      return city < rhs.city;
    }
    (void)rhs;
    return false;
  }

   ::cpp2::City get_city() const {
    return city;
  }

   ::cpp2::City& set_city( ::cpp2::City city_) {
    city = city_;
    __isset.city = true;
    return city;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(UnEnumStruct& a, UnEnumStruct& b);
extern template uint32_t UnEnumStruct::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t UnEnumStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t UnEnumStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t UnEnumStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t UnEnumStruct::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t UnEnumStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t UnEnumStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t UnEnumStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::UnEnumStruct>::clear( ::cpp2::UnEnumStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::UnEnumStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::UnEnumStruct>::write(Protocol* proto,  ::cpp2::UnEnumStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::UnEnumStruct>::read(Protocol* proto,  ::cpp2::UnEnumStruct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::UnEnumStruct>::serializedSize(Protocol const* proto,  ::cpp2::UnEnumStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::UnEnumStruct>::serializedSizeZC(Protocol const* proto,  ::cpp2::UnEnumStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class Range : private apache::thrift::detail::st::ComparisonOperators<Range> {
 public:

  Range() :
      min(0),
      max(0) {}
  // FragileConstructor for use in initialization lists only

  Range(apache::thrift::FragileConstructor, int32_t min__arg, int32_t max__arg) :
      min(std::move(min__arg)),
      max(std::move(max__arg)) {}
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Range(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Range(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    min = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Range(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Range(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    max = arg.move();
  }

  Range(Range&&) = default;

  Range(const Range&) = default;

  Range& operator=(Range&&) = default;

  Range& operator=(const Range&) = default;
  void __clear();

  virtual ~Range() throw() {}

  int32_t min;
  int32_t max;
  bool operator==(const Range& rhs) const;

  bool operator < (const Range& rhs) const {
    if (!(min == rhs.min)) {
      return min < rhs.min;
    }
    if (!(max == rhs.max)) {
      return max < rhs.max;
    }
    (void)rhs;
    return false;
  }

  int32_t get_min() const {
    return min;
  }

  int32_t& set_min(int32_t min_) {
    min = min_;
    return min;
  }

  int32_t get_max() const {
    return max;
  }

  int32_t& set_max(int32_t max_) {
    max = max_;
    return max;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Range& a, Range& b);
extern template uint32_t Range::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Range::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Range::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Range::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Range::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Range::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Range::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Range::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Range>::clear( ::cpp2::Range* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Range>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Range>::write(Protocol* proto,  ::cpp2::Range const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Range>::read(Protocol* proto,  ::cpp2::Range* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Range>::serializedSize(Protocol const* proto,  ::cpp2::Range const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Range>::serializedSizeZC(Protocol const* proto,  ::cpp2::Range const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2
