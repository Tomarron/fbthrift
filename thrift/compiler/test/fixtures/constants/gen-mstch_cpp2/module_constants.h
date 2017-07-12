/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/protocol/Protocol.h>
namespace cpp2 {

struct module_constants {

  static constexpr int32_t const myInt_ = 1337;

  static constexpr int32_t myInt() {
    return myInt_;
  }

  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const name_ = "Mark Zuckerberg";

  static constexpr char const * name() {
    return name_;
  }

  static std::vector<std::map<std::string, int32_t>> const& states();

  static constexpr double const x_ = 1.0;

  static constexpr double x() {
    return x_;
  }

  static constexpr double const y_ = 1000000;

  static constexpr double y() {
    return y_;
  }

  static constexpr double const z_ = 1000000000.0;

  static constexpr double z() {
    return z_;
  }

  static  ::cpp2::Internship const& instagram();

  static std::vector< ::cpp2::Range> const& kRanges();

  static std::vector< ::cpp2::Internship> const& internList();

  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const apostrophe_ = "'";

  static constexpr char const * apostrophe() {
    return apostrophe_;
  }

  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const tripleApostrophe_ = "'''";

  static constexpr char const * tripleApostrophe() {
    return tripleApostrophe_;
  }

  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const quotationMark_ = "\"";

  static constexpr char const * quotationMark() {
    return quotationMark_;
  }

  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const backslash_ = "\\";

  static constexpr char const * backslash() {
    return backslash_;
  }

  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const escaped_a_ = "\x61";

  static constexpr char const * escaped_a() {
    return escaped_a_;
  }

  static std::map<std::string, int32_t> const& char2ascii();

  static std::vector<std::string> const& escaped_strings();

  static constexpr bool const false_c_ = false;

  static constexpr bool false_c() {
    return false_c_;
  }

  static constexpr bool const true_c_ = true;

  static constexpr bool true_c() {
    return true_c_;
  }

  static constexpr int8_t const zero_byte_ = static_cast<int8_t>(0);

  static constexpr int8_t zero_byte() {
    return zero_byte_;
  }

  static constexpr int16_t const zero16_ = static_cast<int16_t>(0);

  static constexpr int16_t zero16() {
    return zero16_;
  }

  static constexpr int32_t const zero32_ = 0;

  static constexpr int32_t zero32() {
    return zero32_;
  }

  static constexpr int64_t const zero64_ = 0LL;

  static constexpr int64_t zero64() {
    return zero64_;
  }

  static constexpr double const zero_dot_zero_ = 0.0;

  static constexpr double zero_dot_zero() {
    return zero_dot_zero_;
  }

  // consider using folly::StringPiece instead of std::string whenever possible
  // to referencing this statically allocated string constant, in order to
  // prevent unnecessary allocations

  static constexpr char const * const empty_string_ = "";

  static constexpr char const * empty_string() {
    return empty_string_;
  }

  static std::vector<int32_t> const& empty_int_list();

  static std::vector<std::string> const& empty_string_list();

  static std::set<int32_t> const& empty_int_set();

  static std::set<std::string> const& empty_string_set();

  static std::map<int32_t, int32_t> const& empty_int_int_map();

  static std::map<int32_t, std::string> const& empty_int_string_map();

  static std::map<std::string, int32_t> const& empty_string_int_map();

  static std::map<std::string, std::string> const& empty_string_string_map();

};

} // cpp2
