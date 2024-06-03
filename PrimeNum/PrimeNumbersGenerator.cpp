//
//  PrimeNumbersGenerator.cpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "PrimeNumbersGenerator.hpp"

bool PrimeNumbersGenerator::isPrime(int number) const {
  if (number <= 1 || number % 2 == 0)
    return false;

  for (int i = 2; i * i <= number; ++i) {
    if (number % i == 0) {
      return false;
   	}
  }
}

void PrimeNumbersGenerator::generate(PrimeNumbersTable *primeTable, unsigned int inputLimit) {

  unsigned int numero;
  unsigned int prime;
  bool record;

  primeTable->init();
  primeTable->writeTable(2); 

  for (numero = 3; numero <= inputLimit; numero++) {

    record = true;                       
    primeTable->initRead();      

    while ((prime = primeTable->readTable()) != 0)   {   
      if (numero % prime == 0) {                        
        record = false;                                
        break;    
      }
      	
    }

    if (record == true) primeTable->writeTable(numero);
  }
}
