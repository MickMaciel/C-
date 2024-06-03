#include "main.hpp"
#include "PrimeNumbersTable.hpp"
#include "PrimeNumbersGenerator.hpp"
#include "UserInput.hpp"

/*
===========================================================================
*/
int main() {
	// Instanciando objetos das classes
	PrimeNumbersGenerator primeGenerator;
  UserInput userInput;
  PrimeNumbersTable primeTable(1000);
  

reiniciar:
  //pegar o limit
  int limit = userInput.inputLimit();
 
  // Inicializando a tabela de números primos
  primeGenerator.generate(&primeTable, limit);

  // Exibindo os números primos armazenados na tabela
  std::cout << "Numeros primos ate " << limit << ":" << std::endl;
  
unsigned long prime;
  primeTable.initRead();
  while ((prime = primeTable.readTable()) != 0) {
    std::cout << prime << " ";
  }

 	std::cout << std::endl << std::endl << "break point 6     "; system("PAUSE");
 	
 	goto reiniciar; 
 	
  return 0;
}
