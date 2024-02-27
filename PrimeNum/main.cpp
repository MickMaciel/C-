#include <iostream>
#include <ostream>
#include <pthread.h>

/*
===========================================================================
gera numeros primos usando forca bruta
tem como parametro inputLimit
R
*/
class PrimeNumberGenerator {
  // public:
};

/*
===========================================================================
classe responsavel pela interacao com o usuario
inputLimite
M
*/
class UserInput {
public:
  int inputLimit() const {
    int limit = 0;
    std::cin >> limit;
    if (limit != 0) {
      return limit;
    }

    else {
      /* por isso declarei int limit = 0 inicialmente
         enquanto o arrombado nao digitar um numero nao dá sequencia */
      std::cout << "Digite um numero maior que 0" << std::endl;
      return inputLimit();  //R: Cara, isso tem cara de chamada recursiva, cuidado ai hem!!!
    }
  }
};

/*
===========================================================================
classe principal responsável por manusear o armazenamento
e a leitura dos números primos gerados <vector>
R
R: Como ainda não sei usar a classe <vetor>, 
vou implementar como tenho costume de fazer depois melhoramos isso
R: Sempre que se le se escreve na tabela o indice é incrementado automaticamete para próxima posição
*/
class PrimeNumberTable {

public:
  void init();
  unsigned long readTable();
  unsigned long readTable(unsigned long index);  //sobrecarga para admitir escolha aleatória do índice
  bool writeTable (unsigned long primeNumber);   //responde se foi possível escrever na tabela

private:
  void clearTable();
  void indexTableInit();  
  unsigned long table[];            //R: por via de dúvidas, usemos números grandes
  unsigned long indexReadTable;     //R: por via de dúvidas, usemos tabelas grandes
  unsigned long indexWriteTable;  

};

void PrimeNumberTable::init() {

  clearTable();
  indexTableInit();

}

unsigned long PrimeNumberTable::readTable() {

  if (indexReadTable >= sizeof(table)) return 0;
  return table[indexReadTable++];   //R: usa indexReadTable, depois incrementa

}

unsigned long PrimeNumberTable::readTable(unsigned long index) {

  indexReadTable = index;
  readTable();

}

bool PrimeNumberTable::writeTable (unsigned long primeNumber) {

  if (indexWriteTable >= sizeof(table)) return false;
  table[indexWriteTable] = primeNumber;
  indexWriteTable++;
  return true;   

}

void  PrimeNumberTable::clearTable() {

  unsigned long index;
  for (index = 0; index < sizeof(table); index++) table[index] = NULL; //Limpa dado na posição atual da tabela 

}

void  PrimeNumberTable::indexTableInit() {

  indexReadTable = indexWriteTable = 0;

}

/*
===========================================================================
M
*/
int main() {
  // Instanciando objetos das classes
  PrimeNumberGenerator primeGenerator;
  UserInput userInput;
  PrimeNumberTable primeTable;

  int limit = userInput.inputLimit();
}
