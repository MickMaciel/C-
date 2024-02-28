//
//  PrimeNumbersGenerator.cpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "PrimeNumbersGenerator.hpp"
#include <cstdint>

class PrimeNumbersGenerator {
public:
  bool isPrime(int number) const {
    if (number <= 1 || number % 2 == 0)
      return false;

    for (int i = 2; i * i <= number; ++i) {
      if (number % i == 0) {
        return false;
      }
    }
  };
