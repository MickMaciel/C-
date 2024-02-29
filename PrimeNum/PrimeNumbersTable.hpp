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
R: Seguindo os princípios SOLID, quebrei a classe original PrimeNumbersTable.
Agora os métodos foram transformados em objetos especializados em lidar com PrimeNumbersTable.
*/
//-----------------------------------------------------------------------------------
class PrimeNumbersTable {

public:
  PrimeNumbersTable(unsigned long sizeTable);
  ~PrimeNumbersTable();

  void init(); // Deve ser sempre executado antes da primeira urilização do objeto  
  bool isItFull();

private:
  void clearTable();

  unsigned long sizeTable;
  unsigned long *table; // tamanho do array será determinado na instaciacao
};

//-----------------------------------------------------------------------------------
class ReadTable {

public:

  ReadTable(PrimeNumbersTable* Table);

  void init(); // Deve ser sempre executado antes da primeira urilização do objeto
  unsigned long readTable();
  unsigned long readTable(unsigned long index); // sobrecarga para admitir
                                                // escolha aleatória do índice
private:
  PrimeNumbersTable* Table;
  void indexInit();
  unsigned long indexReadTable; // R: por via de dúvidas, usemos tabelas grandes
};

//-----------------------------------------------------------------------------------
class WriteTable {

public:
  void init(); // Deve ser sempre executado antes da primeira urilização do objeto
  void writeTable(unsigned long primeNumber);

private:
  void indexInit();
  unsigned long indexWriteTable; // R: por via de dúvidas, usemos tabelas grandes
};

#endif /* PrimeNumbersTable_hpp */
