//
//  PrimeNumbersTable.cpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "PrimeNumbersTable.hpp"

//--------------------------------------------------------------------------
PrimeNumbersTable::PrimeNumbersTable (unsigned long sizeTable) //Construtor
  : sizeTable(sizeTable)
{
  table = new unsigned long[sizeTable]; //aloca memoria para a tabela
}


PrimeNumbersTable::~PrimeNumbersTable() {   //Destrutor
  delete[] table; // desaloca memoria
}

//--------------------------------------------------------------------------
// Prepara a tabela para o armazenamento dos numeros primos informados
void PrimeNumbersTable::init() {

  clearTable();
  initRead();
  initWrite();

}

//--------------------------------------------------------------------------
// Retorna o valor da tabela na posicao indexReadTable
// Incremeta o indexReadTable para proxima posicao
unsigned long PrimeNumbersTable::readTable() {

  if (indexReadTable >= sizeTable)
    return 0;
  return table[indexReadTable++]; // R: usa indexReadTable, depois incrementa
}

//--------------------------------------------------------------------------
// Armazena um valor na tabela na posicao indexWriteTable
void PrimeNumbersTable::writeTable(unsigned long primeNumber) {

  if (indexWriteTable >= sizeTable)
    return;
  table[indexWriteTable] = primeNumber;
  indexWriteTable++;
}

//--------------------------------------------------------------------------
bool PrimeNumbersTable::isItFull() {

  return (indexWriteTable >= sizeTable);
}

//--------------------------------------------------------------------------
void PrimeNumbersTable::clearTable() {

    initWrite();
    while(isItFull() == false) writeTable(0); 
  
}

//--------------------------------------------------------------------------
void PrimeNumbersTable::setReadPosition(unsigned long tablePosition) {

  indexReadTable = tablePosition;
}

//--------------------------------------------------------------------------
void PrimeNumbersTable::initRead() {

  setReadPosition(0);
}

//--------------------------------------------------------------------------
void PrimeNumbersTable::initWrite() {

  indexWriteTable = 0;
}