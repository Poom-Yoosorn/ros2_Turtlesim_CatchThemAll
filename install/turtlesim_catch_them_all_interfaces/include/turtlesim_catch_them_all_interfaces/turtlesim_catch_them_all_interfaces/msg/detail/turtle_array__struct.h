// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_catch_them_all_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#ifndef TURTLESIM_CATCH_THEM_ALL_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
#define TURTLESIM_CATCH_THEM_ALL_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'turtles'
#include "turtlesim_catch_them_all_interfaces/msg/detail/turtle__struct.h"

/// Struct defined in msg/TurtleArray in the package turtlesim_catch_them_all_interfaces.
typedef struct turtlesim_catch_them_all_interfaces__msg__TurtleArray
{
  turtlesim_catch_them_all_interfaces__msg__Turtle__Sequence turtles;
} turtlesim_catch_them_all_interfaces__msg__TurtleArray;

// Struct for a sequence of turtlesim_catch_them_all_interfaces__msg__TurtleArray.
typedef struct turtlesim_catch_them_all_interfaces__msg__TurtleArray__Sequence
{
  turtlesim_catch_them_all_interfaces__msg__TurtleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_catch_them_all_interfaces__msg__TurtleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CATCH_THEM_ALL_INTERFACES__MSG__DETAIL__TURTLE_ARRAY__STRUCT_H_
