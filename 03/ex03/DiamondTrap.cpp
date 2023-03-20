#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    if (VERBOSE)
        std::cout << "[DiamondTrap] default constructor called" << std::endl;
    this->_name = "Default";
    this->setHitPoints(FragTrap::getHitPoints());
    //this->setEnergyPoints(FragTrap::getEnergyPoints());
    //this->setAttackDamage(FragTrap::getAttackDamage());
}