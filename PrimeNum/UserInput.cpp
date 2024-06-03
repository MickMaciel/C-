//
//  UserInput.cpp
//
//
//  Created by Mick Maciel on 27/02/2024.
//

#include "UserInput.hpp"

int  UserInput::inputLimit() {
		 
	int limit = 0;
	std::cout << "Digite um numero maior que 2" << std::endl;
	std::cin >> limit;
	
	if (limit > 2) {
		return limit;
	}
	else {
		std::cout << "Digite um numero maior que 2" << std::endl;
		return inputLimit();
	}
}
