/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:22:40 by gde-alme          #+#    #+#             */
/*   Updated: 2023/03/23 14:22:41 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & cp);
		~ScavTrap();

		ScavTrap	&operator=(const ScavTrap & cp);
		void	attack(std::string const & target);
		void	guardGate();
};

#endif