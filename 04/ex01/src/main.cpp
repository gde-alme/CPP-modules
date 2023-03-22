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
    for (int j = 0; j < 100; j++) {
        delete AnimalArray[j];
    }
}