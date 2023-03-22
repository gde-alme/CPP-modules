#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main() {
    Brain marvin;

    marvin.addIdea("melhorar marvin");

    std::cout << "Marvin ideias: " << marvin.getIdea(0) << std::endl;

    const Animal  *AnimalArray[100];
    for (int i = 0; i < 100; i++) {
        if (i < 50)
            AnimalArray[i] = new Dog();
        else
            AnimalArray[i] = new Cat();
    }

    /* test for deep copies */
    for (int copy = 0; copy < 100; copy++) {
        std::cout << "My type is: " << std::flush;
        AnimalArray[copy]->getType();
        std::cout << "And I make: " << std::flush;
        AnimalArray[copy]->makeSound();
    }

    for (int j = 0; j < 100; j++) {
        delete AnimalArray[j];
    }
}