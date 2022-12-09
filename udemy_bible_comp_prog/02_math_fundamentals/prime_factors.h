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

  result_struct.len = 1;
  result_struct.factors[0] = 1;
  result_struct.exponents[0] = 0;

  return result_struct;
}

#endif  // PRIME_FACTORS_H
