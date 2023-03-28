#include "../inc/Bureaucrat.hpp"

//exec with argv "talk" to test << operator
int main() {
	//Bureaucrat Ford; //throw exception error
	try {
		Bureaucrat Ford("Ford", 152);
	}
	catch (Bureaucrat::GradeTooHighException &e) { std::cout << e.what() << std::endl; }
	catch (Bureaucrat::GradeTooLowException &e) { std::cout << e.what() << std::endl; }
	return (0);
}