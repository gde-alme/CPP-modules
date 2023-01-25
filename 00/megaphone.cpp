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
