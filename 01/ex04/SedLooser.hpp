#ifndef __SEDLOOSER_HPP__
#define __SEDLOOSER_HPP__

#include <fstream>

class SedLooser {
	public:
		SedLooser(void);
		~SedLooser(void);
	private:
		std::string fileName;
		std::string s1;
		std::string	s2;
		std::ifstream iFileStream;
}

#endif /* __SEDLOOSER_HPP__ */