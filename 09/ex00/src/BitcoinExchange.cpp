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

bool	_isValidCsvDataPoint(std::string str) {
	if (std::count(str.begin(), str.end(), ',') != 1) return (false);
	if (std::count(str.begin(), str.end(), '-') != 2) return (false);
	if (!std::isdigit(str[0])) return (false);
	if (!std::isdigit(str[str.find("-") + 1])) return (false);
	if (!std::isdigit(str[str.find("-", str.find("-") + 1) + 1])) return (false);
	return (std::isdigit(str[str.find(",") + 1]));
}

void	BitcoinExchange::parseCsv(std::string pathToFile) {
	std::ifstream	fd(&pathToFile[0]);
	std::string	curr_line, date;
	float		value;

	if (fd.is_open()) {
		while (std::getline(fd, curr_line)) {
			if (_isValidCsvDataPoint(curr_line)) {
				date = curr_line.substr(0, curr_line.find(','));
				value = atof(curr_line.substr(curr_line.find(',') + 1).c_str());
				_dataset[date] = value;
				std::cout << "ok" << std::endl;
				//this->_dataset.insert(std::make_pair(curr_line.substr(0, curr_line.find(',')), atof(curr_line.substr(curr_line.find(',') + 1).c_str())));
			}
			//split string in two

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

	for (std::map<std::string, float>::const_iterator it = this->_dataset.begin(); it != _dataset.end(); ++it) {
		std::cout << it->first << " : " << it->second << std::endl;
	}

}
