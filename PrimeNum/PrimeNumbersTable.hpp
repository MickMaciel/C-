//
//  PrimeNumbersTable.hpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#ifndef PrimeNumbersTable_hpp
#define PrimeNumbersTable_hpp

#include <stdio.h>

/*
===========================================================================
classe principal responsável por manusear o armazenamento
e a leitura dos números primos gerados <vector>
R: Como ainda não sei usar a classe <vetor>,
vou implementar como tenho costume de fazer, depois melhoramos isso.
R: Sempre que se le ou se escreve na tabela o indice é incrementado
automaticamete para próxima posição.
*/
class PrimeNumbersTable {

public:
  PrimeNumbersTable(unsigned long sizeTable);
  void init(); // Deve ser executado no inicio de main()!
  unsigned long readTable();
  unsigned long readTable(unsigned long index); // sobrecarga para admitir
                                                // escolha aleatória do índice
  void writeTable(
      unsigned long primeNumber);

private:
  void clearTable();
  void indexTableInit();
  unsigned long sizeTable;
  unsigned long *table; // tamanho do array será determinado na instaciacao
  unsigned long indexReadTable; // R: por via de dúvidas, usemos tabelas grandes
  unsigned long indexWriteTable;

}; // end class PrimeNumberTable

#endif /* PrimeNumbersTable_hpp */
