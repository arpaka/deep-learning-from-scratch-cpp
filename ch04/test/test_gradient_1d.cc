#include "types.hpp"
#include <iostream>
#include <functional>

#include "matplotlibcpp.h"
namespace plt = matplotlibcpp;

template <typename T>
using func_t = std::function<T(T)>;

template <typename T>
T numerical_diff(func_t<T> f, T x)
{
  auto h = 1e-4;
  return (f(x+h) - f(x-h)) / (2*h);
}

template <typename T>
T function_1(T x)
{
  return 0.01*x*x + 0.1*x;
}

template <typename T1, typename T2>
func_t<T2> tangent_line(func_t<T1> f, T1 x)
{
  T1 d = numerical_diff<T1>(f, x);
  std::cout << d << std::endl;
  T1 y = f(x) - d*x;
  return [d,y](T2 t){ return d*t + y; };
}

int main(){
  array_t<double> x = xt::arange(0.0, 20.0, 0.1);
  auto y = function_1<array_t<double>>(x);
  plt::xlabel("x");
  plt::ylabel("f(x)");

  auto tf = tangent_line<double, array_t<double>>(function_1<double>, 5.0);
  auto y2 = tf(x);

  auto vx  = arr_to_vec(x);
  auto vy  = arr_to_vec(y);
  auto vy2 = arr_to_vec(y2);

  plt::plot(vx,vy);
  plt::plot(vx,vy2);
  plt::show();

  return 0;
}
