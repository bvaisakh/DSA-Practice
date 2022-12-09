#include "prime_factors.h"

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

int getNumber(ResultStruct result_struct) {
  int num = 0;
  for (int i = 0; i < result_struct.len; i++) {
    int factor = result_struct.factors[i];
    int exponent = result_struct.exponents[i];

    if (exponent == 0) {
      num += 1;
    } else {
      for (int j = exponent; j > 0; j--) {
        num += factor * exponent;
      }
    }
  }
  return num;
}

//TEST(PrimeFactors, InvalidInput) {
//  ResultStruct result_struct = GetPrimeFactors(0);
//
//  ASSERT_THAT(getNumber(result_struct), 0);
//}
//
//TEST(PrimeFactors, FactorsOfOne) {
//  ResultStruct result_struct = GetPrimeFactors(1);
//
//  ASSERT_THAT(getNumber(result_struct), 1);
//}

 TEST(PrimeFactors, FactorsOfTwo) {
   ResultStruct result_struct = GetPrimeFactors(2);

   ASSERT_THAT(getNumber(result_struct), 2);
 }
