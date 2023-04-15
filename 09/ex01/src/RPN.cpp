#include "../inc/RPN.hpp"

RPN::RPN() {
	if (VERBOSE)
		std::cout << "[RPN] default constructor called" << std::endl;
}

RPN::RPN(const RPN &ref) {
	if (VERBOSE)
		std::cout << "[RPN] default constructor called" << std::endl;
	*this = ref;
}

RPN	&RPN::operator=(const RPN &ref) {
	if (this != &ref) {
	}
	return (*this);
}

RPN::~RPN() {
	if (VERBOSE)
		std::cout << "[RPN] default destructor called" << std::endl;
}

bool	is_valid(char c) {
	return (c != '+' && c != '-' && c != '*' && c != '/');
}

int	RPN::computeString(std::string rpn_string) {
	//double	result;
	char	c;
	int	num;

	std::istringstream iss(rpn_string);
	while (iss.get(c)) {
		if (std::isdigit(c)) {
			iss.putback(c);
			iss >> num;
			std::cout << num << std::endl;
			if (num > 10 || num < 0) throw	invalidToken;
			_stack.push(num);
		} else if (std::isspace(c)) {
			continue ;
		} else {
			if (!is_valid(c))
				throw	invalidToken;
			if (c == '+') {

			}
			continue ;
		}
	}
	return (3);
}
