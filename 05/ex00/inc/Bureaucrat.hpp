#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

# include <string>
# include <iostream>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
		Bureaucrat();
	public:
		/* constructors */
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &ref);
		/* destructors */
		~Bureaucrat();
		/* operators */
		Bureaucrat &operator=(const Bureaucrat &ref);
		/* utils */
		std::string	getName() const;
		int			getGrade() const;
};

#endif