#ifndef __SCALARCONVERTER_HPP__
#define __SCALARCONVERTER_HPP__

# include <string>
# include <iostream>

# define CHAR_T		1;
# define INT_T		2;
# define FLOAT_T	3;
# define DOUBLE_T	4;
# define SPECIAL_T	5;

class ScalarConverter {
	private:
		std::string	_sliteral;
		int			_type;
		std::string	_stringConvert;
		int 		_intConvert;
		float		_floatConvert;
		double		_doubleConvert;
	protected:
		ScalarConverter();
		bool	isChar() const;
		bool	isInt() const;
		bool	isFloat() const;
		bool	isDouble() const;
		bool	isSpecial() const;
		void	setType();
	public:
		ScalarConverter(std::string);
		ScalarConverter(const ScalarConverter &);
		~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &);

		std::string	getSliteral() const;
		void		convert();
};

std::ostream	&operator<<(std::ostream &, const ScalarConverter &);

#endif