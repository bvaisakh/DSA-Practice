#include "prime_factors.h"

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>
#include <math.h>

int getNumber(ResultStruct result_struct) {
  if (result_struct.len < 1) {
    return 0;
  }

  int num = 1;
  for (int i = 0; i < result_struct.len; i++) {
    int factor = result_struct.factors[i];
    int exponent = result_struct.exponents[i];

    num *= pow(factor, exponent);
  }
  return num;
}

TEST(PrimeFactors, InvalidInput) {
  ResultStruct result_struct = GetPrimeFactors(0);

  ASSERT_THAT(getNumber(result_struct), 0);
}

TEST(PrimeFactors, FactorsOfOne) {
  ResultStruct result_struct = GetPrimeFactors(1);

  ASSERT_THAT(getNumber(result_struct), 1);
}

TEST(PrimeFactors, FactorsOfTwo) {
  ResultStruct result_struct = GetPrimeFactors(2);

  ASSERT_THAT(getNumber(result_struct), 2);
}

TEST(PrimeFactors, FactorsOfThree) {
  ResultStruct result_struct = GetPrimeFactors(3);

  ASSERT_THAT(getNumber(result_struct), 3);
}

TEST(PrimeFactors, FactorsOfFour) {
  ResultStruct result_struct = GetPrimeFactors(4);

  ASSERT_THAT(getNumber(result_struct), 4);
}

TEST(PrimeFactors, FactorsOfEight) {
  ResultStruct result_struct = GetPrimeFactors(8);

  ASSERT_THAT(getNumber(result_struct), 8);
}

TEST(PrimeFactors, FactorsOfHundred) {
  ResultStruct result_struct = GetPrimeFactors(100);

  ASSERT_THAT(getNumber(result_struct), 100);
}
