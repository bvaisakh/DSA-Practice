#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>

int GetModularExponent(int a, long long n, int mod) { return 0; }

TEST(FastModularExponentiation, Simple)
{
  int modularExponent = GetModularExponent(2, 2, 3);
//  ASSERT_THAT()
}

