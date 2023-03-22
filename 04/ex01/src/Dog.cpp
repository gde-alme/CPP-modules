#include "../inc/Dog.hpp"

Dog::Dog() {
    if (VERBOSE)
    std::cout << "[Dog] default constructor called" << std::endl;
    this->myBrain = new Brain();
    this->_type = "Dog";
}

Dog::Dog(const Dog & cp) : Animal(cp) {
    if (VERBOSE)
    std::cout << "[Dog] default copy constructor called" << std::endl;
    *this = cp;
}

Dog::~Dog() {
    if (VERBOSE)
    std::cout << "[Dog] default destructor called" << std::endl;
    delete this->myBrain;
}

Dog &Dog::operator=(const Dog & cp) {
    if (VERBOSE)
    std::cout << "[Dog] default copy operator overload called" << std::endl;
    this->myBrain = cp.myBrain;
    this->_type = cp._type;
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "Dog custom sound" << std::endl;
}