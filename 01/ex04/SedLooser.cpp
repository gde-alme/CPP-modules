#include "SedLooser.hpp"

/* Constructor */
SedLooser::SedLooser() {
}

/* Destructor */
SedLooser::~SedLooser() {
}

bool	SedLooser::openFile(std::string file_n) {
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