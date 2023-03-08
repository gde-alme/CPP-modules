#ifndef __SEDLOSER_HPP__
#define __SEDLOSER_HPP__

#include <iostream>
#include <fstream>

class SedLoser {
	public:
		SedLoser(void);
		~SedLoser(void);

		bool	openFile(std::string pathFile);
		bool	replace(std::string s1, std::string s2);
		std::string	parseLine(std::string rline, std::string s1, std::string s2);
		void	writeToFile(void);

	private:
		std::string fileName;
		std::string s1;
		std::string	s2;
		std::ifstream iFileStream;
		std::string	s3;
};

#endif /* __SEDLOSER_HPP__ */