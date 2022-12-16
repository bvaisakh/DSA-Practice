#include "sieve_of_eratosthenes.h"

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include "is_prime.h"

TEST(SieveOfErastosthenes, limit_5) {
  bool isPrimeArr[5];
  sieveOfEratosthenes(isPrimeArr);
  for (int i = 0; i < 5; i++) {
    if (isPrimeArr[i] == IsPrime(i)) {
      FAIL() << "Failed at " << i;
    }
  }
  SUCCEED();
}