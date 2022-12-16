#ifndef IS_PRIME_H
#define IS_PRIME_H

#include <math.h>

inline bool IsPrime(int n) {
  if (n < 2) {
    return false;
  }

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

#endif  // IS_PRIME_H
