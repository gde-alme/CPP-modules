#ifndef __RPN_HPP__
#define __RPN_HPP__

# include <iostream>
# include <stack>
# include <string>

# ifndef VERBOSE
# define VERBOSE true
# endif


/*
 *	RPN class:
 *	@computeString:
 */
class RPN {
	public:
		RPN();
		RPN(const RPN &);
		~Rpn();

		RPN	operator=(const RPN &);

		float	computeString(std::string);
	private:
		std::stack<double>	_stack;
};

#endif
