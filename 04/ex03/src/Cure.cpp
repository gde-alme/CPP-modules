#include "../inc/Cure.hpp"
#include "../inc/macros.hpp"

Cure::Cure() {
    if (VERBOSE)
        std::cout << "[Cure] default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::~Cure() {
    if (VERBOSE)
        std::cout << "[Cure] default destructor called" << std::endl;
}

Cure::Cure(const Cure & cp) : AMateria(cp) {
    if (VERBOSE)
        std::cout << "[Cure] default copy constructor called" << std::endl;
	*this = cp;
}

Cure & Cure::operator=(const Cure & cp) {
    if (VERBOSE)
        std::cout << "[Cure] copy overload operator called" << std::endl;
	this->_type = cp._type;
	return (*this);
}