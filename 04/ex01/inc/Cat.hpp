#ifndef __CAT_HPP__
#define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain*  myBrain;
    protected:
    public:
        Cat();
        Cat(const Cat & cp);
        ~Cat();
        Cat &operator=(const Cat & cp);
        void    makeSound() const ;
};

#endif