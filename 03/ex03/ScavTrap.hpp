#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
	private:
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & cp);
		~ScavTrap();

		ScavTrap	&operator=(const ScavTrap & cp);
		void	attack(std::string const & target);
		void	guardGate();
};

#endif