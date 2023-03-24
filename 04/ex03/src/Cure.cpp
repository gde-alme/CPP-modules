#include "../inc/Cure.hpp"
#include "../inc/macros.h"

Cure::Cure() {
    if (VERBOSE)
        std::cout << "[Cure] default constructor called" << std::endl;
}

Cure::~Cure() {
    if (VERBOSE)
        std::cout << "[Cure] default destructor called" << std::endl;
}