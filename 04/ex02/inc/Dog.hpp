#ifndef __DOG_HPP__
#define __DOG_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    private:
		std::string	_type;
        Brain*  myBrain;
    public:
        Dog();
        Dog(const Dog & cp);
        ~Dog();
        Dog &operator=(const Dog & cp);
        std::string getType() const;
        void    makeSound() const;
};

#endif