#include "../inc/ICharacter.hpp"
#include "../inc/macros.hpp"

ICharacter::ICharacter() {
	if (VERBOSE)
		std::cout << "[ICharacter] default constructor called" << std::endl;
}

ICharacter::~ICharacter() {
	if (VERBOSE)
		std::cout << "[ICharacter] default destructor called" << std::endl;
}