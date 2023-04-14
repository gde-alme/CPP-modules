#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	if (VERBOSE)
		std::cout << "[BitcoinExchange] default constructor called" << std::endl << std::endl;
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
		std::cout << "\n[BitcoinExchange] default destructor called" << std::endl;
}

bool	BitcoinExchange::__isValidCsvDataPoint(std::string str) const {

	if (std::count(str.begin(), str.end(), ',') != 1) return (false);
	return (std::isdigit(str[str.find(",") + 1]));
}

bool	BitcoinExchange::__isValidDate(std::string date) const {
	int	year, month, day;
	
	if (std::count(date.begin(), date.end(), '-') != 2) return (false);
	if (sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day) != 3) return (false);
	if (year > 2023 || year < 2009) return (false);
	if (month > 12 || month < 1) return (false);
	if (day > 31 || day < 1) return (false);
	return (true);
}

t_date	BitcoinExchange::_parseDate(std::string date) const {
	if (!__isValidDate(date)) throw invalidDate;

	int	year, month, day;
	
	sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
	t_date	newDate = {
		.year	= year,
		.month	= month,
		.day	= day
	};
	return (newDate);
}

void	BitcoinExchange::parseCsv(std::string pathToFile) {
	std::ifstream	fd(pathToFile.c_str());
	std::string	curr_line;
	t_date		date;
	float		value;
	int		line = 2;

	if (fd.is_open()) {
		std::getline(fd, curr_line);
		while (std::getline(fd, curr_line)) {
			if (__isValidCsvDataPoint(curr_line)) {
				try {
					date = _parseDate(curr_line.substr(0, curr_line.find(',')));
				} catch (std::exception &e) { std::cout << "Error: invalid date in line [" << line << "] in file [" << pathToFile << "]" << std::endl;; fd.close(); return ;}
				value = atof(curr_line.substr(curr_line.find(',') + 1).c_str());
				_dataset[date] = value;
			}
			else { 	
				std::cout << "Error: csv file: line [" << line << "]" << std::endl; 
				fd.close();
				throw invalidCsvDataPoint;
			}
			line++;
		}
		fd.close();
	} else {
		std::cerr << "Error: Failed to open file: " << pathToFile << std::endl;
		throw	openFileException;
	}
}

float	BitcoinExchange::getValue(std::string date) const {
	try { _parseDate(date); } catch (std::exception &e) { throw noHitException; }
	

	//std::map<t_date, float>::const_iterator it = _dataset.begin();
	//std::map<t_date, float>::const_iterator closest_date;

	//find year
	//month
	//day

	std::cout << "data og:" << date << std::endl;
	throw	noHitException;
}
