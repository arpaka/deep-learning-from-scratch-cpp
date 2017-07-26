#ifndef SIGMOID_HPP
#define SIGMOID_HPP

#include "types.hpp"
#include "xtensor/xmath.hpp"

template <typename T>
array_t<T> sigmoid(array_t<T> x)
{
  return 1 / (1 + xt::exp(-x));
}

#endif
