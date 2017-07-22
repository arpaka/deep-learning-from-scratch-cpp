#include "types.h"
#include <math.h>

template <typename T>
array_t<T> relu(array_t<T> x)
{
  array_t<T> y = x;
  for (std::size_t i=0; i<x.size(); ++i) {
    y(i) = (x(i) < 0)?  0 : x(i);
  }
  return y;
}
