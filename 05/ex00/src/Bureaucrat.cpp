#include "../inc/Bureaucrat.hpp"
#include "../inc/macros.h"

/* constructors */
Bureaucrat::Bureaucrat() : _name(""), _grade(-1) {
	if (VERBOSE)
		std::cout << "[Bureaucrat] private constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) {
	if (VERBOSE)
		std::cout << "[Bureaucrat] default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : _name(ref.getName()), _grade(ref.getGrade()) {
	if (VERBOSE)
		std::cout << "[Bureaucrat] copy constructor called" << std::endl;
}

/* destructors */
Bureaucrat::~Bureaucrat() {
	if (VERBOSE)
		std::cout << "[Bureaucrat] default destructor called" << std::endl;
}

/* operators */
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &ref) {
	if (VERBOSE)
		std::cout << "[Bureaucrat] copy overload operator called" << std::endl;
	this->_grade = ref.getGrade();
	return (*this);
}

/* utils */
std::string Bureaucrat::getName() const {
	return (this->_name);
}

int	Bureaucrat::getGrade() const {
	return (this->_grade);
}