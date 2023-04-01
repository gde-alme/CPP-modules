#include "../inc/macros.hpp"
#include "../inc/Serializer.hpp"

Serialize::Serialize() {
	if (VERBOSE)
		std::cout << "[Serialize] default constructor called" << std::endl;
}

Serialize::~Serialize() {
	if (VERBOSE)
		std::cout << "[Serialize] default destructor called" << std::endl;
}