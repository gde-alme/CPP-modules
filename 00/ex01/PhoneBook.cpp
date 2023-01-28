/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:21:17 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/28 19:06:16 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

using	std::cout;
using	std::cin;
using	std::endl;

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}

void	PhoneBook::welcome(void) {
	this->_indexsize = 0;
	cout << "\t-------------------------------------" << endl;
	cout << "\tThis is your awesome PhoneBook" << endl;
	cout << "\t-------------------------------------" << endl;
	cout << "\tOPTIONS:" << endl << endl;;
	cout << "\tADD" << endl;
	cout << "\tSEARCH" << endl;
	cout << "\tEXIT" << endl;
	cout << "\t-------------------------------------" << endl;
}

void	PhoneBook::add_cc(void) {
	this->_contacts[this->_indexsize % 8].init(this->_indexsize % 8);
	this->_indexsize++;
}

void	PhoneBook::printContacts(void) {
	int	index = 0;

	cout << endl << "\t***********************" << endl;
	cout << "\t*      Contacts       *" << endl;
	cout << "\t***********************" << endl << endl;
	//while (index)
}

void	PhoneBook::search_cc(void) {
	int	index = -1;

	this->printContacts();
	while (index < 0) {
		cout << "Enter contact index to display it's attributes: " << std::flush;
		cin >> index;
		if (cin.good() && (index >= 0 && index <= 8)) {
			break ;
		}
		else {
			cin.clear();
			cin.ignore();
		}
	}
	cout << index << std::flush;
}
