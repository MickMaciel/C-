//
//  PrimeNumbersTable.hpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "main.hpp"

#ifndef PrimeNumbersTable_hpp
#define PrimeNumbersTable_hpp

/*
===========================================================================
classe principal responsável por manusear o armazenamento
e a leitura dos números primos gerados <vector>
*/

class PrimeNumbersTable {

public:
  PrimeNumbersTable(unsigned int sizeTable);
  ~PrimeNumbersTable();
  
  void init(); // Deve ser sempre executado antes da primeira utilização da instancia

  void initRead();
  void setReadPosition(unsigned int readPosition); 
  unsigned int readTable();
  void writeTable(unsigned int primeNumber);
  bool isItFull();

private:
  void clearTable();
  void initWrite();

  unsigned int sizeTable;
  unsigned int *table; // tamanho do array será determinado na instaciacao
  unsigned int indexReadTable; 
  unsigned int indexWriteTable;

}; 

#endif /* PrimeNumbersTable_hpp */
