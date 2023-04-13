#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__

# include <map>
# include <string>
# include <iostream>
# include <fstream>

# ifndef VERBOSE
# define VERBOSE true
# endif

/**
 *	BitcoinExchange class: 
 *	@parseCsv:	populates a map<date, value> with data from a data.csv file.
 *	@getValue:	retrieves each given date to the corresponding value. 
 *	@parseEval:	iterates through a txt file calling getValue for each valid date.
*/

class BitcoinExchange {
	private:
		std::map<std::string, int>	_dataset;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &);
		BitcoinExchange	&operator=(const BitcoinExchange &);

		~BitcoinExchange();

		void	parseCsv(std::string pathToFile);
};

#endif
