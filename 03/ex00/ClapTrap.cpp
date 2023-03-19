/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:03:44 by gde-alme          #+#    #+#             */
/*   Updated: 2023/03/19 16:38:22 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	if (VERBOSE)
		std::cout << "[ClapTrap] default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	if (VERBOSE)
		std::cout << "[ClapTrap] default destructor called" << std::endl;
}

void    ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
		return ;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " taking " << this->_attackDamage << std::endl;
	this->_energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
		return ;
	std::cout << this->_name << " is repairing himself " << amount << " hitPoints" << std::endl;
	this->_hitPoints += amount;
}