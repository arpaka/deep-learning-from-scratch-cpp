#ifndef XT_HELPER_HPP
#define XT_HELPER_HPP

namespace xt {

  template <typename T>
  uint ndim(T x) {
    return x.shape().size();
  }

  template <typename T>
  T flatten(T x) {
    T y = x;
    uint dim = 1;
    for (uint i=0; i<y.shape().size(); ++i) {
      dim = dim * y.shape()[i];
    }
    y.reshape({dim});
    return y;
  }

};

#endif
