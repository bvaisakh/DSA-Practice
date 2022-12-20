#include "sieve_of_eratosthenes.h"

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

#include "is_prime.h"

TEST(SieveOfErastosthenes, limit_5) {
  bool* isPrimeArr = sieveOfEratosthenes(5);
  for (int i = 0; i < 5; i++) {
    if (isPrimeArr[i] != IsPrime(i)) {
      FAIL() << "Failed at " << i;
    }
  }
  SUCCEED();
}

TEST(SieveOfErastosthenes, random_limit) {
  int randomNumber = rand();
  int limit = randomNumber > 10000 ? randomNumber % 10000 : randomNumber;
  bool* isPrimeArr = sieveOfEratosthenes(limit);
  for (int i = 0; i < 5; i++) {
    if (isPrimeArr[i] != IsPrime(i)) {
      FAIL() << "Failed at " << i;
    }
  }
  std::cout << "Succeeded for a limit of " << limit;
  SUCCEED();
}