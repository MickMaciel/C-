//
//  PrimeNumbersTable.cpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "PrimeNumbersTable.hpp"



//==========================================================================
PrimeNumbersTable::PrimeNumbersTable (unsigned long sizeTable) //Construtor
  : sizeTable(sizeTable)
{
  table = new unsigned long[sizeTable]; //aloca memoria para a tabela
}

//--------------------------------------------------------------------------
PrimeNumbersTable::~PrimeNumbersTable() {   //Destrutor
  delete[] table; // desaloca memoria
}

//--------------------------------------------------------------------------
// Prepara a tabela para o armazenamento dos numeros primos informados
void PrimeNumbersTable::init() {

  clearTable();
}

//--------------------------------------------------------------------------
bool PrimeNumbersTable::isItFull() {

  return (indexWriteTable >= sizeTable);
}

//--------------------------------------------------------------------------
void PrimeNumbersTable::clearTable() {

  unsigned long index;
  for (index = 0; index < sizeTable; index++)
    table[index] = 0; // Limpa dado na posição atual da tabela
}

//==========================================================================
void ReadTable::init() {

  indexReadTable = 0;
}

//--------------------------------------------------------------------------
// Retorna o valor da tabela na posicao indexReadTable
// Incremeta o indexReadTable para proxima posicao
unsigned long ReadTable::readTable() {

  if (indexReadTable >= sizeTable)
    return 0;
  return table[indexReadTable++]; // R: usa indexReadTable, depois incrementa
}

//--------------------------------------------------------------------------
// Retorna o valor da tabela na posicao passada por index
// Atribui index a indexReadTable
unsigned long ReadTable::readTable(unsigned long index) {

  indexReadTable = index;
  readTable();
}

//==========================================================================
void WriteTable::init() {

  indexReadTable = indexWriteTable = 0;
}

//--------------------------------------------------------------------------
// Armazena um valor na tabela na posicao indexWriteTable
void WriteTable::writeTable(unsigned long primeNumber) {

  if (indexWriteTable >= sizeTable)
    return;
  table[indexWriteTable] = primeNumber;
  indexWriteTable++;
}