#include "SedLoser.hpp"

/* Constructor */
SedLoser::SedLoser(void) {
}

/* Destructor */
SedLoser::~SedLoser(void) {
}

std::string	SedLoser::parseLine(std::string rline, std::string s1, std::string s2) {
	size_t	s1Len = s1.length();
	for(size_t pos = 0; pos < s1Len; pos++) {
		if (rline.compare(pos, s1Len, s1) == 0) {
			rline.erase(pos, s1Len);
			rline.insert(pos, s2);
		}
	}
	return (rline);
}

bool	SedLoser::openFile(std::string pathFile) {
	const char *cfile = &pathFile[0];
	if (this->iFileStream.is_open())
		this->iFileStream.close();
	if (pathFile == "") {
		std::cerr << "Must be a valid fileName" << std::endl;
		return (false);
	}
	else {
		this->iFileStream.open(cfile);
		this->fileName = pathFile;
		return (true);
	}
}

bool	SedLoser::replace(std::string s1, std::string s2) {
	std::string	rline;
	std::string	nline = "";
	if (s1 == "" || s2 == "") {
		std::cout << "Not valid strings as params" << std::endl;
		return (false);
	}
	while (std::getline(this->iFileStream, rline)) {
		rline = SedLoser::parseLine(rline, s1, s2);
		if (nline != "")
			nline += "\n";
		nline += rline;
	}
	s3 = nline;
	this->iFileStream.close();
	return (true);
}

void	SedLoser::writeToFile(void) {
	std::ofstream	oFileStream;
	std::string		outPathFile;

	outPathFile = this->fileName;
	outPathFile += ".replace";

	const char	*cco = &outPathFile[0];

	oFileStream.open(cco);
	oFileStream << this->s3;
	oFileStream.close();
}