#include "SedLoser.hpp"

int	main() {
	SedLoser myLoser;

	myLoser.openFile("ex.txt");
	myLoser.replace("ola", "adeus");
	myLoser.writeToFile();
}