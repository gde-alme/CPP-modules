#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	if (VERBOSE)
		std::cout << "[BitcoinExchange] default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref) {
	if (VERBOSE)
		std::cout << "[BitcoinExchange] copy constructor called" << std::endl;
	*this = ref;
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &ref) {
	if (VERBOSE)
		std::cout << "[BitcoinExchange] copy overload operator called" << std::endl;
	this->_dataset = ref._dataset;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {
	if (VERBOSE)
		std::cout << "[BitcoinExchange] default destructor called" << std::endl;
}

void	BitcoinExchange::parseCsv(std::string pathToFile) {
	std::ifstream	fd(&pathToFile[0]);
	std::string	curr_line;

	if (fd.is_open()) {
		while (std::getline(fd, curr_line)) {
			//check if date && value is valid
			//	year-month-day
			//		year >= 2009 && <= 2023
			//		month > 0 && <= 12
			//		day > 0 && <= 31
			//	value >= 0 && <= 1000
			//add to map
		}
		fd.close();
	} else {
		std::cerr << "Error: Failed to open file: " << pathToFile << std::endl;
	}
}
