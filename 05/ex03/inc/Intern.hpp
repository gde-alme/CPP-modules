#ifndef __INTERN_HPP__
#define __INTERN_HPP__

# include <iostream>

class Intern {
	public:
		Intern();
		Intern(const Intern &);
		~Intern();
		Intern	&operator=(const Intern &);
		AForm *makeForm(std::string name, std::string target);
};

#endif
