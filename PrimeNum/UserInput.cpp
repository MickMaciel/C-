//
//  UserInput.cpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "UserInput.hpp"
#include <iostream>

int  UserInput::inputLimit() {
		 
	int limit = 0;
	std::cout << "Digite um numero maior que 2" << std::endl;
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
