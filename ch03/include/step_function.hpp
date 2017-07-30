#ifndef STEP_FUNCTION_HPP
#define STEP_FUNCTION_HPP

auto step_function(auto x)
{
  auto y = x;
  for (std::size_t i=0; i<x.size(); ++i) {
    y(i) = (x(i) < 0)?  0 : 1;
  }
  return y;
}

#endif
