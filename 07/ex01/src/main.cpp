#include "../inc/iter.hpp"
#include "../inc/data.hpp"

int main() {
	std::string	arr[] = {"ola", "adeus", "ok"};

	myspace::iter(arr, 3, &(myspace::writeOut));

	std::cout << std::endl << "Yes yes" << std::endl << std::endl;

	Data	data_arr[2];

	data_arr[0] = Data("Goncalo", 100);
	data_arr[1] = Data("Peixinho", 42);

	myspace::iter(data_arr, 2, &(myspace::writeOut));
}