#ifndef RELU_HPP
#define RELU_HPP

#include "xtensor/xmath.hpp"

auto relu(auto x)
{
  return xt::maximum(0, x);
}

#endif
