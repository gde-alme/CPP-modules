#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap & cp);
        ~DiamondTrap();
        DiamondTrap & operator=(const DiamondTrap & cp);
        std::string     getMyName() const;
        void    attack(const std::string  & target);
        void    whoAmI() const;
};

#endif