#ifndef TYPES_HPP
#define TYPES_HPP

#include "xtensor/xarray.hpp"
#include <map>
#include <string>
#include <vector>

template <typename T>
using array_t = xt::xarray<T>;

template <typename T>
using network_t = std::map<std::string, xt::xarray<T>>;

template <typename T>
std::vector<T> arr_to_vec(array_t<T> arr) {
  std::vector<T> vec(arr.size());
  int i=0;
  for (auto& e : vec) e = arr[i++];
  return vec;
}

#endif
