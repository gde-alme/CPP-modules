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
			}
		}
		fd.close();
	} else {
		std::cerr << "Error: Failed to open file: " << pathToFile << std::endl;
		throw	openFileException;
	}
}

float	BitcoinExchange::getValue(std::string date) const {
	//try { _parseDate(date); } catch (std::exception &e) { throw noHitException; }
	
	if (_dataset.find(date) != _dataset.end())
		return (_dataset.find(date)->second);

	std::map<std::string, float>::const_iterator it = _dataset.begin();
	std::map<std::string, float>::const_iterator closest_date; //implement hash table ?

	std::cout << "data og:" << date << std::endl;

	for (std::size_t i = 1; i != date.length(); i++) {
		while (it != _dataset.end()) {
			if (it->first.substr(0, i) != date.substr(0, i)) {
				closest_date = it;
				it++;
			}
			else
				break ;
		}
		if (it == _dataset.end()) { 
			i = 1; 
			std::cout << date << std::endl;
		       	if ((date[3] > '0')
				throw noHitException;
		}
	}
	if (it != _dataset.end()) {
		std::cout << closest_date->first << " : " << std::flush;
		return (closest_date->second);
	}
	throw	noHitException;
}
