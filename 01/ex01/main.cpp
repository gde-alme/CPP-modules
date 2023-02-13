#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main() {
	Zombie	*mob = zombieHorde(42, "Chad");
	for (int i = 0; i < 42; i++)
		mob[i].announce();
	delete [] mob;
}
