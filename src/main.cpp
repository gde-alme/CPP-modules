#include "../inc/cpp.hpp"

int main(int argc, char **argv, char **env) {
	Cpp	cppapi;


	if (argc == 3) {
		if (std::string(argv[1]) == "-class")
			cppapi.createClass(argv[2]);
	}
	else
		std::cout << "\nUsage:\n\tcpp -option [params]\n" << std::endl;
}
