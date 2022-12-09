#include "prime_factors.h"

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

int getNumber(ResultStruct result_struct) {
  int num = 0;
  for (int i = 0; i < result_struct.len; i++) {
    int factor = result_struct.factors[i];
    int exponent = result_struct.exponents[i];

    for (int j = 0; j < factor; j++) {
      num += factor * exponent;
    }
  }
  return num;
}

TEST(PrimeFactors, SpecialCases) {
  ResultStruct result_struct = GetPrimeFactors(1);

  ASSERT_THAT(result_struct.len, 1);
  ASSERT_THAT(getNumber(result_struct), 0);

  // TODO
  // Check for 1, 2 then proceed
  // Move to double or float if it is done in the course
}
