#ifndef STEP_FUNCTION_HPP
#define STEP_FUNCTION_HPP

#include "types.hpp"
#include <math.h>

template <typename T>
array_t<T> step_function(array_t<T> x)
{
  array_t<T> y = x;
  for (std::size_t i=0; i<x.size(); ++i) {
    y(i) = (x(i) < 0)?  0 : 1;
  }
  return y;
}

#endif
