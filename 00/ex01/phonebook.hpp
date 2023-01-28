/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:11:05 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/28 14:42:31 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include "contact.hpp"

class	PhoneBook {
	private:
		Contact	_contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	welcome(void);
		void	add_cc(void);
};

#endif
