#include "../inc/ScalarConverter.hpp"
#include "../inc/macros.hpp"

/* constructors */
ScalarConverter::ScalarConverter() {
	if (VERBOSE)
		std::cout << "[ScalarConverter] private constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(std::string sliteral) : _sliteral(sliteral) {
	if (VERBOSE)
		std::cout << "[ScalarConverter] default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &ref) : _sliteral(ref.getSliteral()) {
	if (VERBOSE)
		std::cout << "[ScalarConverter] copy constructor called" << std::endl;
}

/* destructors */
ScalarConverter::~ScalarConverter() {
	if (VERBOSE)
		std::cout << "[ScalarConverter] default destructor called" << std::endl;
}

/* overload operators */
ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &ref) {
	if (VERBOSE)
		std::cout << "[ScalarConverter] copy overload operator called" << std::endl;
	this->_sliteral = ref.getSliteral();
	return (*this);
}

std::ostream	&operator<<(std::ostream &fd, const ScalarConverter &ref) {
	ref.getSliteral(); //-Werror
	return (fd);
}

/* utils */
bool	ScalarConverter::isChar() const {
	if (this->_sliteral[0] >= 32 && this->_sliteral[0] <= 126)
		return (true);
	return (false);
}

bool	ScalarConverter::isInt() const {
	for (int i = 0; this->_sliteral[i]; i++) {
		if (this->_sliteral[i] < 48 || this->_sliteral[i] > 57)
			return (false);
		else if (//atoi is bigger then MAX_INT || smaller then MIN_INT)
	}
	return (true);
}

std::string ScalarConverter::getSliteral() const {
	return (_sliteral);
}