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
		ShrubbertCreationForm(std::string target);
		ShrubbertCreationForm(const ShrubbertCreationForm &ref);
		~ShrubbertCreationForm();
		ShrubbertCreationForm	&operator=(const ShrubbertCreationForm &ref);
		void	myFunc();
};

#endif