/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-alme <gde-alme@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 19:21:58 by gde-alme          #+#    #+#             */
/*   Updated: 2023/01/26 19:22:00 by gde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::cout;
using std::endl;

int	main(int argc, char **argv) {
	int	i = 0;

	if (argc != 2) {
		if (argc == 1)
			cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	while (argv[1][i] != '\0') {
		if (argv[1][i] > 96 && argv[1][i] < 123)
			cout << (char)(argv[1][i] - 32);
		else
			cout << (char)argv[1][i];
		i++;
	}
	cout << endl;
	return (0);
}
