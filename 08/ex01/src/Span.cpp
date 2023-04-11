#include "../inc/Span.hpp"

Span::Span() {
	if (VERBOSE)
		std::cout << "[Span] default constructor called" << std::endl;
}

Span::~Span() {
	if (VERBOSE)
		std::cout << "[Span] default destructor called" << std::endl;
}

Span::Span(unsigned int N) : _N(N) {
	if (VERBOSE)
		std::cout << "[Span] constructor called" << std::endl;
}

Span::Span(const Span &ref) {
	if (VERBOSE)
		std::cout << "[Span] copy constructor called" << std::endl;
	*this = ref;
}

Span	Span::operator=(const Span &ref) {
	if (this != &ref) {
		this->_N = ref._N;
		this->_arr = ref._arr;
	}
	return (*this);
}

void	Span::addNumber(int num) {
	std::cout << this->_arr.size() << std::endl;
	if (this->_arr.size() >= _N)
		throw MaxCapacityEx;
	this->_arr.push_back(num);
}
