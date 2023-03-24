#include "../inc/Ice.hpp"
#include "../inc/macros.hpp"

Ice::Ice() {
	if (VERBOSE)
		std::cout << "[Ice] default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice & cp) : AMateria(cp) {
	if (VERBOSE)
		std::cout << "[Ice] default copy constructor called" << std::endl;
	*this = cp;
}

Ice::~Ice() {
	if (VERBOSE)
		std::cout << "[Ice] default destructor called" << std::endl;
}

Ice & Ice::operator=(const Ice & cp) {
	if (VERBOSE)
		std::cout << "[Ice] copy overload operator called" << std::endl;
	this->_type = cp._type;
	return (*this);
}