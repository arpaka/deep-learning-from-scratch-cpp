#ifndef SOFTMAX_HPP
#define SOFTMAX_HPP

#include "xtensor/xmath.hpp"

auto softmax(auto x)
{
  x = x - xt::amax(x);
  auto y = xt::exp(x) / xt::sum(xt::exp(x));
  return y;
}

#endif
