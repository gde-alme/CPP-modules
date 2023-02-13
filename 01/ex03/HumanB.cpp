#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {
}

HumanB::~HumanB() {
}

void	HumanB::setWeapon(Weapon &gun) {
	this->_weapon = &gun;
}

void	HumanB::Attack() {
	std::cout << this->_name << " attacks with their weapon " << this->_weapon->getType() << std::endl;
}
