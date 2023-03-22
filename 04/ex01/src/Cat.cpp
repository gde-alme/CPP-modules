#include "../inc/Cat.hpp"

Cat::Cat() {
    if (VERBOSE)
        std::cout << "[CAT] default constructor called" << std::endl;
    this->myBrain = new Brain();
    this->_type = "Cat";
}

Cat::Cat(const Cat & cp) : Animal(cp){
    if (VERBOSE)
        std::cout << "[CAT] default copy constructor called" << std::endl;
    *this = cp;
}

Cat::~Cat() {
    if (VERBOSE)
        std::cout << "[CAT] default destructor called" << std::endl;
    delete this->myBrain;
}

Cat     &Cat::operator=(const Cat & cp) {
    if (VERBOSE)
        std::cout << "[CAT] copy overload operator called" << std::endl;
    this->_type = cp._type;
    this->myBrain = cp.myBrain;
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Cat custom sound" << std::endl;
}