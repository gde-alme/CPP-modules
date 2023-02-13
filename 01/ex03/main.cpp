#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main() {
	{
		Weapon	club = Weapon("spike club");
		HumanA	chad("Chad", club);

		chad.Attack();
		club.setType("A better club");
		chad.Attack();
	}
	{
		Weapon	banana = Weapon("banana");
		HumanB	monkey("Monkey");

		monkey.setWeapon(banana);	
		monkey.Attack();
		banana.setType("a bigger banana");
		monkey.Attack();
	}
}
