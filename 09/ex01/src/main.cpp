#include "../inc/RPN.hpp"

int main(int argc, char **argv) {
	RPN	myRpn;
	RPN	cp = myRpn;

	if (argc == 2) {
		try {
			myRpn.computeString(argv[1]);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
			return (0);
		}
	}
}
