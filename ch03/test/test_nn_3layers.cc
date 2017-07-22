#include "types.h"
#include "sigmoid.h"
#include "xtensor/xio.hpp"
#include "xtensor-blas/xlinalg.hpp"
#include <iostream>

template <typename T>
array_t<T> identify_function(array_t<T> x) {
  return x;
}

template <typename T>
network_t<T> init_network() {
  network_t<T> network;
  network["W1"] = array_t<T>({{0.1,0.3,0.5},{0.2,0.4,0.6}});
  network["b1"] = array_t<T>({0.1,0.2,0.3});
  network["W2"] = array_t<T>({{0.1,0.4},{0.2,0.5},{0.3,0.6}});
  network["b2"] = array_t<T>({0.1,0.2});
  network["W3"] = array_t<T>({{0.1,0.3},{0.2,0.4}});
  network["b3"] = array_t<T>({0.1,0.2});
  return network;
}

template <typename T>
array_t<T> forward(network_t<T> network, array_t<T> x)
{
  array_t<T> W1 = network["W1"];
  array_t<T> b1 = network["b1"];
  array_t<T> W2 = network["W2"];
  array_t<T> b2 = network["b2"];
  array_t<T> W3 = network["W3"];
  array_t<T> b3 = network["b3"];

  array_t<T> a1 = xt::linalg::dot(x, W1) + b1;
  array_t<T> z1 = sigmoid(a1);
  array_t<T> a2 = xt::linalg::dot(z1, W2) + b2;
  array_t<T> z2 = sigmoid(a2);
  array_t<T> a3 = xt::linalg::dot(z2, W3) + b3;
  array_t<T> y  = identify_function(a3);

  return y;
}

int main() {
  network_t<double> network = init_network<double>();
  array_t<double> x = array_t<double>({1.0, 0.5});
  array_t<double> y = forward<double>(network, x);
  std::cout << y << std::endl;
  return 0;
}
