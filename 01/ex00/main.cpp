#include "Zombie.hpp"

int	main() {
	Zombie	*chad = newZombie("chad");
	chad->announce();
	randomChump("CHAD");
	delete chad;
}
