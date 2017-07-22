#include "types.h"
#include "relu.h"
#include "xtensor/xio.hpp"
#include <iostream>
#include <assert.h>

int main() {
  array_t<double> x = array_t<double>({-1.0, 1.0});
  array_t<double> y = relu<double>(x);
  std::cout << y << std::endl;

  return 0;
}
