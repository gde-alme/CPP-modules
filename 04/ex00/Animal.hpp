#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

# include <iostream>

# ifndef VERBOSE
# define VERBOSE true
# endif

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal & cp);
        ~Animal();
        Animal &operator=(const Animal & cp);
        virtual std::string getType() const;
        virtual void    makeSound() const;
};

#endif