#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "[FIXED] default construtor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const int num) {
	std::cout << "[FIXED] construtor[1] called" << std::endl;
	/* simple bitshift */
	this->_fixedPointValue = num << this->_fractionalBits;
}

Fixed::Fixed(const float num) {
	std::cout << "[FIXED] construtor[2] called" << std::endl;
	/* algo just bc */
	this->_fixedPointValue = roundf(num * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &oldfpn) {
	std::cout << "[FIXED] copy construtor called" << std::endl;
	this->_fixedPointValue = oldfpn._fixedPointValue;
}

Fixed::~Fixed() {
	std::cout << "[FIXED] destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &oldfpn) {
	std::cout << "[FIXED] copy assignment operator called" << std::endl;
	if (this != &oldfpn)
		this->_fixedPointValue = oldfpn.getRawBits();
	return (*this);
}

int     Fixed::getRawBits() const {
	std::cout << "[FIXED] [getRawBits] function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "[FIXED] [setRawBits] function called" << std::endl;
	this->_fixedPointValue = raw;
}

float     Fixed::toFloat() const {
	/* reverse of magic algo */
	std::cout << "[FIXED] [toFloat] function called" << std::endl;
	return (this->_fixedPointValue / (1 << this->_fractionalBits));
}

int		Fixed::toInt() const {
	/* reverse bitshift */
	std::cout << "[FIXED] [toInt] function called" << std::endl;
	return (this->_fixedPointValue >> this->_fractionalBits);
}