/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:25:22 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/31 12:19:12 by gde-alme         ###   ########.fr       */
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
			cout << "Invalid input!" << std::endl;
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

string	Contact::getPreview(string atributte) {
	string	resized;

	if (atributte.length() > 10) {
		resized = atributte.substr(0, 10);
		resized[9] = '.';
	}
	else
		resized = atributte.substr( 0, atributte.length());
	return (resized);
}

void	Contact::preview(void) {
	cout << "\t|" << std::setw(10) << this->_index << "|" << std::setw(10) << this->getPreview(this->_firstname) << "|" << std::setw(10) << this->_lastname << "|" << std::setw(10) << this->_nickname << "|" << std::endl;
}

void	Contact::display(void) {
	cout << "\t" << std::setw(20) << "First Name -> " << this->_firstname << std::endl;
	cout << "\t" << std::setw(20) << "Last Name -> " << this->_lastname << std::endl;
	cout << "\t" << std::setw(20) << "Nick Name -> " << this->_nickname << std::endl;
	cout << "\t" << std::setw(20) << "Phone Number -> " << this->_phonenumber << std::endl;
	cout << "\t" << std::setw(20) << "Darkest Secret -> " << this->_darkestsecret << std::endl;
}
