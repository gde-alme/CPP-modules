#ifndef __AForm_HPP__
#define __AForm_HPP__

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExec;
		AForm();
	public:
		AForm(std::string name, int gradeSign, int gradeExec);
		AForm(const AForm &ref);
		virtual ~AForm();
		AForm	&operator=(const AForm &ref);
		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeSign() const;
		int			getGradeExec() const;
		void		beSigned(const Bureaucrat &dude);
		void		execute(Bureaucrat const &executor);
		class GradeTooHighException : std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Max grade is 1");
				}
		} tooHigh;
		class GradeTooLowException : std::exception {
			public:
				virtual const char *what() const throw() {
					return ("Min grade is 150");
				}
		} tooLow;
		class FormNotSignedException : std::exception {
			public:
				virtual const char *what() const throw() {
					return ("This Form is not signed");
				}
		} notSigned;
};

std::ostream	&operator<<(std::ostream &fd, const AForm &me);

#endif