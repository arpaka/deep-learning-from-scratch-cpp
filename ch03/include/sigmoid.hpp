#ifndef SIGMOID_HPP
#define SIGMOID_HPP

#include "xtensor/xmath.hpp"

auto sigmoid(auto x)
{
  return 1 / (1 + xt::exp(-x));
}

#endif
