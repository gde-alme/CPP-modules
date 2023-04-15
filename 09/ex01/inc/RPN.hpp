#ifndef __RPN_HPP__
#define __RPN_HPP__

# include <iostream>
# include <stack>
# include <string>
# include <sstream>
# include <exception>

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
		~RPN();

		RPN	&operator=(const RPN &);

		int	computeString(std::string);
		class invalidTokenException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Invalid Token in input: ");
				}
		}invalidToken;
	private:
		std::stack<int>	_stack;
};

#endif
