#ifndef __CAT_HPP__
#define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    private:
        std::string _type;
        Brain*  myBrain;
    protected:
    public:
        Cat();
        Cat(const Cat & cp);
        ~Cat();
        Cat &operator=(const Cat & cp);
        std::string getType() const;
        void    makeSound() const ;
};

#endif