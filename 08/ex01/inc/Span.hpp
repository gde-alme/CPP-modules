#ifndef __SPAN_HPP__
#define __SPAN_HPP__

# ifndef VERBOSE
# define VERBOSE true
# endif

# include <iostream>
# include <vector>

class Span {
	private:
		unsigned int		_N;
		std::vector<int>	_arr;
		Span();
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &);
		Span	operator=(const Span &);

		void	addNumber(int);
		void	addNumbers();

		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		class MaxCapacityException : std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Vector size limit");
				};
		}MaxCapacityEx;

		class NoElementsException : std::exception {
			public:
				virtual const char *what() const throw() {
					return ("No elements to get Span");
				};
		}NoElementsEx;
};

#endif
