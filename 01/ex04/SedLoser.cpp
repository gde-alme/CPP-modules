#include "SedLoser.hpp"

/* Constructor */
SedLoser::SedLoser(std::string file_n) {
	SedLoser::openFile(file_n);
	std::cout << this->fileName << std::endl;
}

/* Destructor */
SedLoser::~SedLoser() {
}

bool	SedLoser::openFile(std::string file_n) {
	if (this->iFileStream.is_open())
		this->iFileStream.close();
	if (file_n == "") {
		std::cerr << "Must be a valid fileName" << std::endl;
		return (false);
	}
	else {
		this->iFileStream.open(file_n);
		this->fileName = file_n;
		return (true);
	}
}