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
		if (!std::isdigit(this->getSliteral()[i]))
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
	if (this->_sliteral == "-inff" || this->_sliteral == "+inff" || this->_sliteral == "nanf")
		return (true);
	if (this->_sliteral == "-inf" || this->_sliteral == "+inf" || this->_sliteral == "nan")
		return (true);
	return (false);
}

void	ScalarConverter::isImpossible() {
	char	*end;
	long	tmp;
	double	tmp2;
	switch (this->getType()) {
		case INT_T:
			tmp = std::strtol(this->_sliteral.c_str(), &end, 10);
			if (tmp > 2147483647 || tmp < -2147483648) {
				throw OverflowExept;
				break ;
			}
			this->_intConvert = static_cast<int>(tmp);
			break;
		case FLOAT_T:
			tmp2 = std::atof(this->_sliteral.c_str());
			if (tmp2 > FLT_MAX || tmp2 < FLT_MIN) {
				throw OverflowExept;
				break ;
			}
			this->_floatConvert = static_cast<float>(tmp2);
			break;
		case DOUBLE_T:
			this->_doubleConvert = std::atof(this->_sliteral.c_str());
			if (std::isinf(_doubleConvert)) {
				throw OverflowExept;
				break ;
			}
			break ;
	}
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
	else this->_type = NO_T;
}

int		ScalarConverter::getType() const {
	return (this->_type);
}

/* actions */
void	ScalarConverter::convert() {
	this->setType();
	try {
		this->isImpossible();
	} catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
		return ;
	}
	switch (this->getType()) {
		case CHAR_T:
			std::cout << this->getSliteral()<<std::endl;
			break;
	}
}