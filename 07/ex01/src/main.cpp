#include "../inc/iter.hpp"

int main() {
	std::string	arr[] = {"ola", "adeus", "ok"};

	myspace::iter(arr, 3, &(myspace::writeOut));
}
