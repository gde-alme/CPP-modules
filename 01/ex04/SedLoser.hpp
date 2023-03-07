#ifndef __SEDLOSER_HPP__
#define __SEDLOSER_HPP__

#include <iostream>
#include <fstream>

class SedLoser {
	public:
		SedLoser(std::string file_n);
		~SedLoser(void);

		bool	openFile(std::string file_n);
		bool	replace(std::string s1, std::string s2);

	private:
		std::string fileName;
		std::string s1;
		std::string	s2;
		std::ifstream iFileStream;
};

#endif /* __SEDLOSER_HPP__ */