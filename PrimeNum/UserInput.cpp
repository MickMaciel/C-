//
//  UserInput.cpp
//  
//
//  Created by Mick Maciel on 27/02/2024.
//

#include <iostream>
#include "UserInput.hpp"

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
