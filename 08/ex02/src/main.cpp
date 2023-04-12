#include "../inc/MutantStack.hpp"
#include <iostream>
#include <cstdlib>

int main() {
	MutantStack<int>	myStack;

	myStack.push(42);
	myStack.push(63);

	//std::cout << myStack.top() << std::endl;

	myStack.pop();

	//std::cout << myStack.size() << std::endl;
	
	std::cout << "##########################" << std::endl;
	srand(time(NULL));
	for (int i = 0; i < 12; i++) {
		int	v = abs(i * rand() % 100);
		std::cout << v << std::endl;
		myStack.push(v);
	}
	std::cout << "###########################" << std::endl;

	std::cout << myStack << std::endl;

	MutantStack<int>::iterator it = myStack.begin();
	MutantStack<int>::iterator it_2 = myStack.end();

	std::cout << *it << std::endl;
	std::cout << *it_2 << std::endl;
}
