/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 02:03:49 by gde-alme          #+#    #+#             */
/*   Updated: 2023/03/19 02:03:51 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

# include <string>

class ClapTrap {
    private:
        std::string _name;
        int     _hitPoints;
        int     _energyPoints;
        int     _attackDamage;
    public:
        ClapTrap(std::string Name);
        ~ClapTrap();
};

#endif