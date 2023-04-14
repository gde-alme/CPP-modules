#include "../inc/BitcoinExchange.hpp"

int main() {
	BitcoinExchange	btcExcApi;

	try {
		btcExcApi.parseCsv("data.csv");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (0);
	}
	btcExcApi.parseEval("ex.txt");
	return (0);
}
