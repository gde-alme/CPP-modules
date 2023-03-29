#include "../inc/ShrubbertCreationForm.hpp"
#include "../inc/macros.h"

/* constructors */
ShrubbertCreationForm::ShrubbertCreationForm() : AForm("ShrubbertCreation", 145, 137) {
	if (VERBOSE)
		std::cout << "[ShrubbertCreationForm] protected constructor called" << std::endl;
	this->_target = "";
}

ShrubbertCreationForm::ShrubbertCreationForm(std::string target) : AForm("ShrubbertCreation", 145, 137) {
	if (VERBOSE)
		std::cout << "[ShrubbertCreationForm] useful constructor called" << std::endl;
	this->_target = target;
}

ShrubbertCreationForm::ShrubbertCreationForm(const ShrubbertCreationForm &ref) : AForm(ref) {
	if (VERBOSE)
		std::cout << "[ShrubbertCreationForm] copy constructor called" << std::endl;
	*this = ref;
}

/* destructors */
ShrubbertCreationForm::~ShrubbertCreationForm() {
	if (VERBOSE)
		std::cout << "[ShrubbertCreationForm] default destructor called" << std::endl;
}

/* operators */
ShrubbertCreationForm &ShrubbertCreationForm::operator=(const ShrubbertCreationForm &ref) {
	if (VERBOSE)
		std::cout << "[ShrubbertCreationForm] copy operator called" << std::endl;
	this->_target = ref._target;
	return (*this);
}

void	ShrubbertCreationForm::myFunc() {
	std::string fd_name(this->_target + "_shrubbery");
	std::ofstream	fd(&fd_name[0]);
	fd << "           \\/ |    |/" << std::endl;
	fd << "        \\/ / \\||/  /_/___/_" << std::endl;
	fd << "         \\/   |/ \\/" << std::endl;
	fd << "    _\\__\\_\\   |  /_____/_" << std::endl;
	fd << "           \\  | /          /" << std::endl;
	fd << "  __ _-----`  |{,-----------~" << std::endl;
	fd << "            \\ }{" << std::endl;
	fd << "             }{{" << std::endl;
	fd << "             }}{" << std::endl;
	fd << "             {{}" << std::endl;
	fd << "       , -=-~{ .-^- _" << std::endl;
	fd << "  ejm        `}" << std::endl;
	fd << "              {" << std::endl;
	fd.close();
}