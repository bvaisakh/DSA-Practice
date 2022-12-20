#ifndef UDEMY_BIBLE_COMP_PROG_EXAMPLES_SIEVE_OF_ERATOSTHENES_H
#define UDEMY_BIBLE_COMP_PROG_EXAMPLES_SIEVE_OF_ERATOSTHENES_H

constexpr int Nmax = 10000;

bool* sieveOfEratosthenes(int limit) {
  bool isPrimeArr[Nmax] = {false};
  isPrimeArr[2] = true;
  isPrimeArr[3] = true;
  for (int i = 2; i <= limit; i++) {
    if (isPrimeArr[i] == true) {
      for (int j = i * 2; j <= limit; j += i) {
        isPrimeArr[j] = false;
      }
    }
  }

  return isPrimeArr;
}

#endif  // UDEMY_BIBLE_COMP_PROG_EXAMPLES_SIEVE_OF_ERATOSTHENES_H
