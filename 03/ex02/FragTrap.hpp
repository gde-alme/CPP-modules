#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    private:
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap & cp);
        ~FragTrap();
        FragTrap &operator=(const FragTrap & cp);
        void    highFiveGuys();
};