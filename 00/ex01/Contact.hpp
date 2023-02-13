/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:22:18 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/31 12:14:42 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>

using	std::cout;
using	std::cin;
using	std::string;

class	Contact {
	private:
		string _firstname;
		string _lastname;
		string _nickname;
		string _phonenumber;
		string _darkestsecret;
		int	_index;
	public:
		Contact();
		~Contact();
		void	init(int index);
		string	_getInput(string prompt);
		void	preview(void);
		void	display(void);
		string	getPreview(string atributte);
};

#endif
