#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    Animal  t;
    Dog     g;
    Cat     m;

    t.makeSound();
    g.makeSound();
    m.makeSound();

    /* From subject */
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    std::cout << "i->" << std::flush;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
  
    /* ********************************* */

    /* Still from subject */
    const WrongAnimal* i_2 = new WrongCat();
   
    std::cout << i_2->getType() << " " << std::endl;
    std::cout << "i_2->" << std::flush;

    i_2->makeSound(); //will output the WrongAnimal sound!
}