/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:22:11 by gde-alme          #+#    #+#             */
/*   Updated: 2023/03/23 14:22:12 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
    private:
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap & cp);
        ~FragTrap();
        FragTrap &operator=(const FragTrap & cp);
        void    highFiveGuys();
};