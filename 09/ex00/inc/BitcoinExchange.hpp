#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__

# include <map>
# include <string>
# include <iostream>
# include <fstream>
# include <algorithm>
# include <cstdlib>

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
		std::map<std::string, float>	_dataset;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &);
		BitcoinExchange	&operator=(const BitcoinExchange &);

		~BitcoinExchange();

		void	parseCsv(std::string pathToFile);
		float	getValue(std::string date) const;

		class openFileException : std::exception {
			virtual const char *what() const throw() {
				return("Can't solve file name");
			}
		}openFileException;

		class noHitException : std::exception {
			virtual const char *what() const throw() {
				return("No hit on map<string, float>");
			}
		}noHitException;
};

/**
 * 
 *
 *
 * */
 typedef Struct s_date {
 	
 }t_date;

#endif
