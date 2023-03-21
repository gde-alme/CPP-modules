#ifndef __DOG_HPP__
#define __DOG_HPP__

# include "Animal.hpp"

class Dog : public Animal {
    private:
    public:
        Dog();
        Dog(const Dog & cp);
        ~Dog();
        Dog &operator=(const Dog & cp);
        void    makeSound() const;
};

#endif