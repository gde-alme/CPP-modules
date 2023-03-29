#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"
#include "../inc/ShrubbertCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

//exec with argv "talk" to test << operator
int main() {
	ShrubbertCreationForm cume("cume");
	std::cout << cume << std::endl;
	//cume.myFunc();
	//RobotomyRequestForm hello("siga");
	//hello.myFunc();
	return (0);
}