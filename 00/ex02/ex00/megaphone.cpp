/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:21:58 by gde-alme          #+#    #+#             */
/*   Updated: 2023/03/07 17:05:44 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv) {
	int	i = 0;

	if (argc != 2) {
		if (argc == 1)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[1][i] != '\0') {
		if (argv[1][i] > 96 && argv[1][i] < 123)
			std::cout << (char)(argv[1][i] - 32);
		else
			std::cout << (char)argv[1][i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
