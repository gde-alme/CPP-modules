/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:21:17 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/31 12:25:01 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>

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

	std::cout << "\t ___________________________________________ " << std::endl;
	std::cout << "\t|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "\t|----------|----------|----------|----------|" << std::endl;
	while (index < this->_indexsize && this->_indexsize != 0) {
		this->_contacts[index].preview();
		index++;
	}
	cout << "\t -------------------------------------------" << std::endl;
}

void	PhoneBook::search_cc(void) {
	int	index = -1;
	bool	valid = false;

	this->printContacts();
	while (!valid) {
		cout << "Insert contact index: " << std::flush;
		cin >> index;
		if (cin.good() && (index >= 0 && index < this->_indexsize)) {
			valid = true;
		}
		else {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Must be a valid index!" << std::endl;
		}
	}
	this->_contacts[index].display();
}
