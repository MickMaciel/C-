//
//  PrimeNumbersTable.hpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "main.hpp"

#ifndef PrimeNumbersTable_hpp
#define PrimeNumbersTable_hpp

#include <stdio.h>

/*
===========================================================================
classe principal responsável por manusear o armazenamento
e a leitura dos números primos gerados <vector>
R: Como ainda não sei usar a classe <vetor>,
vou implementar como tenho costume de fazer, depois melhoramos isso.

R: O próprio objeto se encarregará de escrever numa posição ainda vazia da tabela
R: Após cada leitura, posição a ser lida é incrementada automaticamente
*/

class PrimeNumbersTable {

public:
  PrimeNumbersTable(unsigned long sizeTable);
  ~PrimeNumbersTable();
  
  void init(); // Deve ser sempre executado antes da primeira utilização da instancia

  void initRead();
  void setReadPosition(unsigned long readPosition); 
  unsigned long readTable();
  void writeTable(unsigned long primeNumber);
  bool isItFull();

private:
  void clearTable();
  void initWrite();

  unsigned long sizeTable;
  unsigned long *table; // tamanho do array será determinado na instaciacao
  unsigned long indexReadTable; // R: por via de dúvidas, usemos tabelas grandes
  unsigned long indexWriteTable;

}; // end class PrimeNumberTable

#endif /* PrimeNumbersTable_hpp */
