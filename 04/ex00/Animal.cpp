#include "Animal.hpp"

Animal::Animal() {
    if (VERBOSE)
        std::cout << "[Animal] was born by default constructor" << std::endl; 
}

Animal::Animal(const Animal & cp) {
    if (VERBOSE)
        std::cout << "[Animal] was born by default copy constructor" << std::endl;
    this = cp;
}

Animal  & Animal::operator=(const Animal & cp) {
    this->_type = cp._type;
    return (*this);
}

Animal::~Animal() {
    if (VERBOSE)
        std::cout << "[Animal] was killed by default destructor" << std::endl; 
}