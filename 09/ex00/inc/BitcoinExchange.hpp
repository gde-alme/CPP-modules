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
 * 
 *
 *
 * */
 typedef struct s_date {
 	int	year;
	int	month;
	int	day;

	bool operator<(const s_date &ref) const {
		if (year < ref.year) return true;
    		if (year == ref.year) {
			if (month < ref.month) return true;
			if (month == ref.month) return (day < ref.day);
		}
		return (false);
  	}	
}t_date;

/**
 *	BitcoinExchange class: 
 *	@parseCsv:	populates a map<date, value> with data from a data.csv file.
 *	@getValue:	retrieves each given date to the corresponding value. 
 *	@parseEval:	iterates through a txt file calling getValue for each valid date.
*/
class BitcoinExchange {
	private:
		std::map<t_date, float>	_dataset;
	protected:
		bool	__isValidDate(std::string) const;
		bool	__isValidCsvDataPoint(std::string) const;
		t_date	_parseDate(std::string) const;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &);
		BitcoinExchange	&operator=(const BitcoinExchange &);

		~BitcoinExchange();

		void	parseCsv(std::string pathToFile);
		float	getValue(std::string date) const;

		class openFileException : public std::exception {
			virtual const char *what() const throw() {
				return("Can't solve file name");
			}
		}openFileException;

		class invalidCsvDataPoint : public std::exception {
			virtual const char *what() const throw() {
				return("Invalid csv data point");
			}
		}invalidCsvDataPoint;
		
		class invalidDate : public std::exception {
			virtual const char *what() const throw() {
				return("Invalid date");
			}
		}invalidDate;

		class noHitException : std::exception {
			virtual const char *what() const throw() {
				return("No hit on map<string, float>");
			}
		}noHitException;
};

#endif
