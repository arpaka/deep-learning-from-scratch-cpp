#include "types.hpp"
#include "softmax.hpp"
#include "xtensor/xio.hpp"
#include <iostream>

int main() {
  array_t<double> a = {1010, 1000, 990};
  std::cout << softmax(a) << std::endl;

  array_t<double> x = {0.3, 2.9, 4.0};
  auto y = softmax(x);
  std::cout << y << std::endl;
  std::cout << xt::sum(y) << std::endl;

  return 0;
}
