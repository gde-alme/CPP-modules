#ifndef __CAT_HPP__
#define __CAT_HPP__

# include "Animal.hpp"

class Cat : public Animal {
    private:
    protected:
    public:
        Cat();
        Cat(const Cat & cp);
        ~Cat();
        Cat &operator=(const Cat & cp);
        void    makeSound() const ;
};

#endif