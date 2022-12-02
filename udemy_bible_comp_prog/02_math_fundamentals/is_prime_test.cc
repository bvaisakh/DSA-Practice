#include <gtest/gtest.h>

#include "is_prime.h"


TEST(IsPrime, SpecialCases) {
  EXPECT_FALSE(IsPrime(0));
  EXPECT_FALSE(IsPrime(1));
}

TEST(IsPrime, Positive) {
  EXPECT_TRUE(IsPrime(2));
  EXPECT_TRUE(IsPrime(3));
  EXPECT_TRUE(IsPrime(101));
}


TEST(IsPrime, Negative) {
  EXPECT_FALSE(IsPrime(4));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_FALSE(IsPrime(8));
  EXPECT_FALSE(IsPrime(100));
}