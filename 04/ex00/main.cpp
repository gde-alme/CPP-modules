/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:21:22 by gde-alme          #+#    #+#             */
/*   Updated: 2023/03/23 14:21:23 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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