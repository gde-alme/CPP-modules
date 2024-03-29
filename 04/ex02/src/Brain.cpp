#include "../inc/Brain.hpp"

Brain::Brain() {
    if (VERBOSE)
        std::cout << "[Brain] Default constructor called" << std::endl;
}

Brain::Brain(const Brain & cp) {
    if (VERBOSE)
        std::cout << "[Brain] Default copy constructor called" << std::endl;
    *this = cp;
}

Brain::~Brain() {
    if (VERBOSE)
        std::cout << "[Brain] Default destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain & cp) {
    if (VERBOSE)
        std::cout << "[Brain] Copy overload operator called" << std::endl;
    for (int i = 0; i < 100; i++) {
        if (cp.ideas[i].empty() > 0)
            this->ideas[i] = cp.ideas[i];
    }
    return (*this);
}

std::string Brain::getIdea(int index) const {
    return(this->ideas[index]);
}

void    Brain::addIdea(std::string idea) {
    for (int i = 0; i < 100; i++) {
        if (this->ideas[i].empty() > 0) {
            this->ideas[i].append(idea);
            break ;
        }
    }
}