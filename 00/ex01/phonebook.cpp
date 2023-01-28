/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:21:17 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/28 14:52:48 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

using	std::cout;
using	std::cin;
using	std::endl;

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::welcome(void) {
	cout << "-------------------------------------" << endl;
	cout << "This is your awesome PhoneBook" << endl;
	cout << "-------------------------------------" << endl;
	cout << "OPTIONS:" << endl << endl;;
	cout << "ADD" << endl;
	cout << "SEARCH" << endl;
	cout << "EXIT" << endl;
	cout << "-------------------------------------" << endl;
}

void	PhoneBook::add_cc(void) {
	static int	i;
	this->_contacts[i % 8].init(i % 8);
	i++;
}
