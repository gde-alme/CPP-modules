#include "ScavTrap.hpp"

int main() {
	ClapTrap	chad("hi");

	std::cout << "And his name is " << chad << std::endl;
	
	ScavTrap	chader("bye");
	
	std::cout << "And his name is " << chader << std::endl;

	ScavTrap	evenMchad(chader);

	evenMchad.setName(evenMchad.getName() + " lol");

	std::cout << "And his name is " << evenMchad << std::endl;
	
	chad.attack("goncalo");
	chader.setHitPoints(42);
	evenMchad.guardGate();
}