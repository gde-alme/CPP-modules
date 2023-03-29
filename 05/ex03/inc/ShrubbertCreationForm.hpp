#ifndef __SHRUBBERTCREATIONFORM_HPP__
#define __SHRUBBERTCREATIONFORM_HPP__

# include "AForm.hpp"
# include <fstream>


class ShrubbertCreationForm : public AForm {
	private:
		std::string _target;
	protected:
		ShrubbertCreationForm();
	public:
		ShrubbertCreationForm(std::string);
		ShrubbertCreationForm(const ShrubbertCreationForm &);
		~ShrubbertCreationForm();
		ShrubbertCreationForm	&operator=(const ShrubbertCreationForm &);
		void	execute(Bureaucrat const &) const;
};

std::ostream &operator<<(std::ostream &, const ShrubbertCreationForm &);

#endif