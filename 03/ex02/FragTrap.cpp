/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:22:27 by gde-alme          #+#    #+#             */
/*   Updated: 2023/03/23 14:22:28 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    if (VERBOSE)
        std::cout << "[FragTrap] default constructor called" << std::endl;
    this->setName("Default");
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(100);
}

FragTrap::FragTrap(std::string name) {
    if (VERBOSE)
        std::cout << "[FragTrap] name constructor called" << std::endl;
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttackDamage(100);
}

FragTrap::FragTrap(const FragTrap & cp) : ClapTrap(cp){
    if (VERBOSE)
        std::cout << "[FragTrap] copy constructor called" << std::endl;
    *this = cp; /* calls overload operator = */
}

FragTrap & FragTrap::operator=(const FragTrap & cp) {
    if (VERBOSE)
        std::cout << "[FragTrap] copy overload operator called" << std::endl;
    this->setName(cp.getName());
    this->setHitPoints(cp.getHitPoints());
    this->setEnergyPoints(cp.getEnergyPoints());
    this->setAttackDamage(cp.getAttackDamage());
    return (*this);
}

FragTrap::~FragTrap() {
}

void    FragTrap::highFiveGuys() {
	if (this->getHitPoints() <= 0 || this->getEnergyPoints() <= 0)
		return ;
    std::cout << this->getName() << " tries to high five guys" << std::endl;
}