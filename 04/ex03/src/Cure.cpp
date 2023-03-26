#include "../inc/Cure.hpp"
#include "../inc/macros.hpp"

Cure::Cure() {
    if (VERBOSE)
        std::cout << "[Cure] default constructor called" << std::endl;
    this->_type = "cure";
}

Cure::Cure(const Cure & cp) : AMateria(cp) {
    if (VERBOSE)
        std::cout << "[Cure] default copy constructor called" << std::endl;
    *this = cp;
}

Cure & Cure::operator=(const Cure & cp) {
    if (VERBOSE)
        std::cout << "[Cure] copy overload operator called" << std::endl;
    this->_type = cp._type;
	return (*this);
}

Cure::~Cure() {
    if (VERBOSE)
        std::cout << "[Cure] default destructor called" << std::endl;
}

std::string const & Cure::getType() const {
    return (this->_type);
}

Cure    *Cure::clone() const {
    Cure    *cp = new Cure;
    return (cp);
}

void    Cure::use(ICharacter &target) {
    std::cout << this->getType() << " heals " << target.getName() << " wounds" << std::endl;
}