#include <iostream>
#include "PrimeNumberGenerator.hpp"
#include "UserInput.hpp"
#include "PrimeNumberTable.hpp"

/*
===========================================================================
M
*/
int main() {
  // Instanciando objetos das classes
  PrimeNumberGenerator primeGenerator;
  UserInput userInput;
  PrimeNumberTable primeTable;
    
  //pegar o limit
  int limit = userInput.inputLimit();
    
    for (int i; i < limit; i++) {
        if (primeGenerator.isPrime(i) {
            primeTable.writeTable(i);
        }
    }
}
