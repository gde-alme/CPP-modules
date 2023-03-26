#include "../inc/Character.hpp"
#include "../inc/macros.hpp"

Character::Character() {
	if (VERBOSE)
		std::cout << "[Character] default constructor called" << std::endl;
	this->_name = "Somebody";
}

Character::~Character() {
	if (VERBOSE)
		std::cout << "[Character] default destructor called" << std::endl;
}

Character::Character(const Character &ref) : ICharacter(ref) {
	if (VERBOSE)
		std::cout << "[Character] default copy constructor called" << std::endl;
	*this = ref;
}

Character	&Character::operator=(const Character &ref) {
	if (VERBOSE)
		std::cout << "[Character] copy operator overload called" << std::endl;
}

std::string	const & Character::getName() const {
	return (this->_name);
}

void	Charater::equip