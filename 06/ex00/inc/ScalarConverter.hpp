#ifndef __SCALARCONVERTER_HPP__
#define __SCALARCONVERTER_HPP__

# include <string>
# include <iostream>
# include <cstdlib>
# include <cfloat>
# include <cmath>

enum s_type {
	CHAR_T,
	INT_T,
	FLOAT_T,
	DOUBLE_T,
	SPECIAL_T,
	NO_T
};


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
		void	isImpossible();
	public:
		ScalarConverter(std::string);
		ScalarConverter(const ScalarConverter &);
		~ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &);

		std::string	getSliteral() const;
		int			getType() const;
		void		convert();

		class OverflowException : public std::exception {
			public:
				virtual const char	*what() const throw() {
					return ("overflow");
				}
		}OverflowExept;
};

std::ostream	&operator<<(std::ostream &, const ScalarConverter &);

#endif