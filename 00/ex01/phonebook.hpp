/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:11:05 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/27 13:44:50 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <string>
# include <iostream>

class	PhoneBook {
	private:
		std::string	input;
	public:
		PhoneBook();
		~PhoneBook();
		void	welcome(void);
		void	get_input(void);
};

#endif
