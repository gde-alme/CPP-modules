#ifndef __SCALARCONVERTER_HPP__
#define __SCALARCONVERTER_HPP__

# include <string>
# include <iostream>

class ScalarConverter {
	private:
		std::string	_sliteral;
	protected:
		ScalarConverter();
		bool	isChar() const;
		bool	isInt() const;
		bool	isFloat() const;
		bool	isDoubble() const;
	public:
		ScalarConverter(std::string);
		ScalarConverter(const ScalarConverter &);
		~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &);

		std::string	getSliteral() const;
};

std::ostream	&operator<<(std::ostream &, const ScalarConverter &);

#endif