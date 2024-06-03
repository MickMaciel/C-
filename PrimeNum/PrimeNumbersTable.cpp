//
//  PrimeNumbersTable.cpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "PrimeNumbersTable.hpp"

//--------------------------------------------------------------------------
PrimeNumbersTable::PrimeNumbersTable (unsigned int sizeTable) //Construtor
  : sizeTable(sizeTable)
{
  table = new unsigned int[sizeTable]; 
}


PrimeNumbersTable::~PrimeNumbersTable() {   //Destrutor
  delete[] table; 
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
unsigned int PrimeNumbersTable::readTable() {

  if (indexReadTable >= sizeTable) return 0;
  return table[indexReadTable++]; 
}

//--------------------------------------------------------------------------
bool PrimeNumbersTable::isItFull() {

  return (indexWriteTable >= sizeTable);
}

//--------------------------------------------------------------------------
// Armazena um valor na tabela na posicao indexWriteTable
void PrimeNumbersTable::writeTable(unsigned int primeNumber) {

  if (isItFull() == true) return;
  table[indexWriteTable] = primeNumber;
  indexWriteTable++;
}

//--------------------------------------------------------------------------
void PrimeNumbersTable::clearTable() {

    initWrite();
    while(isItFull() == false) writeTable(0); 
  
}

//--------------------------------------------------------------------------
void PrimeNumbersTable::setReadPosition(unsigned int readPosition) {

  indexReadTable = readPosition;
}

//--------------------------------------------------------------------------
void PrimeNumbersTable::initRead() {

  setReadPosition(0);
}

//--------------------------------------------------------------------------
void PrimeNumbersTable::initWrite() {

  indexWriteTable = 0;
}
