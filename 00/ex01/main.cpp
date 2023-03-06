/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:21:38 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/28 18:56:21 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main() {
	PhoneBook	phoneb;
	std::string		input = "";
	bool	valid;

	phoneb.welcome();
	while (input.compare("EXIT")) {
		if (input.compare("ADD") == 0)
			phoneb.add_cc();
		else if (input.compare("SEARCH") == 0)
			phoneb.search_cc();
		valid = false;
		while (!valid) {
			std::cout << "> " << std::flush;
			std::getline(cin, input);
			if (cin.good() && !input.empty() && input.find(32) > 999)
				valid = true;
			else {
				std::cin.clear();
				std::cout << "Not valid input!" << std::endl;
			}
		}
	}
	return (0);
}