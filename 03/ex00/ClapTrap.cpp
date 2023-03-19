/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:03:44 by gde-alme          #+#    #+#             */
/*   Updated: 2023/03/19 02:30:40 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
}

ClapTrap::~ClapTrap() {
}

void    ClapTrap::attack(const std::string &target) {
}

void    ClapTrap::takeDamage(unsigned int amount) {
}

void    ClapTrap::beRepaired(unsigned int amount) {
}