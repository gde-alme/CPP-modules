/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:25:22 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/28 18:52:17 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

using std::cout;
using std::cin;
using std::string;

Contact::Contact() {
}

Contact::~Contact() {
}

string	Contact::_getInput(string prompt) {
	string	input = "";
	bool	valid = false;

	while (!valid) {
		cout << prompt << std::flush;
		std::getline(cin, input);
		if (cin.good() && !input.empty())
			valid = true;
		else {
			cin.clear();
			cout << "Invalid input" << std::endl;
		}
	}
	return (input);
}

void	Contact::init(int index) {
	cin.ignore();
	this->_firstname = this->_getInput("Enter first name: ");
	this->_lastname = this->_getInput("Enter last name: ");
	this->_nickname = this->_getInput("Enter nickname: ");
	this->_phonenumber = this->_getInput("Enter phone number: ");
	this->_darkestsecret = this->_getInput("Enter darkest secret: ");
	this->_index = index;
}
