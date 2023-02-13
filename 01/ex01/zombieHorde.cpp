#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	int	i = -1;
	Zombie	*mob = new Zombie[N];
	while (++i < N) {
		mob[i].setName(name);
	}
	return (mob);
}
