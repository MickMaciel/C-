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
      return inputLimit();
    }
  }
};

/*
===========================================================================
classe principal responsável por manusear o armazenamento
e a leitura dos números primos gerados <vector>
R
*/
class PrimeNumberTable {};

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
