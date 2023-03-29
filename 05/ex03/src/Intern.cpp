#include "../inc/Intern.hpp"
#include "../inc/macros.h"

Intern::Intern() {
	if (VERBOSE)
		std::cout << "[Intern] A wild intern appears" << std::endl;
}

Intern::Intern(const Intern &ref) {
	if (VERBOSE)
		std::cout << "[Intern] A copy of a wild intern appears" << std::endl;
	*this = ref;
}

Intern::~Intern() {
	if (VERBOSE)
		std::cout << "[Intern] The intern got promoted" << std::endl;
}

Intern	&Intern::operator=(const Intern &ref) {
	if (this != &ref) {/*-Werror*/}
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target) {
	//function pointers or switch since no if/else chain if allowed
}
