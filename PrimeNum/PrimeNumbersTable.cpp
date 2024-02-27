//
//  PrimeNumbersTable.cpp
//  
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "PrimeNumbersTable.hpp"

class PrimeNumbersTable {

public:
  PrimeNumbersTable (unsigned long sizeTable);
  void init();
  unsigned long readTable();
  unsigned long readTable(unsigned long index);  //sobrecarga para admitir escolha aleatória do índice
  bool writeTable (unsigned long primeNumber);   //responde se foi possível escrever na tabela

private:
  void clearTable();
  void indexTableInit();
  const unsigned long sizeTable;
  unsigned long table[sizeTable];   //R: por via de dúvidas, usemos números grandes 
  unsigned long indexReadTable;     //R: por via de dúvidas, usemos tabelas grandes
  unsigned long indexWriteTable;

}; //end class PrimeNumberTable

PrimeNumbersTable::PrimeNumbersTable (unsigned long sizeTable)  //Construtor
  : sizeTable(sizeTable)
{
  init();
}

void PrimeNumbersTable::init() {

  clearTable();
  indexTableInit();

}

unsigned long PrimeNumbersTable::readTable() {

  if (indexReadTable >= sizeTable) return 0;
  return table[indexReadTable++];  //R: usa indexReadTable, depois incrementa

}

unsigned long PrimeNumbersTable::readTable(unsigned long index) {

  indexReadTable = index;
  readTable();

}

bool PrimeNumbersTable::writeTable (unsigned long primeNumber) {

  if (indexWriteTable >= sizeTable) return false;
  table[indexWriteTable] = primeNumber;
  indexWriteTable++;
  return true;

}

void  PrimeNumbersTable::clearTable() {

  unsigned long index;
  for (index = 0; index < sizeTable; index++) table[index] = 0; //Limpa dado na posição atual da tabela

}

void  PrimeNumbersTable::indexTableInit() {

  indexReadTable = indexWriteTable = 0;

}
