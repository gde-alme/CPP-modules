#ifndef __WRONGCAT_HPP__
#define __WRONGCAT_HPP__

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    private:
    protected:
    public:
        WrongCat();
        WrongCat(const WrongCat & cp);
        ~WrongCat();
        WrongCat &operator=(const WrongCat & cp);
        void    makeSound() const ;
};

#endif