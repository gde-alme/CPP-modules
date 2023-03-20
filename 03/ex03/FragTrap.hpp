#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
    private:
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap & cp);
        ~FragTrap();
        FragTrap &operator=(const FragTrap & cp);
        void    highFiveGuys();
};