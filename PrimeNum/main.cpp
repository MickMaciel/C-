#include "PrimeNumbersGenerator.hpp"
#include "PrimeNumbersTable.hpp"
#include "UserInput.hpp"
#include <iostream>

/*
===========================================================================
M
*/
int main() {
  // Instanciando objetos das classes
  PrimeNumbersGenerator primeGenerator;
  UserInput userInput;
  PrimeNumbersTable primeTable();

  // pegar o limit
  int limit = userInput.inputLimit();

  // Inicializando a tabela de números primos
  primeTable.init();

  for (int number; number < limit; number++) {
    if (primeGenerator.isPrime(number)) {
      primeTable.writeTable(number);
    }
  }

  // Exibindo os números primos armazenados na tabela
  std::cout << "Números primos até " << limit << ":" << std::endl;
  unsigned long prime;
  while ((prime = primeTable.readTable()) != 0) {
    std::cout << prime << " ";
  }

  return 0;
}
