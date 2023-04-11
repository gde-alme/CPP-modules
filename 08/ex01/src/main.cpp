#include "../inc/Span.hpp"

int main() {
	Span mySpan(2);

	mySpan.addNumber(7);
	mySpan.addNumber(12);
	try {
		mySpan.addNumber(65);
		//mySpan.addNumber(1442);
	} catch (const Span::MaxCapacityException &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
