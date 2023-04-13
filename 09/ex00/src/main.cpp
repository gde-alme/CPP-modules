#include "../inc/BitcoinExchange.hpp"

int main() {
	BitcoinExchange	btcExcApi;

	try {
		btcExcApi.parseCsv("data.csv");
	} catch (std::exception &e) {
		std::cout << "Error: " << std::endl;
	}

	std::cout << btcExcApi.getValue("2009-01-03") << std::endl;
	std::cout << btcExcApi.getValue("2009-01-01") << std::endl;
}
