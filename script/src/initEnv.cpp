#include "../inc/cpp.hpp"

void	Cpp::initEnv(std::string prog_name) {
	std::ofstream	makef("Makefile");
	std::ifstream	makef_ex("data/Makefile");
	std::string	curr_line;

	if (makef.is_open()) {
		if (makef_ex.is_open()) {
			while (std::getline(makef_ex, curr_line)) {
				makef << curr_line << std::endl;
			}
			makef_ex.close();
		}
		makef.close();
	}
}
