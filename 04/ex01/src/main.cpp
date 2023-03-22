#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"

int main() {
    Brain marvin;

    marvin.addIdea("melhorar marvin");

    std::cout << "Marvin ideias: " << marvin.getIdea(0) << std::endl;

    Brain bebblebox(marvin);
}