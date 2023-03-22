#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main() {
    Brain marvin;

    marvin.addIdea("melhorar marvin");

    std::cout << "Marvin ideias: " << marvin.getIdea(0) << std::endl;

	/* create n animals; half dogs, rest cats */
    const Animal  *AnimalArray[100];
    for (int i = 0; i < 100; i++) {
        if (i < 50)
            AnimalArray[i] = new Dog();
        else
            AnimalArray[i] = new Cat();
    }

    /* test for deep copies */
    for (int copy = 0; copy < 100; copy++) {
        std::cout << "My type is: " << AnimalArray[copy]->getType() << std::endl;
        std::cout << "And I make: " << std::flush;
        AnimalArray[copy]->makeSound();
    }

	/* delete each Animal instance one by one */
    for (int j = 0; j < 100; j++) {
        delete AnimalArray[j];
    }
}