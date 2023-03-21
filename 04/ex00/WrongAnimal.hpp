#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

# include <iostream>

# ifndef VERBOSE
# define VERBOSE true
# endif

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal & cp);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal & cp);
        std::string getType() const;
        void    makeSound() const;
};

#endif