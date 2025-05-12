// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AlphabetIndicator.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ALPHABET_INDICATOR__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ALPHABET_INDICATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALPHABET_INDICATOR_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_RANGE_MIN = 0ll
};

/// Constant 'ALPHABET_INDICATOR_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_RANGE_MAX = 63ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_ALPHABET_NO1'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_ALPHABET_NO1 = 0ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_ALPHABET_NO2'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_ALPHABET_NO2 = 1ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_ALPHABET_NO3'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_ALPHABET_NO3 = 2ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_ALPHABET_NO4'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_ALPHABET_NO4 = 3ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_CYRILLIC_ALPHABET'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_CYRILLIC_ALPHABET = 4ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_ARABIC_ALPHABET'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_ARABIC_ALPHABET = 5ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_GREEK_ALPHABET'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_GREEK_ALPHABET = 6ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_HEBREW_ALPHABET'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_HEBREW_ALPHABET = 7ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_ALPHABET_NO5'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_ALPHABET_NO5 = 8ll
};

/// Constant 'ALPHABET_INDICATOR_LATIN_ALPHABET_NO6'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_LATIN_ALPHABET_NO6 = 9ll
};

/// Constant 'ALPHABET_INDICATOR_TWO_OCTET_BMP'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_TWO_OCTET_BMP = 10ll
};

/// Constant 'ALPHABET_INDICATOR_FOUR_OCTET_CANONICAL'.
enum
{
  v2x_msgs__msg__AlphabetIndicator__ALPHABET_INDICATOR_FOUR_OCTET_CANONICAL = 11ll
};

/// Struct defined in msg/AlphabetIndicator in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AlphabetIndicator
{
  int64_t alphabet_indicator;
} v2x_msgs__msg__AlphabetIndicator;

// Struct for a sequence of v2x_msgs__msg__AlphabetIndicator.
typedef struct v2x_msgs__msg__AlphabetIndicator__Sequence
{
  v2x_msgs__msg__AlphabetIndicator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AlphabetIndicator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ALPHABET_INDICATOR__STRUCT_H_
