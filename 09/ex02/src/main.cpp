#include "../inc/PmergeMe.hpp"

/* to test: nums=$(suff -i 1-10000 -n 5000 | tr '\n' ' '); ./exec $nums */
int main(int argc, char *argv[]) {
	PmergeMe	sorter;

	if (argc < 3) {
		std::cout << "\n\tUsage:\n\n./PmergeMe int int int int ...\n" << std::endl;
		if (argc == 2)
			std::cout << "Array must have size at least 2 int\n" << std::endl;
		return (1);
	}

	sorter.parseInput(++argv);
	sorter.sortArray();
}
