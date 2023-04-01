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
	if (this->getSliteral().length() == 1 &&\
		std::isalpha(this->getSliteral()[0]) && std::isprint(this->getSliteral()[0]))
		return (true);
	return (false);
}

bool	ScalarConverter::isInt() const {
	int j = 0;
	if (this->getSliteral()[0] == '-')
		j++;
	for (int i = j; this->_sliteral[i]; i++) {
		if (!std::isdigit(this->getSliteral()[i]) || this->getSliteral().length() > 11)
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isFloat() const {
	if (this->getSliteral().find('.') == std::string::npos || this->getSliteral()[this->getSliteral().length() - 1] != 'f'\
		|| this->getSliteral().find('.') == 0)
		return (false);
	int j = 0;
	int	float_bool = 0;
	if (this->getSliteral()[0] == '-')
		j++;
	for (int i = j; this->_sliteral[i + 1]; i++) {
		if (this->getSliteral()[i] == '.')
			float_bool++;
		if ((!std::isdigit(this->getSliteral()[i]) && this->getSliteral()[i] != '.' ) ||\
			float_bool >  1)
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isDouble() const {
	if (this->getSliteral().find('.') == std::string::npos || this->getSliteral().find('.') == 0)
		return (false);
	int j = 0;
	int	float_bool = 0;
	if (this->getSliteral()[0] == '-')
		j++;
	for (int i = j; this->_sliteral[i]; i++) {
		if (this->getSliteral()[i] == '.')
			float_bool++;
		if ((!std::isdigit(this->getSliteral()[i]) && this->getSliteral()[i] != '.' ) ||\
			float_bool >  1)
			return (false);
	}
	return (true);
}

bool	ScalarConverter::isSpecial() const {
	if (this->getSliteral() == "")
		return (true);
	return (false);
}

std::string ScalarConverter::getSliteral() const {
	return (_sliteral);
}

void	ScalarConverter::setType() {
	if (this->isChar()) {
		this->_type = CHAR_T; }
	else if (this->isInt()) {
		this->_type = INT_T; }
	else if (this->isFloat()) {
		this->_type = FLOAT_T; }
	else if (this->isDouble()) {
		this->_type = DOUBLE_T; }
	else if (this->isSpecial()) {
		this->_type = SPECIAL_T; }
}

/* actions */
void	ScalarConverter::convert() {
	std::cout << this->isDouble() << std::endl;
}