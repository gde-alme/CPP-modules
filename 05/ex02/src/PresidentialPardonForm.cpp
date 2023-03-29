#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/macros.h"

/* constructors */
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5) {
	if (VERBOSE)
		std::cout << "[PresidentialPardonForm] protected constructor called" << std::endl;
	this->_target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5) {
	if (VERBOSE)
		std::cout << "[PresidentialPardonForm] default constructor called" << std::endl;
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) : AForm(ref) {
	if (VERBOSE)
		std::cout << "[PresidentialPardonForm] copy constructor called" << std::endl;
	*this = ref;
}

/* destructors */
PresidentialPardonForm::~PresidentialPardonForm() {
	if (VERBOSE)
		std::cout << "[PresidentialPardonForm] default destructor called" << std::endl;
}

/* operators */
PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &ref) {
	if (VERBOSE)
		std::cout << "[PresidentialPardonForm] copy operator called" << std::endl;
	this->_target = ref._target;
	return (*this);
}