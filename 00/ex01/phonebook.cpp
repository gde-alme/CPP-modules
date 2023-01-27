/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:21:17 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/27 14:25:45 by gde-alme         ###   ########.fr       */
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
	cout << endl;
	cout << "This is your awesome PhoneBook" << endl;
	cout << "OPTIONS" << endl;
	cout << "ADD" << endl;
	cout << "SEARCH" << endl;
	cout << "EXIT" << endl;
}

void	PhoneBook::get_input(void) {
	cin >> this->input;
}
