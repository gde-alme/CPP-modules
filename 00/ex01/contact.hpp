/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:22:18 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/26 19:26:06 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>

using	std::string;

class	Contact {
	private:
		string _firstname;
		string _lastname;
		string _nickname;
		string _phonenumber;
		int	_index;
	public:
		Contact();
		~Contact();
};

#endif
