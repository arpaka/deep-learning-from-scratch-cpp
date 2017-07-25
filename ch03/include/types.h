#ifndef TYPES_H
#define TYPES_H

#include "xtensor/xarray.hpp"
#include <string>
#include <map>
#include <vector>

template <typename T>
using array_t = xt::xarray<T>;

template <typename T>
using network_t = std::map<std::string, xt::xarray<T> >;

template <typename T>
std::vector<T> arr_to_vec(array_t<T> arr) {
  std::vector<T> vec(arr.size());
  int i=0;
  for (auto& e : vec) e = arr[i++];
  return vec;
}

#endif
