#include "../inc/BitcoinExchange.hpp"

int main(int argc, char **argv) {

	std::cout << std::fixed << std::setprecision(4) <<  423.5345f * 42372.67f << std::endl;

	if (argc != 2) {
		std::cout << "Error: Invalid Usage: ./btc file_to_parse" << std::endl;
		return (1);
	}

	BitcoinExchange	btcExcApi;

	try {
		btcExcApi.parseCsv("data.csv");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (0);
	}
	btcExcApi.parseEval(argv[1]);
	return (0);
}
