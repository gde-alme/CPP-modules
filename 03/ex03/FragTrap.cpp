#include "FragTrap.hpp"

FragTrap::FragTrap() {
    if (VERBOSE)
        std::cout << "[FragTrap] default constructor called" << std::endl;
    this->setName("Default");
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(100);
}

FragTrap::FragTrap(std::string name) {
    if (VERBOSE)
        std::cout << "[FragTrap] name constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(100);
}

FragTrap::FragTrap(const FragTrap & cp) : ClapTrap(cp) {
    if (VERBOSE)
        std::cout << "[FragTrap] copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & cp) {
    if (VERBOSE)
        std::cout << "[FragTrap] copy overload operator called" << std::endl;
    ClapTrap::operator=(cp);
    return (*this);
}

FragTrap::~FragTrap() {
}

void    FragTrap::highFiveGuys() {
	if (this->getHitPoints() <= 0 || this->getEnergyPoints() <= 0)
		return ;
    std::cout << this->getName() << " tries to high five guys" << std::endl;
}