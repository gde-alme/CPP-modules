#include "../inc/macros.h"
#include "../inc/AMateria.hpp"

AMateria::AMateria() {
	if (VERBOSE)
		std::cout << "[AMateria] interface default constructor called" << std::endl;
	this->_type = "Default";
}

AMateria::AMateria(std::string const & type) {
	if (VERBOSE)
		std::cout << "[AMateria] interface constructor called" << std::endl;
	this->_type = type;
}

AMateria::AMateria(const AMateria & cp) {
	if (VERBOSE)
		std::cout << "[AMateria] interface default constructor called" << std::endl;
	*this = cp;
}

AMateria::~AMateria() {
	if (VERBOSE)
		std::cout << "[AMateria] interface default destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria & cp) {
	if (VERBOSE)
		std::cout << "[AMateria] interface copy overload operator called" << std::endl;
	this->_type = cp._type;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->_type);
}