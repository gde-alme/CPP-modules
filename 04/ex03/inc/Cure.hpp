#ifndef __CURE_HPP__
#define __CURE_HPP__

# include "AMateria.hpp"

class Cure : public AMateria {
    private:
        std::string _type;
    protected:
    public:
        Cure();
        ~Cure();
        Cure(const Cure & cp);
        Cure &operator=(const Cure & cp);
};

#endif