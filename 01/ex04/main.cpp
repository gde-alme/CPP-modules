#include "SedLoser.hpp"

int	main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Usage: ./SedLoser pathToFile needle replace" << std::endl;
		return (1);
	}

	SedLoser myLoser;

	std::string	pathToFile = argv[1];
	std::string	needle = argv[2];
	std::string	replace = argv[3];

	if (pathToFile.empty() || needle.empty() || replace.empty()) {
		std::cout << "Error: bad arguments" << std::endl;
		return (2);
	}

	myLoser.openFile(pathToFile);
	myLoser.replace(needle, replace);
	myLoser.writeToFile();
}