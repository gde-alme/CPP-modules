#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/macros.h"

/* constructors */
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
	if (VERBOSE)
		std::cout << "[RobotomyRequestForm] protected constructor called" << std::endl;
	this->_target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
	if (VERBOSE)
		std::cout << "[RobotomyRequestForm] target constructor called" << std::endl;
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : AForm(ref) {
	if (VERBOSE)
		std::cout << "[RobotomyRequestForm] copy constructor called" << std::endl;
	*this = ref;
}

/* destructors */
RobotomyRequestForm::~RobotomyRequestForm() {
	if (VERBOSE)
		std::cout << "[RobotomyRequestForm] default destructor called" << std::endl;
}

/* operators */
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref) {
	if (VERBOSE)
		std::cout << "[RobotomyRequestForm] copy operator called" << std::endl;
	this->_target = ref._target;
	return (*this);
}