#ifndef PRIME_FACTORS_H
#define PRIME_FACTORS_H

#include <stdio.h>

#include <cassert>
#include <cstdlib>

struct ResultStruct {
  int len;
  int factors[100];
  int exponents[100];
};

ResultStruct GetPrimeFactors(int n) {
  ResultStruct result_struct;
  result_struct.len = 0;

  if (n == 1) {
    result_struct.len = 1;
    result_struct.factors[0] = 2;
    result_struct.exponents[0] = 0;
  }

  if (n > 1) {
    int d = 2;

    while (d <= n) {
      int k = 0;
      while (n % d == 0) {
        k++;
        n /= d;
      }

      if (k > 0) {
        result_struct.factors[result_struct.len] = d;
        result_struct.exponents[result_struct.len] = k;
        result_struct.len++;
      }

      d++;
    }
  }

  return result_struct;
}

#endif  // PRIME_FACTORS_H
