#include "main.hpp"
#include "PrimeNumbersGenerator.hpp"
#include "PrimeNumbersTable.hpp"
#include "UserInput.hpp"

/*
===========================================================================
M
*/
int main() {
		
	std::cout << "break point 1          "; system("PAUSE");	
	
	// Instanciando objetos das classes
	PrimeNumbersGenerator primeGenerator;
  UserInput userInput;
  PrimeNumbersTable primeTable(500);
  
	std::cout << "break point 2          "; system("PAUSE");

  //pegar o limit
  int limit = userInput.inputLimit();
  //unsigned long limit = 30; // teste
  
	std::cout << "break point 3          "; system("PAUSE");

  // Inicializando a tabela de números primos
  primeTable.init();
  
  for (int number = 0; number < limit; number++) {
    if (primeGenerator.isPrime(number)) {
      primeTable.writeTable(number);
    }
	std::cout << "break point 4          "; system("PAUSE"); 	    
  }
  
 	std::cout << "break point 5          "; system("PAUSE");

  // Exibindo os números primos armazenados na tabela
  std::cout << "Números primos até " << limit << ":" << std::endl;
  unsigned long prime;
  while ((prime = primeTable.readTable()) != 0) {
    std::cout << prime << " ";
  }

  return 0;
}
