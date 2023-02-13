#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun): _name(name), _weapon(gun) {
}

HumanA::~HumanA() {
}

void	HumanA::Attack() {
	std::cout << this->_name << " attacks with their weapon " << this->_weapon.getType() << std::endl;
}
