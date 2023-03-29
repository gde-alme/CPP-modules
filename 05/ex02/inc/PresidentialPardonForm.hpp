#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;
	protected:
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &ref);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &ref);
		void	myFunc();
};

std::ostream	&operator<<(std::ostream &fd, const PresidentialPardonForm &me);

#endif