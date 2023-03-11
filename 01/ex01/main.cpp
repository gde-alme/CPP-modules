#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main() {
	Zombie	*mob = zombieHorde(42, "Chad");
	int	i = -1;
	while (++i < 42)
		mob[i].announce();
	delete [] mob;
}
