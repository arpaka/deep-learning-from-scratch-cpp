#include "xtensor/xarray.hpp"
#include <string>
#include <map>

template <typename T>
using array_t = xt::xarray<T>;

template <typename T>
using network_t = std::map<std::string, xt::xarray<T> >;
