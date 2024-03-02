//
//  PrimeNumbersGenerator.cpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "PrimeNumbersGenerator.hpp"
//#include <cstdint>

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
  primeTable->writeTable(2); //Começa com o número primo 2

  for (numero = 3; numero <= inputLimit; numero++) {

    record = true;                 //enables the inclusion of a prime number in the vector        
    primeTable->initRead();        //Returns to the first prime number in the list

    while ((prime = primeTable->readTable()) != 0)   {   //Run the loop until it finds the first empty location in the vector
      if (numero % prime == 0) {                        //checks whether the current number is divisible by any of the prime numbers already added to the vector
        //if numero is divisible by prime, it not is prime!!!
        record = false;                                //Prevents inclusion of the current number in the vector
        break; //Exit the while loop   
      }
      	//std::cout << "break point 4 " << numero << "  "; system("PAUSE"); 	
    }

    if (record == true) primeTable->writeTable(numero);
  }
}
